
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "parser.ypp"

#include <memory>
#include <iostream>
#include <string>
#include "AstTree.h"
#include "DuObject.h"
#include "Type.h"
#include "Variable.h"
#include "Value.h"
#include "TypeContainer.h"
#include <cstdint>
#include <vector>
#include "Statement.h"
#include "FlagsSettings.h"
#include "SystemFunctions.h"
#include "Expression.h"
 extern char* yytext;
 int __cdecl yylex(void);
void yyerror(const char *s) { std::cerr  << s << "  :   " << '"' << yytext << '"' << std::endl; }

std::vector<Type*> yys_types;
std::vector<Identifier> yys_ids;




/* Line 189 of yacc.c  */
#line 100 "parser.cpp"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* "%code requires" blocks.  */

/* Line 209 of yacc.c  */
#line 26 "parser.ypp"


    #include "Type.h"
    #include "Variable.h"
    #include "DuObject.h"
    #include <memory>
    #include <string>
    #include <cstdint>
    #include <vector>
    #include "Statement.h"
    #include "Expression.h"
    // Inne wymagane nag��wki



/* Line 209 of yacc.c  */
#line 140 "parser.cpp"

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ARROW = 258,
     LBRACE = 259,
     RBRACE = 260,
     COMMA = 261,
     SEMICOLON = 262,
     LBUCKLE = 263,
     RBUCKLE = 264,
     INIT_TYPE = 265,
     ASSIGMENT = 266,
     PLUS = 267,
     MINUS = 268,
     MULTIPLICATION = 269,
     DIV = 270,
     FUNCTION_KEYWORD = 271,
     RETURN_KEYWORD = 272,
     SYS_DISPLAY = 273,
     I8 = 274,
     U8 = 275,
     I16 = 276,
     U16 = 277,
     I32 = 278,
     U32 = 279,
     I64 = 280,
     U64 = 281,
     IDENTIFIER = 282,
     NUMBER = 283
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 39 "parser.ypp"

    char* str;  
    uint64_t num; 
    Variable* pvariable;
    Type* ptype;
    NumericValue* pnumvalue;
    ObjectInByte bytetype;
    Identifier* pidentifier;
    Statement* pstatement;
    Value* pval;
    Expression* pexpr;



/* Line 214 of yacc.c  */
#line 200 "parser.cpp"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 212 "parser.cpp"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   77

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  29
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  49
/* YYNRULES -- Number of states.  */
#define YYNSTATES  81

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   283

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     4,     7,     9,    11,    13,    15,    17,
      19,    30,    40,    42,    44,    51,    56,    58,    60,    62,
      64,    66,    68,    70,    72,    74,    76,    78,    80,    81,
      83,    85,    89,    93,    95,    96,    98,   102,   107,   112,
     117,   121,   127,   129,   133,   137,   139,   143,   147,   149
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      30,     0,    -1,    -1,    30,    31,    -1,    31,    -1,    35,
      -1,    32,    -1,    33,    -1,    34,    -1,    44,    -1,    16,
      27,     4,    41,     5,     3,    38,     4,    43,     5,    -1,
      16,    27,     4,    41,     5,     3,     4,    43,     5,    -1,
       8,    -1,     9,    -1,    27,     3,    38,    10,    36,     7,
      -1,    27,     3,    38,     7,    -1,    37,    -1,    28,    -1,
      39,    -1,    40,    -1,    19,    -1,    21,    -1,    23,    -1,
      25,    -1,    20,    -1,    22,    -1,    24,    -1,    26,    -1,
      -1,    42,    -1,    28,    -1,    41,     6,    42,    -1,    41,
       6,    28,    -1,    27,    -1,    -1,    38,    -1,    43,     6,
      38,    -1,    42,    11,    42,     7,    -1,    42,    11,    36,
       7,    -1,    42,    11,    45,     7,    -1,    17,    42,     7,
      -1,    18,     4,    41,     5,     7,    -1,    46,    -1,    45,
      12,    46,    -1,    45,    13,    46,    -1,    47,    -1,    46,
      14,    47,    -1,    46,    15,    47,    -1,    28,    -1,    42,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    78,    82,    83,    84,    85,    86,    87,
      93,   108,   124,   132,   141,   148,   158,   165,   172,   180,
     189,   194,   199,   204,   210,   215,   220,   225,   230,   231,
     235,   239,   244,   251,   258,   259,   263,   272,   285,   297,
     309,   328,   344,   345,   347,   352,   353,   357,   362,   366
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ARROW", "LBRACE", "RBRACE", "COMMA",
  "SEMICOLON", "LBUCKLE", "RBUCKLE", "INIT_TYPE", "ASSIGMENT", "PLUS",
  "MINUS", "MULTIPLICATION", "DIV", "FUNCTION_KEYWORD", "RETURN_KEYWORD",
  "SYS_DISPLAY", "I8", "U8", "I16", "U16", "I32", "U32", "I64", "U64",
  "IDENTIFIER", "NUMBER", "$accept", "program", "statement",
  "function_declaration", "function_body_begin", "function_body_end",
  "variable_declaration", "just_value_init", "variable_numeric_init",
  "type", "byte_type", "ubyte_type", "argument_list", "argument",
  "type_list", "variable_assigment", "expression", "term", "factor", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    29,    30,    30,    31,    31,    31,    31,    31,    31,
      32,    32,    33,    34,    35,    35,    36,    37,    38,    38,
      39,    39,    39,    39,    40,    40,    40,    40,    41,    41,
      41,    41,    41,    42,    43,    43,    43,    44,    44,    44,
      44,    44,    45,    45,    45,    46,    46,    46,    47,    47
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     1,     1,     1,     1,     1,
      10,     9,     1,     1,     6,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     1,
       1,     3,     3,     1,     0,     1,     3,     4,     4,     4,
       3,     5,     1,     3,     3,     1,     3,     3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       2,     0,     1,    12,    13,     0,     0,     0,    33,     3,
       6,     7,     8,     5,     0,     9,     0,    33,     0,    28,
       0,     0,    28,    40,    30,     0,    29,    20,    24,    21,
      25,    22,    26,    23,    27,     0,    18,    19,    48,     0,
      16,    49,     0,    42,    45,     0,     0,     0,    15,     0,
      38,    37,    39,     0,     0,     0,     0,     0,    41,    32,
      31,    17,     0,    48,    49,    43,    44,    46,    47,     0,
      14,    34,     0,    35,     0,    34,    11,     0,     0,    36,
      10
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,     9,    10,    11,    12,    13,    39,    40,    73,
      36,    37,    25,    64,    74,    15,    42,    43,    44
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -24
static const yytype_int8 yypact[] =
{
     -24,     7,   -24,   -24,   -24,   -23,   -13,    22,    30,   -24,
     -24,   -24,   -24,   -24,    32,   -24,    42,   -24,    41,   -17,
      39,   -15,   -17,   -24,   -24,    12,   -24,   -24,   -24,   -24,
     -24,   -24,   -24,   -24,   -24,    -5,   -24,   -24,    49,    61,
     -24,    62,    -4,    13,   -24,    24,    63,     4,   -24,    43,
     -24,   -24,   -24,    17,    17,    17,    17,    69,   -24,   -24,
     -24,   -24,    66,   -24,   -24,    13,    13,   -24,   -24,    16,
     -24,    39,    70,   -24,    45,    39,   -24,    39,    47,   -24,
     -24
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -24,   -24,   -24,   -24,   -24,   -24,   -24,    26,   -24,   -20,
     -24,   -24,    54,     0,     2,   -24,   -24,     1,    11
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -18
static const yytype_int8 yytable[] =
{
      35,    14,    48,    52,    16,    49,    18,     2,    53,    54,
      17,    24,    17,    38,    17,     3,     4,    46,    47,    26,
      71,    41,    26,     5,     6,     7,    19,    55,    56,    57,
      47,    17,    59,    20,     8,    27,    28,    29,    30,    31,
      32,    33,    34,    21,    17,    63,    22,    60,    23,    72,
      76,    77,    80,    77,    65,    66,   -17,    79,    27,    28,
      29,    30,    31,    32,    33,    34,    67,    68,    50,    51,
      58,    61,    69,    70,    75,    62,    45,    78
};

static const yytype_uint8 yycheck[] =
{
      20,     1,     7,     7,    27,    10,     6,     0,    12,    13,
      27,    28,    27,    28,    27,     8,     9,     5,     6,    19,
       4,    21,    22,    16,    17,    18,     4,    14,    15,     5,
       6,    27,    28,     3,    27,    19,    20,    21,    22,    23,
      24,    25,    26,    11,    27,    28,     4,    47,     7,    69,
       5,     6,     5,     6,    53,    54,     7,    77,    19,    20,
      21,    22,    23,    24,    25,    26,    55,    56,     7,     7,
       7,    28,     3,     7,     4,    49,    22,    75
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    30,     0,     8,     9,    16,    17,    18,    27,    31,
      32,    33,    34,    35,    42,    44,    27,    27,    42,     4,
       3,    11,     4,     7,    28,    41,    42,    19,    20,    21,
      22,    23,    24,    25,    26,    38,    39,    40,    28,    36,
      37,    42,    45,    46,    47,    41,     5,     6,     7,    10,
       7,     7,     7,    12,    13,    14,    15,     5,     7,    28,
      42,    28,    36,    28,    42,    46,    46,    47,    47,     3,
       7,     4,    38,    38,    43,     4,     5,     6,    43,    38,
       5
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
	switch (*++yyp)
	  {
	  case '\'':
	  case ',':
	    goto do_not_strip_quotes;

	  case '\\':
	    if (*++yyp != '\\')
	      goto do_not_strip_quotes;
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yystacksize);

	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 10:

/* Line 1455 of yacc.c  */
#line 94 "parser.ypp"
    {
        if(!CompilerParserFlags::instance().enterFunction())
        {
            throw std::runtime_error("FN_IN_FN");
        }
        if(yys_ids.size() != yys_types.size())
        {
            throw std::runtime_error("type_size_counter_not_eq");
        }
        Function* fn = new Function(Identifier((yyvsp[(2) - (10)].str)), (yyvsp[(7) - (10)].ptype), std::move(yys_ids), std::move(yys_types), false, true);
        AstTree::instance().beginScope(fn);
        delete [] (yyvsp[(2) - (10)].str);
    ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 109 "parser.ypp"
    {
        if(!CompilerParserFlags::instance().enterFunction())
        {
            throw std::runtime_error("FN_IN_FN");
        }
        if(yys_ids.size() != yys_types.size())
        {
            throw std::runtime_error("type_size_counter_not_eq");
        }
        Function* fn = new Function(Identifier((yyvsp[(2) - (9)].str)), nullptr, std::move(yys_ids), std::move(yys_types), false, true);
        AstTree::instance().beginScope(fn);
        delete [] (yyvsp[(2) - (9)].str);
    ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 125 "parser.ypp"
    {
            if(!CompilerParserFlags::instance().isInFunction())
                throw std::runtime_error("NO_IN_FN");

        ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 133 "parser.ypp"
    {
            if(!CompilerParserFlags::instance().isInFunction())
                throw std::runtime_error("NO_IN_FN");
            AstTree::instance().endScope();
            CompilerParserFlags::instance().exitFunction();
        ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 142 "parser.ypp"
    {
        Identifier id((yyvsp[(1) - (6)].str));
        (yyval.pvariable) = new Variable(id, (yyvsp[(3) - (6)].ptype), (yyvsp[(5) - (6)].pval), AstTree::instance().inGlobal());
        AstTree::instance().addObject((yyval.pvariable));
        delete [] (yyvsp[(1) - (6)].str);
    ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 149 "parser.ypp"
    {
        Identifier id((yyvsp[(1) - (4)].str));
        (yyval.pvariable) = new Variable(id, (yyvsp[(3) - (4)].ptype), new NumericValue(), AstTree::instance().inGlobal());
        AstTree::instance().addObject((yyval.pvariable));
        delete [] (yyvsp[(1) - (4)].str);
    ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 159 "parser.ypp"
    {
        (yyval.pval) = (yyvsp[(1) - (1)].pnumvalue);
    ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 166 "parser.ypp"
    {
            (yyval.pnumvalue) = new NumericValue((yyvsp[(1) - (1)].num))
        ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 173 "parser.ypp"
    {
       Identifier id = SimpleNumericType::generateId((yyvsp[(1) - (1)].bytetype), true) ;
       TypeContainer::instance().insert<SimpleNumericType>(id, id, (yyvsp[(1) - (1)].bytetype), true);
       (yyval.ptype) = TypeContainer::instance().getType(id);
     
    ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 181 "parser.ypp"
    {
        Identifier id = SimpleNumericType::generateId((yyvsp[(1) - (1)].bytetype), true) ;
        TypeContainer::instance().insert<SimpleNumericType>(id, id, (yyvsp[(1) - (1)].bytetype), false);
        (yyval.ptype) = TypeContainer::instance().getType(id);
    ;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 190 "parser.ypp"
    {
   (yyval.bytetype) = (yyvsp[(1) - (1)].bytetype);
  ;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 195 "parser.ypp"
    {
    (yyval.bytetype) = (yyvsp[(1) - (1)].bytetype);
  ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 200 "parser.ypp"
    {
    (yyval.bytetype) = (yyvsp[(1) - (1)].bytetype);
  ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 205 "parser.ypp"
    {
    (yyval.bytetype) = (yyvsp[(1) - (1)].bytetype);
  ;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 211 "parser.ypp"
    {
    (yyval.bytetype) = (yyvsp[(1) - (1)].bytetype);
  ;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 216 "parser.ypp"
    {
    (yyval.bytetype) = (yyvsp[(1) - (1)].bytetype);
  ;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 221 "parser.ypp"
    {
    (yyval.bytetype) = (yyvsp[(1) - (1)].bytetype);
  ;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 226 "parser.ypp"
    {
   (yyval.bytetype) = (yyvsp[(1) - (1)].bytetype);
  ;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 231 "parser.ypp"
    {
        yys_ids.push_back(*(yyvsp[(1) - (1)].pidentifier));
        delete (yyvsp[(1) - (1)].pidentifier);
    ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 236 "parser.ypp"
    {
        yys_ids.push_back(Identifier(std::to_string((yyvsp[(1) - (1)].num))));
  ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 239 "parser.ypp"
    { 
  
    yys_ids.push_back(*(yyvsp[(3) - (3)].pidentifier));
    delete (yyvsp[(3) - (3)].pidentifier);
  ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 244 "parser.ypp"
    { 
  
    yys_ids.push_back(Identifier(std::to_string((yyvsp[(3) - (3)].num))));
  ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 252 "parser.ypp"
    {
        (yyval.pidentifier) = new Identifier((yyvsp[(1) - (1)].str));
        delete [] (yyvsp[(1) - (1)].str);
    ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 260 "parser.ypp"
    {
    yys_types.push_back((yyvsp[(1) - (1)].ptype));
  ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 264 "parser.ypp"
    {
    yys_types.push_back((yyvsp[(3) - (3)].ptype));
  ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 273 "parser.ypp"
    {
        if(!CompilerParserFlags::instance().isInFunction())
            throw std::runtime_error("NO_IN_FN");
        auto& tree = AstTree::instance();
		auto l = dynamic_cast<Variable*>(tree.findObject(*(yyvsp[(1) - (4)].pidentifier)));
		auto r = dynamic_cast<Variable*>(tree.findObject(*(yyvsp[(3) - (4)].pidentifier)));
        (yyval.pstatement) = new AssigmentStatement(l, r);
        tree.addObject((yyval.pstatement));
        delete (yyvsp[(1) - (4)].pidentifier);
        delete (yyvsp[(3) - (4)].pidentifier);
    ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 286 "parser.ypp"
    {
        if(!CompilerParserFlags::instance().isInFunction())
            throw std::runtime_error("NO_IN_FN");
        auto& tree = AstTree::instance();
        auto l = dynamic_cast<Variable*>(tree.findObject(*(yyvsp[(1) - (4)].pidentifier)));
        Variable* r = new Variable(Identifier(""), l->getType(), (yyvsp[(3) - (4)].pval), tree.inGlobal());
        (yyval.pstatement) = new AssigmentStatement(l, r);
        tree.addObject((yyval.pstatement));
        delete (yyvsp[(1) - (4)].pidentifier);
    ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 298 "parser.ypp"
    {
        if(!CompilerParserFlags::instance().isInFunction())
            throw std::runtime_error("NO_IN_FN");
        auto& tree = AstTree::instance();
        auto l = dynamic_cast<Variable*>(tree.findObject(*(yyvsp[(1) - (4)].pidentifier)));
        (yyval.pstatement) = new AssigmentStatement(l, (yyvsp[(3) - (4)].pexpr));
        tree.addObject((yyval.pstatement));
        delete (yyvsp[(1) - (4)].pidentifier);

    ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 310 "parser.ypp"
    {
        if(!CompilerParserFlags::instance().isInFunction())
            throw std::runtime_error("NO_IN_FN");
        auto& tree = AstTree::instance();
        auto l = tree.findObject(*(yyvsp[(2) - (3)].pidentifier));
        auto s = tree.getCurrentScope();
        if(s->isFunction())
        {
            (yyval.pstatement) = new ReturnStatement(l, static_cast<Function*>(s)->getType());
            tree.addObject((yyval.pstatement));
        }
        else
        {
             throw std::runtime_error("NOT FUNCTION");
        }
        delete (yyvsp[(2) - (3)].pidentifier);
    ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 329 "parser.ypp"
    {
        if(!CompilerParserFlags::instance().isInFunction())
            throw std::runtime_error("NO_IN_FN");
        auto& tree = AstTree::instance();
        Identifier id(SystemFunctions::getSysFunctionName<SystemFunctions::SysFunctionID::DISPLAY>());
        Function* f = tree.findFunction(id);
        (yyval.pstatement) = new CallFunction(std::move(yys_ids), f);
        tree.addObject((yyval.pstatement));
    ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 344 "parser.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr);}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 346 "parser.ypp"
    { (yyval.pexpr) = new MatematicalExpression(Identifier("+"), (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));    ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 348 "parser.ypp"
    { (yyval.pexpr) = new MatematicalExpression(Identifier("-"), (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));    ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 352 "parser.ypp"
    { (yyval.pexpr) = (yyvsp[(1) - (1)].pexpr) ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 354 "parser.ypp"
    { 
        (yyval.pexpr) = new MatematicalExpression(Identifier("*"), (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));    
    ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 358 "parser.ypp"
    { (yyval.pexpr) = new MatematicalExpression(Identifier("/"), (yyvsp[(1) - (3)].pexpr), (yyvsp[(3) - (3)].pexpr));    ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 363 "parser.ypp"
    {
           (yyval.pexpr) = new BasicExpression(Identifier(std::to_string((yyvsp[(1) - (1)].num))));
        ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 367 "parser.ypp"
    { 
            (yyval.pexpr) = new BasicExpression(*(yyvsp[(1) - (1)].pidentifier));
            delete (yyvsp[(1) - (1)].pidentifier);
        ;}
    break;



/* Line 1455 of yacc.c  */
#line 1888 "parser.cpp"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;


      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 375 "parser.ypp"



