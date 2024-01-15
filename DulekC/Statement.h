#pragma once
#include "DuObject.h"
#include "Variable.h"
#include <llvm/IR/IRBuilder.h>
#include "AstTree.h"
#include <llvm/IR/Instructions.h>
#include "TypeContainer.h"
#include "GenTmpVariables.h"
#include "Expression.h"
#include <format>
#define DELETE_TMP_VARIABLE(X)	if(X && X->getIdentifier().getName().empty() && X->isTmp()) delete X;

class Statement : public DuObject
{


public:
	Statement(Identifier id) : DuObject(id) {}
	virtual bool isStatement() const override { return true; }
	virtual bool isAssigmentStatement() const { return false;  }
	virtual bool isReturnStatement() const { return false;  }
	virtual bool isCallFunctionStatement() const { return false;  }
	virtual DuObject* copy() const override
	{
		assert(0);
		return nullptr;
	}
	virtual void processStatement(llvm::IRBuilder<>& builder, llvm::LLVMContext& context, llvm::Module* module) const { assert(0); }
	virtual ~Statement() {}
};


class AssigmentStatement : public Statement
{
	Variable* m_left;
	Variable* m_right;
	mutable Expression* m_expr;
	bool m_hasExpr;

	void _processStatement(llvm::IRBuilder<>& builder, llvm::LLVMContext& context, llvm::Module* module) const
	{
		if (m_right && m_right->getIdentifier().getName().empty())
		{
			auto value = m_right->getValue();
			if (value->isNumericValue())
			{
				auto store = builder.CreateStore(llvm::ConstantInt::get(m_left->getLLVMType(context), static_cast<NumericValue*>(value)->getValue()), m_left->getAlloca());
				store->setAlignment(m_left->getAlligment());
				m_left->update(m_right, store->getValueOperand());
			}
			else
				assert(0);
		}
		else if (m_right && (AstTree::instance().checkVisibility(m_left, m_right) || AstTree::instance().checkGlobalVisibility(m_right)))
		{
			llvm::Value* val = nullptr;
			if (!m_right->isGlobalVariable())
			{
				val = builder.CreateLoad(m_right->getLLVMType(context), m_right->getAlloca(), m_right->getIdentifier().getName().data());
			}
			else
			{
				llvm::GlobalVariable* gv = module->getGlobalVariable(m_right->getIdentifier().getName());
				val = builder.CreateLoad(gv->getValueType(), gv, "");
			}
			if (m_right->getLLVMType(context) != m_left->getLLVMType(context)) {
				val = m_left->getType()->convertValueBasedOnType(builder, val, m_right->getLLVMType(context), context);
			}
			auto store = builder.CreateStore(val, m_left->getAlloca());
			store->setAlignment(m_left->getAlligment());
			m_left->update(m_right, store->getValueOperand());
		}
		else
		{
			const std::string format = "Undeclared variable\n";
			printf(format.c_str());
			std::exit(15);

		}
	}



	void _processStatementExpr(llvm::IRBuilder<>& builder, llvm::LLVMContext& context, llvm::Module* module) const
	{
		if (m_expr)
		{
			if (m_left->getType()->isSimpleNumericType())
			{
				m_expr->processExpression(module, builder, context, static_cast<SimpleNumericType*>(m_left->getType())->isSigned());
			}
			llvm::Value* val = m_expr->getLLVMValue(m_left->getLLVMType(context));
			delete m_expr;
			m_expr = nullptr;
			if (val->getType() != m_left->getLLVMType(context))
			{
				val = m_left->getType()->convertValueBasedOnType(builder, val, val->getType(), context);
			}
			auto store = builder.CreateStore(val, m_left->getAlloca());
			store->setAlignment(m_left->getAlligment());
			if (m_left->getType()->isSimpleNumericType())
			{
				uint64_t castedval = llvm::dyn_cast<llvm::ConstantInt>(store->getValueOperand())->getZExtValue();
				if (castedval)
				{
					auto ptr = new Variable(m_left->getIdentifier(), m_left->getType(), new NumericValue(castedval), m_left->isGlobalVariable());
					m_left->update(ptr, store->getValueOperand());
					delete ptr;
				}
			}	
		}
		else
		{
			const std::string format = "null expr\n";
			printf(format.c_str());
			std::exit(15);

		}
	}


public:
	AssigmentStatement(Variable* l, Variable* r) : Statement(Identifier("assigment statement")), m_left(l), m_right(r), m_expr(nullptr), m_hasExpr(false)
	{}
	AssigmentStatement(Variable* l, Expression* r) : Statement(Identifier("assigment statement")), m_left(l), m_right(nullptr), m_expr(r), m_hasExpr(true)
	{}
	void setRightElement(Variable* r)
	{
		assert(!m_right && !m_hasExpr);
		m_right = r;
	}
	virtual llvm::Type* getLLVMType(llvm::LLVMContext& context) const override
	{
		assert(0);
		return nullptr;
	}
	virtual llvm::Value* getLLVMValue(llvm::Type* type) const override
	{
		assert(0);
		return nullptr;
	}
	virtual void processStatement(llvm::IRBuilder<>& builder, llvm::LLVMContext& context, llvm::Module* module) const  override
	{
		if (!m_hasExpr)
			_processStatement(builder, context, module);
		else
			_processStatementExpr(builder, context, module);
	}

	virtual bool isAssigmentStatement() const override { return true; }

	virtual ~AssigmentStatement() 
	{
		DELETE_TMP_VARIABLE(m_right)
	}

};

class ReturnStatement : public Statement
{
	Variable* m_var;
	Type* m_retType;
	mutable llvm::ReturnInst* m_retInstance;
public:
	ReturnStatement(DuObject* var, DuObject* retType) : Statement(Identifier("return_stmt")), m_var(nullptr), m_retType(nullptr), m_retInstance(nullptr)
	{
		if (var && var->isVariable())
			m_var = static_cast<Variable*>(var);
		if (retType && retType->isType())
			m_retType = static_cast<Type*>(retType);
	}
	virtual llvm::Type* getLLVMType(llvm::LLVMContext& context) const override
	{
		assert(0);
		return nullptr;
	}
	virtual llvm::Value* getLLVMValue(llvm::Type* type) const override
	{
		assert(0);
		return nullptr;
	}
	virtual void processStatement(llvm::IRBuilder<>& builder, llvm::LLVMContext& context, llvm::Module*) const  override
	{
		if (m_retInstance)
			return;
		llvm::ReturnInst* retInstance = nullptr;
		if (m_retType)
		{
			if (m_var && m_retType == m_var->getType())
			{
				auto lt = m_var->getLLVMType(context);
				auto lt2 = m_retType->getLLVMType(context);
				llvm::Value* llvmRetVal = m_retType->convertValueBasedOnType(builder, m_var->getLLVMValue(nullptr), m_var->getLLVMType(context), context);
				m_retInstance = builder.CreateRet(llvmRetVal);
			}
			else
			{
				printf("Type nie pasuja\n");
				exit(15);
			}
		}
		else
		{
			m_retInstance = builder.CreateRetVoid();
		}
	}

	llvm::ReturnInst* _return()
	{
		return m_retInstance;
	}
	virtual bool isReturnStatement() const override { return true; }
	virtual ~ReturnStatement()
	{
		DELETE_TMP_VARIABLE(m_var)
	}
};



class CallFunction : public Statement
{
	std::vector<Identifier> m_args;
	Function* m_fun;
	mutable llvm::CallInst* m_ret;
	bool m_isSysFunction;
public:
	CallFunction(std::vector<Identifier>&& args, Function* fun, bool isSystem) : Statement(Identifier("call_fnc_stmt")), m_args(std::move(args)), m_fun(fun), m_isSysFunction(isSystem), m_ret(nullptr)
	{
		m_isSysFunction = m_fun->getIdentifier().getName()[0] == '$';
		AstTree& tree = AstTree::instance();
		for (auto it : m_args)
		{
			auto arg = tree.findObject(it);
			auto [isNumber, val] = it.toNumber(); 
			if (!arg && !isNumber)
			{
				std::cout << "nie znaleziono obiektu: " << it.getName() << std::endl;
				std::exit(-1);
			}
		}
	}
	virtual llvm::Type* getLLVMType(llvm::LLVMContext& context) const override
	{
		return m_fun->getLLVMType(context);
	}
	virtual llvm::Value* getLLVMValue(llvm::Type* type) const override
	{
		return m_fun->getLLVMValue(type);
	}
	virtual void processStatement(llvm::IRBuilder<>& builder, llvm::LLVMContext& context, llvm::Module* m) const override
	{ 
		AstTree& tree = AstTree::instance();
		std::vector<llvm::Value*> args;
		for (auto it : m_args)
		{
			auto [isNumber, val] = it.toNumber();
			auto arg = tree.findObject(it);
			llvm::Type* _type = nullptr;
			if (!arg && isNumber)
			{
				std::unique_ptr<Variable> uniqueArg = GeneratorTmpVariables::generateI32Variable(it, val);
				_type = uniqueArg->getLLVMType(context);
				args.push_back(uniqueArg->getLLVMValue(_type));
			}
			if (arg && arg->isVariable())
			{
				Variable* _arg = static_cast<Variable*>(arg);
				args.push_back(arg->getLLVMValue(arg->getLLVMType(context)));
			}
		}
		m_ret = builder.CreateCall(m_fun->getLLVMFunction(context, m, builder), args);
	}
	void processSystemFunc(llvm::FunctionCallee* fc, llvm::Value* str, llvm::IRBuilder<>& builder, llvm::LLVMContext& context)
	{
		AstTree& tree = AstTree::instance();
		std::vector<llvm::Value*> args;
		args.push_back(str);
		for (auto it : m_args)
		{
			auto [isNumber, val] = it.toNumber();
			auto arg = tree.findObject(it);
			llvm::Type* _type = nullptr;
			if (!arg && isNumber)
			{
				std::unique_ptr<Variable> uniqueArg = GeneratorTmpVariables::generateI32Variable(it, val);
				_type = uniqueArg->getLLVMType(context);
				args.push_back(uniqueArg->getLLVMValue(_type));
			}
			if (arg && arg->isVariable())
			{
				Variable* _arg = static_cast<Variable*>(arg);
				args.push_back(arg->getLLVMValue(arg->getLLVMType(context)));
			}	
		}
		m_ret = builder.CreateCall(*fc, args);
	}
	Identifier getFunctionName()
	{
 		return m_fun->getIdentifier();
	}
	const bool isSystemFunction() { return m_isSysFunction; }
	virtual bool isCallFunctionStatement() const override { return true; }
	virtual ~CallFunction() {}
};