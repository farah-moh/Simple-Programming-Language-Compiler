
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
#line 1 ".\\parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

_Bool inFunction = 0;


/* Line 189 of yacc.c  */
#line 82 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IF = 258,
     ELSE = 259,
     WHILE = 260,
     FOR = 261,
     DO = 262,
     SWITCH = 263,
     CASE = 264,
     DEFAULT = 265,
     BREAK = 266,
     CONTINUE = 267,
     RETURN = 268,
     CONST = 269,
     INT = 270,
     FLOAT = 271,
     CHAR = 272,
     STRING = 273,
     BOOL = 274,
     VOID = 275,
     TRUE = 276,
     FALSE = 277,
     PLUS = 278,
     MINUS = 279,
     MUL = 280,
     DIV = 281,
     MOD = 282,
     INC = 283,
     DEC = 284,
     ASSIGN = 285,
     ADD_ASSIGN = 286,
     SUB_ASSIGN = 287,
     MUL_ASSIGN = 288,
     DIV_ASSIGN = 289,
     MOD_ASSIGN = 290,
     EQ = 291,
     NEQ = 292,
     LT = 293,
     GT = 294,
     LTE = 295,
     GTE = 296,
     AND = 297,
     OR = 298,
     NOT = 299,
     BIT_AND = 300,
     BIT_OR = 301,
     BIT_XOR = 302,
     COMMENT = 303,
     ID = 304,
     INT_CONST = 305,
     FLOAT_CONST = 306,
     STRING_CONST = 307,
     CHAR_CONST = 308
   };
#endif
/* Tokens.  */
#define IF 258
#define ELSE 259
#define WHILE 260
#define FOR 261
#define DO 262
#define SWITCH 263
#define CASE 264
#define DEFAULT 265
#define BREAK 266
#define CONTINUE 267
#define RETURN 268
#define CONST 269
#define INT 270
#define FLOAT 271
#define CHAR 272
#define STRING 273
#define BOOL 274
#define VOID 275
#define TRUE 276
#define FALSE 277
#define PLUS 278
#define MINUS 279
#define MUL 280
#define DIV 281
#define MOD 282
#define INC 283
#define DEC 284
#define ASSIGN 285
#define ADD_ASSIGN 286
#define SUB_ASSIGN 287
#define MUL_ASSIGN 288
#define DIV_ASSIGN 289
#define MOD_ASSIGN 290
#define EQ 291
#define NEQ 292
#define LT 293
#define GT 294
#define LTE 295
#define GTE 296
#define AND 297
#define OR 298
#define NOT 299
#define BIT_AND 300
#define BIT_OR 301
#define BIT_XOR 302
#define COMMENT 303
#define ID 304
#define INT_CONST 305
#define FLOAT_CONST 306
#define STRING_CONST 307
#define CHAR_CONST 308




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 9 ".\\parser.y"

    char cval;
    char *sval;
    int ival;
    float fval;
    char *id;



/* Line 214 of yacc.c  */
#line 234 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 246 "y.tab.c"

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
#define YYLAST   424

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  61
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  110
/* YYNRULES -- Number of states.  */
#define YYNSTATES  219

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      57,    58,     2,     2,    59,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    54,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,     2,    56,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    13,    16,    18,    20,
      23,    25,    27,    29,    32,    35,    38,    42,    51,    63,
      68,    72,    73,    75,    76,    78,    80,    81,    89,    90,
      96,   102,   108,   110,   111,   115,   117,   120,   123,   126,
     128,   133,   140,   148,   150,   151,   155,   157,   159,   167,
     179,   187,   189,   192,   195,   197,   204,   211,   217,   222,
     226,   229,   233,   235,   237,   239,   241,   243,   245,   247,
     249,   251,   253,   255,   259,   263,   267,   271,   275,   279,
     283,   287,   290,   293,   297,   299,   301,   303,   305,   307,
     309,   311,   313,   317,   321,   324,   328,   332,   336,   340,
     344,   348,   352,   354,   356,   358,   360,   362,   364,   366,
     368
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      62,     0,    -1,    62,    63,    -1,    -1,    88,    54,    -1,
      87,    54,    -1,    89,    54,    -1,    81,    -1,    82,    -1,
      64,    54,    -1,    69,    -1,    65,    -1,    70,    -1,    77,
      54,    -1,    76,    54,    -1,    49,    54,    -1,    55,    62,
      56,    -1,     7,    55,    62,    56,     5,    57,    95,    58,
      -1,     6,    57,    66,    54,    67,    54,    68,    58,    55,
      62,    56,    -1,    15,    49,    30,    50,    -1,    49,    30,
      50,    -1,    -1,    95,    -1,    -1,    95,    -1,    89,    -1,
      -1,     5,    57,    95,    58,    55,    62,    56,    -1,    -1,
      72,    71,    55,    62,    56,    -1,    20,    49,    57,    73,
      58,    -1,    91,    49,    57,    73,    58,    -1,    74,    -1,
      -1,    74,    59,    75,    -1,    75,    -1,    91,    49,    -1,
      13,    95,    -1,    13,    89,    -1,    13,    -1,    49,    57,
      78,    58,    -1,    49,    30,    49,    57,    78,    58,    -1,
      91,    49,    30,    49,    57,    78,    58,    -1,    79,    -1,
      -1,    79,    59,    80,    -1,    80,    -1,    96,    -1,     3,
      57,    95,    58,    55,    62,    56,    -1,     3,    57,    95,
      58,    55,    62,    56,     4,    55,    62,    56,    -1,     8,
      57,    49,    58,    55,    83,    56,    -1,    84,    -1,    84,
      86,    -1,    84,    85,    -1,    85,    -1,     9,    96,    60,
      62,    11,    54,    -1,    10,    96,    60,    62,    11,    54,
      -1,    14,    91,    49,    30,    95,    -1,    91,    49,    30,
      95,    -1,    14,    91,    49,    -1,    91,    49,    -1,    49,
      90,    95,    -1,    30,    -1,    31,    -1,    32,    -1,    33,
      -1,    34,    -1,    35,    -1,    15,    -1,    16,    -1,    17,
      -1,    18,    -1,    19,    -1,    92,    45,    92,    -1,    92,
      46,    92,    -1,    92,    47,    92,    -1,    92,    23,    92,
      -1,    92,    24,    92,    -1,    92,    25,    92,    -1,    92,
      26,    92,    -1,    92,    27,    92,    -1,    92,    28,    -1,
      92,    29,    -1,    57,    92,    58,    -1,    51,    -1,    50,
      -1,    53,    -1,    49,    -1,    21,    -1,    22,    -1,    92,
      -1,    52,    -1,    95,    43,    95,    -1,    95,    42,    95,
      -1,    44,    95,    -1,    93,    36,    93,    -1,    93,    37,
      93,    -1,    93,    38,    93,    -1,    93,    39,    93,    -1,
      93,    40,    93,    -1,    93,    41,    93,    -1,    57,    94,
      58,    -1,    93,    -1,    94,    -1,    49,    -1,    50,    -1,
      51,    -1,    53,    -1,    52,    -1,    21,    -1,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    71,    71,    72,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    92,    96,   100,
     102,   104,   108,   110,   114,   116,   118,   122,   126,   126,
     130,   132,   136,   138,   142,   144,   148,   152,   154,   156,
     160,   162,   164,   168,   170,   174,   176,   180,   184,   186,
     190,   194,   196,   200,   202,   206,   210,   214,   216,   220,
     222,   226,   230,   232,   234,   236,   238,   240,   244,   246,
     248,   250,   252,   256,   258,   260,   262,   264,   266,   268,
     270,   272,   274,   276,   278,   280,   282,   284,   286,   288,
     292,   294,   298,   300,   302,   304,   306,   308,   310,   312,
     314,   316,   320,   322,   326,   328,   330,   332,   334,   336,
     338
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IF", "ELSE", "WHILE", "FOR", "DO",
  "SWITCH", "CASE", "DEFAULT", "BREAK", "CONTINUE", "RETURN", "CONST",
  "INT", "FLOAT", "CHAR", "STRING", "BOOL", "VOID", "TRUE", "FALSE",
  "PLUS", "MINUS", "MUL", "DIV", "MOD", "INC", "DEC", "ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "EQ", "NEQ", "LT", "GT", "LTE", "GTE", "AND", "OR", "NOT", "BIT_AND",
  "BIT_OR", "BIT_XOR", "COMMENT", "ID", "INT_CONST", "FLOAT_CONST",
  "STRING_CONST", "CHAR_CONST", "';'", "'{'", "'}'", "'('", "')'", "','",
  "':'", "$accept", "program", "statement", "do_loop", "for_loop",
  "for_loop_initialization", "for_loop_condition", "for_loop_increment",
  "while_loop", "function_definition", "$@1",
  "function_declaration_prototype", "function_parameters_optional",
  "function_parameters", "function_parameter", "return_statement",
  "function_call", "function_arguments_optional", "function_arguments",
  "function_argument", "if_statement", "switch_statement",
  "switch_program", "case_statements", "case_statement",
  "default_statement", "initialization", "declaration", "assignment",
  "assign", "type", "evaluate_expression", "math_or_value", "condition",
  "expression", "literal", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    59,   123,   125,    40,    41,    44,
      58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    61,    62,    62,    63,    63,    63,    63,    63,    63,
      63,    63,    63,    63,    63,    63,    63,    64,    65,    66,
      66,    66,    67,    67,    68,    68,    68,    69,    71,    70,
      72,    72,    73,    73,    74,    74,    75,    76,    76,    76,
      77,    77,    77,    78,    78,    79,    79,    80,    81,    81,
      82,    83,    83,    84,    84,    85,    86,    87,    87,    88,
      88,    89,    90,    90,    90,    90,    90,    90,    91,    91,
      91,    91,    91,    92,    92,    92,    92,    92,    92,    92,
      92,    92,    92,    92,    92,    92,    92,    92,    92,    92,
      93,    93,    94,    94,    94,    94,    94,    94,    94,    94,
      94,    94,    95,    95,    96,    96,    96,    96,    96,    96,
      96
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     2,     2,     1,     1,     2,
       1,     1,     1,     2,     2,     2,     3,     8,    11,     4,
       3,     0,     1,     0,     1,     1,     0,     7,     0,     5,
       5,     5,     1,     0,     3,     1,     2,     2,     2,     1,
       4,     6,     7,     1,     0,     3,     1,     1,     7,    11,
       7,     1,     2,     2,     1,     6,     6,     5,     4,     3,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     0,     0,     0,     0,     0,    39,     0,
      68,    69,    70,    71,    72,     0,     0,     3,     2,     0,
      11,    10,    12,    28,     0,     0,     7,     8,     0,     0,
       0,     0,     0,     0,    21,     3,     0,    88,    89,     0,
      87,    85,    84,    91,    86,     0,    38,    90,   102,   103,
      37,     0,     0,    62,    63,    64,    65,    66,    67,    15,
      44,     0,     0,     9,     0,    14,    13,     5,     4,     6,
      60,    87,     0,     0,     0,     0,     0,     0,     0,    94,
      62,    90,   103,     0,     0,     0,     0,     0,     0,    81,
      82,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    59,    33,     0,   109,   110,   104,   105,   106,
     108,   107,     0,    43,    46,    47,    61,    16,     3,     0,
      33,     0,     0,     0,     0,    23,     0,     0,    83,   101,
       0,    76,    77,    78,    79,    80,    73,    74,    75,    95,
      96,    97,    98,    99,   100,    93,    92,     0,     0,    32,
      35,     0,    44,    40,     0,     0,    87,    58,     0,     3,
       3,     0,    20,     0,    22,     0,     0,     0,    57,    30,
       0,    36,     0,    45,    29,    44,    31,     0,     0,    19,
      26,     0,     0,     0,    51,    54,    34,    41,     0,    48,
      27,     0,    25,    24,     0,     0,    50,     0,    53,    52,
      42,     0,     0,    17,     3,     0,     3,     3,     0,     3,
       0,     0,     0,     0,    49,    18,    55,     0,    56
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    18,    19,    20,    76,   163,   191,    21,    22,
      64,    23,   148,   149,   150,    24,    25,   112,   113,   114,
      26,    27,   183,   184,   185,   199,    28,    29,    30,    61,
      31,    47,    48,    49,    50,   115
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -142
static const yytype_int16 yypact[] =
{
    -142,     9,  -142,   -52,   -49,   -27,    -2,   -24,    10,   343,
    -142,  -142,  -142,  -142,  -142,    16,    74,  -142,  -142,    18,
    -142,  -142,  -142,  -142,    19,    37,  -142,  -142,    44,    46,
      48,    54,   108,   108,   -11,  -142,    64,  -142,  -142,   108,
     200,  -142,  -142,  -142,  -142,   108,  -142,   360,   377,  -142,
       4,    66,    83,    71,  -142,  -142,  -142,  -142,  -142,  -142,
      95,   108,    63,  -142,    68,  -142,  -142,  -142,  -142,  -142,
     -20,  -142,   -22,    -3,    92,   120,    97,   119,    91,  -142,
    -142,   324,    98,     4,    35,    35,    35,    35,    35,  -142,
    -142,    35,    35,    35,   255,   255,   255,   255,   255,   255,
     108,   108,   123,   343,   105,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,   118,   104,  -142,  -142,     4,  -142,  -142,   234,
     343,   111,   130,   156,   138,   108,   192,   143,  -142,  -142,
      35,   339,   339,    23,    23,    23,   374,   367,   272,  -142,
    -142,  -142,  -142,  -142,  -142,  -142,   157,   108,   142,   150,
    -142,   161,    95,  -142,    95,   164,   154,     4,   160,  -142,
    -142,   171,  -142,   191,     4,   185,   245,   324,     4,  -142,
     343,  -142,   205,  -142,  -142,    95,  -142,   188,   209,  -142,
      10,   108,    95,   210,    80,  -142,  -142,  -142,   217,   275,
    -142,   222,  -142,     4,    52,   221,  -142,    95,  -142,  -142,
    -142,   235,   237,  -142,  -142,   242,  -142,  -142,   308,  -142,
     233,   254,   239,   326,  -142,  -142,  -142,   240,  -142
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -142,   -17,  -142,  -142,  -142,  -142,  -142,  -142,  -142,  -142,
    -142,  -142,   215,  -142,   166,  -142,  -142,  -141,  -142,   176,
    -142,  -142,  -142,  -142,   136,  -142,  -142,  -142,    -7,  -142,
      -6,   -43,   325,   293,   -26,   -86
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      62,    46,    81,    51,    74,    32,    72,    73,    33,     2,
     119,   172,     3,    79,     4,     5,     6,     7,    77,    83,
     100,   101,     8,     9,    10,    11,    12,    13,    14,    15,
      34,    37,    38,    36,   188,   116,   121,   120,    75,   100,
     101,   131,   132,   133,   134,   135,   100,   101,   136,   137,
     138,    89,    90,    35,    39,   122,    37,    38,    16,    40,
      41,    42,    43,    44,    17,    52,     3,    45,     4,     5,
       6,     7,    63,    65,   145,   146,     8,     9,    10,    11,
      12,    13,    14,    15,    71,    41,    42,   167,    44,   182,
     197,    66,   130,   157,   100,   101,   195,   151,    67,   164,
      68,   155,    69,    70,    53,    54,    55,    56,    57,    58,
     203,   205,    16,    78,   151,   102,   105,   106,    17,   117,
     104,   168,     3,   118,     4,     5,     6,     7,    59,    37,
      38,    60,     8,     9,    10,    11,    12,    13,    14,    15,
     103,   123,   177,   178,   107,   108,   109,   110,   111,   127,
     124,   125,    39,   147,   193,   194,   129,    71,    41,    42,
      43,    44,   152,   154,   151,    45,   159,     3,    16,     4,
       5,     6,     7,   192,    17,   126,   153,     8,     9,    10,
      11,    12,    13,    14,    15,   160,   161,   208,   162,   210,
     211,     3,   213,     4,     5,     6,     7,   165,   166,   100,
     169,     8,     9,    10,    11,    12,    13,    14,    15,   170,
     171,   175,     3,    16,     4,     5,     6,     7,   176,    17,
     174,   179,     8,     9,    10,    11,    12,    13,    14,    15,
      80,    54,    55,    56,    57,    58,     3,    16,     4,     5,
       6,     7,   181,    17,   189,   180,     8,     9,    10,    11,
      12,    13,    14,    15,   182,    37,    38,     3,    16,     4,
       5,     6,     7,   187,    17,   190,   196,     8,     9,    10,
      11,    12,    13,    14,    15,   200,    37,    38,    39,   201,
     202,   204,    16,   156,    41,    42,    43,    44,    17,   214,
     206,    45,   207,   216,   218,    84,    85,    86,    87,    88,
      89,    90,   209,    16,    71,    41,    42,    43,    44,    17,
     215,     3,   130,     4,     5,     6,     7,    91,    92,   212,
     198,     8,     9,    10,    11,    12,    13,    14,    15,     3,
     173,     4,     5,     6,     7,   158,   186,   217,    82,     8,
       9,    10,    11,    12,    13,    14,    15,    84,    85,    86,
      87,    88,    89,    90,     0,     0,     0,    16,    10,    11,
      12,    13,    14,    17,    86,    87,    88,    89,    90,    91,
      92,    93,     0,     0,     0,    16,     0,     0,     0,     0,
       0,    17,   128,    84,    85,    86,    87,    88,    89,    90,
      84,    85,    86,    87,    88,    89,    90,    84,    85,    86,
      87,    88,    89,    90,     0,    91,    92,    93,     0,     0,
       0,     0,    91,    94,    95,    96,    97,    98,    99,   139,
     140,   141,   142,   143,   144
};

static const yytype_int16 yycheck[] =
{
      17,     8,    45,     9,    15,    57,    32,    33,    57,     0,
      30,   152,     3,    39,     5,     6,     7,     8,    35,    45,
      42,    43,    13,    14,    15,    16,    17,    18,    19,    20,
      57,    21,    22,    57,   175,    61,    58,    57,    49,    42,
      43,    84,    85,    86,    87,    88,    42,    43,    91,    92,
      93,    28,    29,    55,    44,    58,    21,    22,    49,    49,
      50,    51,    52,    53,    55,    49,     3,    57,     5,     6,
       7,     8,    54,    54,   100,   101,    13,    14,    15,    16,
      17,    18,    19,    20,    49,    50,    51,   130,    53,     9,
      10,    54,    57,   119,    42,    43,   182,   103,    54,   125,
      54,   118,    54,    49,    30,    31,    32,    33,    34,    35,
      58,   197,    49,    49,   120,    49,    21,    22,    55,    56,
      49,   147,     3,    55,     5,     6,     7,     8,    54,    21,
      22,    57,    13,    14,    15,    16,    17,    18,    19,    20,
      57,    49,   159,   160,    49,    50,    51,    52,    53,    58,
      30,    54,    44,    30,   180,   181,    58,    49,    50,    51,
      52,    53,    57,    59,   170,    57,    55,     3,    49,     5,
       6,     7,     8,   180,    55,    56,    58,    13,    14,    15,
      16,    17,    18,    19,    20,    55,    30,   204,    50,   206,
     207,     3,   209,     5,     6,     7,     8,     5,    55,    42,
      58,    13,    14,    15,    16,    17,    18,    19,    20,    59,
      49,    57,     3,    49,     5,     6,     7,     8,    58,    55,
      56,    50,    13,    14,    15,    16,    17,    18,    19,    20,
      30,    31,    32,    33,    34,    35,     3,    49,     5,     6,
       7,     8,    57,    55,    56,    54,    13,    14,    15,    16,
      17,    18,    19,    20,     9,    21,    22,     3,    49,     5,
       6,     7,     8,    58,    55,    56,    56,    13,    14,    15,
      16,    17,    18,    19,    20,    58,    21,    22,    44,     4,
      58,    60,    49,    49,    50,    51,    52,    53,    55,    56,
      55,    57,    55,    54,    54,    23,    24,    25,    26,    27,
      28,    29,    60,    49,    49,    50,    51,    52,    53,    55,
      56,     3,    57,     5,     6,     7,     8,    45,    46,    11,
     184,    13,    14,    15,    16,    17,    18,    19,    20,     3,
     154,     5,     6,     7,     8,   120,   170,    11,    45,    13,
      14,    15,    16,    17,    18,    19,    20,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    49,    15,    16,
      17,    18,    19,    55,    25,    26,    27,    28,    29,    45,
      46,    47,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    58,    23,    24,    25,    26,    27,    28,    29,
      23,    24,    25,    26,    27,    28,    29,    23,    24,    25,
      26,    27,    28,    29,    -1,    45,    46,    47,    -1,    -1,
      -1,    -1,    45,    36,    37,    38,    39,    40,    41,    94,
      95,    96,    97,    98,    99
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    62,     0,     3,     5,     6,     7,     8,    13,    14,
      15,    16,    17,    18,    19,    20,    49,    55,    63,    64,
      65,    69,    70,    72,    76,    77,    81,    82,    87,    88,
      89,    91,    57,    57,    57,    55,    57,    21,    22,    44,
      49,    50,    51,    52,    53,    57,    89,    92,    93,    94,
      95,    91,    49,    30,    31,    32,    33,    34,    35,    54,
      57,    90,    62,    54,    71,    54,    54,    54,    54,    54,
      49,    49,    95,    95,    15,    49,    66,    62,    49,    95,
      30,    92,    94,    95,    23,    24,    25,    26,    27,    28,
      29,    45,    46,    47,    36,    37,    38,    39,    40,    41,
      42,    43,    49,    57,    49,    21,    22,    49,    50,    51,
      52,    53,    78,    79,    80,    96,    95,    56,    55,    30,
      57,    58,    58,    49,    30,    54,    56,    58,    58,    58,
      57,    92,    92,    92,    92,    92,    92,    92,    92,    93,
      93,    93,    93,    93,    93,    95,    95,    30,    73,    74,
      75,    91,    57,    58,    59,    62,    49,    95,    73,    55,
      55,    30,    50,    67,    95,     5,    55,    92,    95,    58,
      59,    49,    78,    80,    56,    57,    58,    62,    62,    50,
      54,    57,     9,    83,    84,    85,    75,    58,    78,    56,
      56,    68,    89,    95,    95,    96,    56,    10,    85,    86,
      58,     4,    58,    58,    60,    96,    55,    55,    62,    60,
      62,    62,    11,    62,    56,    56,    54,    11,    54
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
        case 2:

/* Line 1455 of yacc.c  */
#line 71 ".\\parser.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 72 ".\\parser.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 76 ".\\parser.y"
    { printf("Declaration\n"); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 77 ".\\parser.y"
    { printf("Initialization\n"); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 78 ".\\parser.y"
    { printf("Assignment\n"); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 79 ".\\parser.y"
    { printf("If_statement\n"); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 80 ".\\parser.y"
    { printf("Switch_statement\n"); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 81 ".\\parser.y"
    { printf("Do_loop\n"); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 82 ".\\parser.y"
    { printf("While_loop\n"); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 83 ".\\parser.y"
    { printf("For_loop\n"); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 84 ".\\parser.y"
    { printf("Function_definition\n"); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 85 ".\\parser.y"
    { printf("Function_call\n"); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 86 ".\\parser.y"
    { if (!(inFunction)) yyerror("Return statement outside function"); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 87 ".\\parser.y"
    { printf("ID\n"); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 88 ".\\parser.y"
    { printf("Scope\n"); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 92 ".\\parser.y"
    {;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 96 ".\\parser.y"
    {;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 100 ".\\parser.y"
    {;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 102 ".\\parser.y"
    {;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 104 ".\\parser.y"
    {;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 108 ".\\parser.y"
    {;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 110 ".\\parser.y"
    {;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 114 ".\\parser.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 116 ".\\parser.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 118 ".\\parser.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 122 ".\\parser.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 126 ".\\parser.y"
    { inFunction = 1; }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 126 ".\\parser.y"
    { inFunction = 0; }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 130 ".\\parser.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 132 ".\\parser.y"
    {;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 136 ".\\parser.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 138 ".\\parser.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 142 ".\\parser.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 144 ".\\parser.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 148 ".\\parser.y"
    {;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 152 ".\\parser.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 154 ".\\parser.y"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 160 ".\\parser.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 162 ".\\parser.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 164 ".\\parser.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 168 ".\\parser.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 170 ".\\parser.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 174 ".\\parser.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 180 ".\\parser.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 184 ".\\parser.y"
    {;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 186 ".\\parser.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 214 ".\\parser.y"
    {;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 216 ".\\parser.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 220 ".\\parser.y"
    {;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 222 ".\\parser.y"
    {;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 226 ".\\parser.y"
    {;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 230 ".\\parser.y"
    {;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 232 ".\\parser.y"
    {;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 234 ".\\parser.y"
    {;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 236 ".\\parser.y"
    {;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 238 ".\\parser.y"
    {;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 240 ".\\parser.y"
    {;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 244 ".\\parser.y"
    {;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 246 ".\\parser.y"
    {;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 248 ".\\parser.y"
    {;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 250 ".\\parser.y"
    {;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 252 ".\\parser.y"
    {;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 256 ".\\parser.y"
    {;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 258 ".\\parser.y"
    {;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 260 ".\\parser.y"
    {;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 262 ".\\parser.y"
    {;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 264 ".\\parser.y"
    {;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 266 ".\\parser.y"
    {;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 268 ".\\parser.y"
    {;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 270 ".\\parser.y"
    {;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 272 ".\\parser.y"
    {;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 274 ".\\parser.y"
    {;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 276 ".\\parser.y"
    {;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 278 ".\\parser.y"
    {;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 280 ".\\parser.y"
    {;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 282 ".\\parser.y"
    {;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 284 ".\\parser.y"
    {;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 286 ".\\parser.y"
    {;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 288 ".\\parser.y"
    {;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 292 ".\\parser.y"
    {;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 294 ".\\parser.y"
    {;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 298 ".\\parser.y"
    {;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 300 ".\\parser.y"
    {;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 302 ".\\parser.y"
    {;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 304 ".\\parser.y"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 306 ".\\parser.y"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 308 ".\\parser.y"
    {;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 310 ".\\parser.y"
    {;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 312 ".\\parser.y"
    {;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 314 ".\\parser.y"
    {;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 316 ".\\parser.y"
    {;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 320 ".\\parser.y"
    {;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 322 ".\\parser.y"
    {;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 326 ".\\parser.y"
    {;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 328 ".\\parser.y"
    {;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 330 ".\\parser.y"
    {;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 332 ".\\parser.y"
    {;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 334 ".\\parser.y"
    {;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 336 ".\\parser.y"
    {;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 338 ".\\parser.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2384 "y.tab.c"
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
#line 340 ".\\parser.y"


/* Error handling */
void yyerror(char *msg){
  fprintf(stderr, "%s\n", msg);
  exit(1);
}


int main(){
    yyparse();
    return 0;
}

