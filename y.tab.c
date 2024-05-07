
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
#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "symbolTable.h"

void yyerror(char* s);
int yylex();

_Bool inFunction = 0;


/* Line 189 of yacc.c  */
#line 86 "y.tab.c"

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
     FUNC = 304,
     ID = 305,
     INT_CONST = 306,
     FLOAT_CONST = 307,
     STRING_CONST = 308,
     CHAR_CONST = 309
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
#define FUNC 304
#define ID 305
#define INT_CONST 306
#define FLOAT_CONST 307
#define STRING_CONST 308
#define CHAR_CONST 309




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 13 "parser.y"

    char cval;
    char *sval;
    int ival;
    float fval;
    char *id;



/* Line 214 of yacc.c  */
#line 240 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 252 "y.tab.c"

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
#define YYLAST   420

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  43
/* YYNRULES -- Number of rules.  */
#define YYNRULES  120
/* YYNRULES -- Number of states.  */
#define YYNSTATES  226

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      58,    59,     2,     2,    60,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    61,    55,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    56,     2,    57,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    10,    13,    16,    19,    20,
      23,    24,    27,    28,    32,    33,    36,    37,    40,    42,
      45,    48,    51,    52,    57,    66,    78,    83,    87,    88,
      90,    91,    93,    95,    96,   104,   105,   111,   117,   123,
     125,   126,   130,   132,   135,   138,   141,   143,   148,   153,
     158,   160,   161,   165,   167,   169,   177,   189,   197,   199,
     202,   204,   207,   209,   216,   222,   228,   233,   237,   240,
     244,   246,   248,   250,   252,   254,   256,   258,   260,   262,
     264,   266,   270,   274,   278,   282,   286,   290,   294,   298,
     301,   304,   308,   310,   312,   314,   316,   318,   320,   322,
     324,   328,   332,   335,   339,   343,   347,   351,   355,   359,
     363,   366,   369,   371,   373,   375,   377,   379,   381,   383,
     385
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    63,    64,    -1,    -1,    95,    55,    -1,
      94,    55,    -1,    96,    55,    -1,   102,    55,    -1,    -1,
      65,    88,    -1,    -1,    66,    89,    -1,    -1,    67,    71,
      55,    -1,    -1,    68,    76,    -1,    -1,    69,    72,    -1,
      77,    -1,    84,    55,    -1,    83,    55,    -1,    50,    55,
      -1,    -1,    70,    56,    63,    57,    -1,     7,    56,    63,
      57,     5,    58,   103,    59,    -1,     6,    58,    73,    55,
      74,    55,    75,    59,    56,    63,    57,    -1,    15,    50,
      30,    51,    -1,    50,    30,    51,    -1,    -1,   103,    -1,
      -1,   103,    -1,    96,    -1,    -1,     5,    58,   103,    59,
      56,    63,    57,    -1,    -1,    79,    78,    56,    63,    57,
      -1,    20,    50,    58,    80,    59,    -1,    98,    50,    58,
      80,    59,    -1,    81,    -1,    -1,    81,    60,    82,    -1,
      82,    -1,    98,    50,    -1,    13,   103,    -1,    13,    96,
      -1,    13,    -1,    50,    58,    85,    59,    -1,    96,    58,
      85,    59,    -1,    94,    58,    85,    59,    -1,    86,    -1,
      -1,    86,    60,    87,    -1,    87,    -1,   104,    -1,     3,
      58,   103,    59,    56,    63,    57,    -1,     3,    58,   103,
      59,    56,    63,    57,     4,    56,    63,    57,    -1,     8,
      58,    50,    59,    56,    90,    57,    -1,    91,    -1,    91,
      93,    -1,    93,    -1,    91,    92,    -1,    92,    -1,     9,
     104,    61,    63,    11,    55,    -1,    10,    61,    63,    11,
      55,    -1,    14,    98,    50,    30,   103,    -1,    98,    50,
      30,   103,    -1,    14,    98,    50,    -1,    98,    50,    -1,
      50,    97,   103,    -1,    30,    -1,    31,    -1,    32,    -1,
      33,    -1,    34,    -1,    35,    -1,    15,    -1,    16,    -1,
      17,    -1,    18,    -1,    19,    -1,    99,    45,    99,    -1,
      99,    46,    99,    -1,    99,    47,    99,    -1,    99,    23,
      99,    -1,    99,    24,    99,    -1,    99,    25,    99,    -1,
      99,    26,    99,    -1,    99,    27,    99,    -1,    99,    28,
      -1,    99,    29,    -1,    58,    99,    59,    -1,    52,    -1,
      51,    -1,    54,    -1,    50,    -1,    21,    -1,    22,    -1,
      99,    -1,    53,    -1,   103,    43,   103,    -1,   103,    42,
     103,    -1,    44,   103,    -1,   100,    36,   100,    -1,   100,
      37,   100,    -1,   100,    38,   100,    -1,   100,    39,   100,
      -1,   100,    40,   100,    -1,   100,    41,   100,    -1,    58,
     101,    59,    -1,    50,    28,    -1,    50,    29,    -1,   100,
      -1,   101,    -1,    50,    -1,    51,    -1,    52,    -1,    54,
      -1,    53,    -1,    21,    -1,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    76,    76,    77,    81,    83,    85,    87,    89,    89,
      91,    91,    93,    93,    95,    95,    97,    97,    99,   101,
     103,   105,   107,   107,   111,   115,   119,   121,   123,   127,
     129,   133,   135,   137,   141,   145,   145,   149,   151,   155,
     157,   161,   163,   167,   171,   173,   175,   179,   181,   183,
     187,   189,   193,   195,   199,   203,   205,   209,   213,   215,
     217,   221,   223,   227,   231,   235,   237,   241,   243,   247,
     251,   253,   255,   257,   259,   261,   265,   267,   269,   271,
     273,   277,   279,   281,   283,   285,   287,   289,   291,   293,
     295,   297,   299,   301,   303,   305,   307,   309,   313,   315,
     319,   321,   323,   325,   327,   329,   331,   333,   335,   337,
     341,   343,   347,   349,   354,   356,   358,   360,   362,   364,
     366
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
  "BIT_OR", "BIT_XOR", "COMMENT", "FUNC", "ID", "INT_CONST", "FLOAT_CONST",
  "STRING_CONST", "CHAR_CONST", "';'", "'{'", "'}'", "'('", "')'", "','",
  "':'", "$accept", "program", "statement", "$@1", "$@2", "$@3", "$@4",
  "$@5", "$@6", "do_loop", "for_loop", "for_loop_initialization",
  "for_loop_condition", "for_loop_increment", "while_loop",
  "function_definition", "$@7", "function_declaration_prototype",
  "function_parameters_optional", "function_parameters",
  "function_parameter", "return_statement", "function_call",
  "function_arguments_optional", "function_arguments", "function_argument",
  "if_statement", "switch_statement", "switch_program", "case_statements",
  "case_statement", "default_statement", "initialization", "declaration",
  "assignment", "assign", "type", "evaluate_expression", "math_or_value",
  "condition", "unary_expression", "expression", "literal", 0
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
     305,   306,   307,   308,   309,    59,   123,   125,    40,    41,
      44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    64,    64,    65,    64,
      66,    64,    67,    64,    68,    64,    69,    64,    64,    64,
      64,    64,    70,    64,    71,    72,    73,    73,    73,    74,
      74,    75,    75,    75,    76,    78,    77,    79,    79,    80,
      80,    81,    81,    82,    83,    83,    83,    84,    84,    84,
      85,    85,    86,    86,    87,    88,    88,    89,    90,    90,
      90,    91,    91,    92,    93,    94,    94,    95,    95,    96,
      97,    97,    97,    97,    97,    97,    98,    98,    98,    98,
      98,    99,    99,    99,    99,    99,    99,    99,    99,    99,
      99,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     101,   101,   101,   101,   101,   101,   101,   101,   101,   101,
     102,   102,   103,   103,   104,   104,   104,   104,   104,   104,
     104
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     2,     2,     2,     0,     2,
       0,     2,     0,     3,     0,     2,     0,     2,     1,     2,
       2,     2,     0,     4,     8,    11,     4,     3,     0,     1,
       0,     1,     1,     0,     7,     0,     5,     5,     5,     1,
       0,     3,     1,     2,     2,     2,     1,     4,     4,     4,
       1,     0,     3,     1,     1,     7,    11,     7,     1,     2,
       1,     2,     1,     6,     5,     5,     4,     3,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     2,     3,     3,     3,     3,     3,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     8,     1,    46,     0,    76,    77,    78,    79,    80,
       0,     0,     2,     0,     0,     0,     0,     0,     0,    18,
      35,     0,     0,     0,     0,     0,     0,     0,    96,    97,
       0,    95,    93,    92,    99,    94,     0,    45,    98,   112,
     113,    44,     0,     0,   110,   111,    70,    71,    72,    73,
      74,    75,    21,    51,     0,     0,     9,     0,    11,     0,
       0,     0,    15,     0,    17,     3,     0,    20,    19,     5,
      51,     4,     6,    51,    68,     7,    95,   102,    98,   113,
       0,     0,     0,     0,     0,     0,    89,    90,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    67,
      40,   119,   120,   114,   115,   116,   118,   117,     0,    50,
      53,    54,    69,     0,     0,     3,    13,     0,    28,     8,
       3,     0,     0,     0,    40,    91,   109,     0,    84,    85,
      86,    87,    88,    81,    82,    83,   103,   104,   105,   106,
     107,   108,   101,   100,     0,     0,    39,    42,     0,    47,
       0,     0,     0,     8,     0,     0,     0,     0,    23,     8,
      49,    48,    66,     0,     0,    65,    37,     0,    43,    52,
       0,     0,     0,     0,     0,     0,    30,    36,    38,    41,
       3,     0,     0,     3,     0,    27,     0,    29,     8,     0,
       0,     0,    58,    62,    60,     0,     8,    26,    33,    55,
       0,     3,    57,    61,    59,     0,    34,     0,    32,    31,
       0,     3,     8,    24,     0,     3,     8,     0,     3,     8,
       0,    64,     8,    56,    63,    25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    12,    13,    14,    15,    16,    17,    18,    60,
      64,   157,   186,   207,    62,    19,    66,    20,   145,   146,
     147,    21,    22,   108,   109,   110,    56,    58,   191,   192,
     193,   194,    23,    24,    25,    54,    26,    38,    39,    40,
      27,    41,   111
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -63
static const yytype_int16 yypact[] =
{
     -63,    23,   -63,    39,   241,   -63,   -63,   -63,   -63,   -63,
     -31,   354,   -63,    24,    27,    44,    54,    56,    20,   -63,
     -63,    22,    25,   -47,    30,   -38,    28,    31,   -63,   -63,
     323,   220,   -63,   -63,   -63,   -63,   323,   -63,   324,   260,
     -63,   -30,    32,    29,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   107,   323,    37,   -63,    38,   -63,    43,
      45,    48,   -63,    50,   -63,   -63,    46,   -63,   -63,   -63,
     107,   -63,   -63,   107,   -26,   -63,   -63,   -63,   117,    42,
     -30,    53,    53,    53,    53,    53,   -63,   -63,    53,    53,
      53,    -6,    -6,    -6,    -6,    -6,    -6,   323,   323,    51,
     241,   -63,   -63,   -63,   -63,   -63,   -63,   -63,    55,    52,
     -63,   -63,   -30,   323,    60,   -63,   -63,   323,    -1,   118,
     -63,    57,    58,   323,   241,   -63,   -63,    53,   277,   277,
      26,    26,    26,   181,   375,   368,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,    71,   323,    61,    59,   -63,    77,   -63,
     107,   -37,    89,   165,   -33,    80,   120,    96,   -63,   183,
     -63,   -63,   -30,    93,   117,   -30,   -63,   241,   -63,   -63,
      98,    99,   162,   121,   156,   136,   323,   -63,   -63,   -63,
     -63,    47,   134,   -63,   142,   -63,   139,   -30,   211,   107,
     150,   155,    47,   -63,   -63,   323,   229,   -63,    39,   209,
     153,   -63,   -63,   -63,   -63,    -9,   -63,   161,   -63,   -30,
     167,   -63,   304,   -63,   176,   -63,   322,   186,   -63,   257,
     214,   -63,   275,   -63,   -63,   -63
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -63,   -62,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,
     -63,   -63,   -63,   -63,   -63,   -63,   -63,   -63,   114,   -63,
     111,   -63,   -63,   -49,   -63,   116,   -63,   -63,   -63,   -63,
      92,    95,   -63,   -63,    -3,   -63,    -2,   -18,   270,   272,
     -63,   -29,   127
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -23
static const yytype_int16 yytable[] =
{
      37,    77,    42,   119,   123,    97,    98,    80,    69,    97,
      98,    70,    97,    98,   155,    28,    29,    72,    78,    43,
      73,   121,   170,     2,   122,   112,   173,    55,   -14,   -16,
     -12,   -10,   124,    97,    98,    57,     3,     4,     5,     6,
       7,     8,     9,    10,    76,    32,    33,    34,    35,   156,
     213,    59,   127,   153,    86,    87,   189,   190,   159,    61,
      28,    29,    63,   128,   129,   130,   131,   132,   142,   143,
     133,   134,   135,    11,    28,    29,    65,    67,    74,   -22,
      68,   144,    99,    30,   151,    71,    75,   100,   154,    31,
      32,    33,    34,    35,   162,   113,   114,    36,   148,   115,
     116,   126,   120,    76,    32,    33,   117,    35,   118,   164,
     152,   127,   150,    97,   149,   165,   160,   161,   188,   167,
     166,   196,   148,   -14,   -16,   -12,   -10,   168,   101,   102,
     174,     3,     4,     5,     6,     7,     8,     9,    10,   212,
      81,    82,    83,    84,    85,    86,    87,   187,   171,   216,
     175,   176,   178,   219,   180,   181,   222,   103,   104,   105,
     106,   107,    88,    89,    90,   148,   205,   182,    11,   209,
     -14,   -16,   -12,   -10,   -22,   158,   125,   183,     3,     4,
       5,     6,     7,     8,     9,    10,   184,   185,   -14,   -16,
     -12,   -10,   195,   197,   198,   208,     3,     4,     5,     6,
       7,     8,     9,    10,    81,    82,    83,    84,    85,    86,
      87,   201,   202,   210,   211,    11,   -14,   -16,   -12,   -10,
     214,   -22,   172,   215,     3,     4,     5,     6,     7,     8,
       9,    10,   218,    11,   -14,   -16,   -12,   -10,   163,   -22,
     177,   221,     3,     4,     5,     6,     7,     8,     9,    10,
      46,    47,    48,    49,    50,    51,     5,     6,     7,     8,
       9,    11,   -14,   -16,   -12,   -10,   169,   -22,   199,   224,
       3,     4,     5,     6,     7,     8,     9,    10,   179,    11,
     -14,   -16,   -12,   -10,   203,   -22,   206,   204,     3,     4,
       5,     6,     7,     8,     9,    10,    91,    92,    93,    94,
      95,    96,    83,    84,    85,    86,    87,    11,    79,   -14,
     -16,   -12,   -10,   -22,   223,   217,   200,     3,     4,     5,
       6,     7,     8,     9,    10,    11,     0,   -14,   -16,   -12,
     -10,   -22,   225,   220,     0,     3,     4,     5,     6,     7,
       8,     9,    10,     0,    28,    29,     0,    81,    82,    83,
      84,    85,    86,    87,    11,     0,     0,     0,     0,     0,
     -22,   136,   137,   138,   139,   140,   141,    30,     0,    88,
      89,    90,    11,    76,    32,    33,    34,    35,   -22,     0,
       0,    36,    44,    45,    46,    47,    48,    49,    50,    51,
       0,    81,    82,    83,    84,    85,    86,    87,    81,    82,
      83,    84,    85,    86,    87,     0,     0,     0,     0,    52,
       0,     0,    53,    88,    89,     0,     0,     0,     0,     0,
      88
};

static const yytype_int16 yycheck[] =
{
       3,    30,     4,    65,    30,    42,    43,    36,    55,    42,
      43,    58,    42,    43,    15,    21,    22,    55,    36,    50,
      58,    70,    59,     0,    73,    54,    59,     3,     5,     6,
       7,     8,    58,    42,    43,     8,    13,    14,    15,    16,
      17,    18,    19,    20,    50,    51,    52,    53,    54,    50,
      59,     7,    58,   115,    28,    29,     9,    10,   120,     5,
      21,    22,     6,    81,    82,    83,    84,    85,    97,    98,
      88,    89,    90,    50,    21,    22,    56,    55,    50,    56,
      55,    30,    50,    44,   113,    55,    55,    58,   117,    50,
      51,    52,    53,    54,   123,    58,    58,    58,   100,    56,
      55,    59,    56,    50,    51,    52,    58,    54,    58,   127,
      50,    58,    60,    42,    59,   144,    59,    59,   180,    60,
      59,   183,   124,     5,     6,     7,     8,    50,    21,    22,
      50,    13,    14,    15,    16,    17,    18,    19,    20,   201,
      23,    24,    25,    26,    27,    28,    29,   176,    59,   211,
      30,    55,    59,   215,    56,    56,   218,    50,    51,    52,
      53,    54,    45,    46,    47,   167,   195,     5,    50,   198,
       5,     6,     7,     8,    56,    57,    59,    56,    13,    14,
      15,    16,    17,    18,    19,    20,    30,    51,     5,     6,
       7,     8,    58,    51,    55,   198,    13,    14,    15,    16,
      17,    18,    19,    20,    23,    24,    25,    26,    27,    28,
      29,    61,    57,     4,    61,    50,     5,     6,     7,     8,
      59,    56,    57,    56,    13,    14,    15,    16,    17,    18,
      19,    20,    56,    50,     5,     6,     7,     8,   124,    56,
      57,    55,    13,    14,    15,    16,    17,    18,    19,    20,
      30,    31,    32,    33,    34,    35,    15,    16,    17,    18,
      19,    50,     5,     6,     7,     8,   150,    56,    57,    55,
      13,    14,    15,    16,    17,    18,    19,    20,   167,    50,
       5,     6,     7,     8,   192,    56,    57,   192,    13,    14,
      15,    16,    17,    18,    19,    20,    36,    37,    38,    39,
      40,    41,    25,    26,    27,    28,    29,    50,    36,     5,
       6,     7,     8,    56,    57,    11,   189,    13,    14,    15,
      16,    17,    18,    19,    20,    50,    -1,     5,     6,     7,
       8,    56,    57,    11,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    -1,    21,    22,    -1,    23,    24,    25,
      26,    27,    28,    29,    50,    -1,    -1,    -1,    -1,    -1,
      56,    91,    92,    93,    94,    95,    96,    44,    -1,    45,
      46,    47,    50,    50,    51,    52,    53,    54,    56,    -1,
      -1,    58,    28,    29,    30,    31,    32,    33,    34,    35,
      -1,    23,    24,    25,    26,    27,    28,    29,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    58,    45,    46,    -1,    -1,    -1,    -1,    -1,
      45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    50,    64,    65,    66,    67,    68,    69,    70,    77,
      79,    83,    84,    94,    95,    96,    98,   102,    21,    22,
      44,    50,    51,    52,    53,    54,    58,    96,    99,   100,
     101,   103,    98,    50,    28,    29,    30,    31,    32,    33,
      34,    35,    55,    58,    97,     3,    88,     8,    89,     7,
      71,     5,    76,     6,    72,    56,    78,    55,    55,    55,
      58,    55,    55,    58,    50,    55,    50,   103,    99,   101,
     103,    23,    24,    25,    26,    27,    28,    29,    45,    46,
      47,    36,    37,    38,    39,    40,    41,    42,    43,    50,
      58,    21,    22,    50,    51,    52,    53,    54,    85,    86,
      87,   104,   103,    58,    58,    56,    55,    58,    58,    63,
      56,    85,    85,    30,    58,    59,    59,    58,    99,    99,
      99,    99,    99,    99,    99,    99,   100,   100,   100,   100,
     100,   100,   103,   103,    30,    80,    81,    82,    98,    59,
      60,   103,    50,    63,   103,    15,    50,    73,    57,    63,
      59,    59,   103,    80,    99,   103,    59,    60,    50,    87,
      59,    59,    57,    59,    50,    30,    55,    57,    59,    82,
      56,    56,     5,    56,    30,    51,    74,   103,    63,     9,
      10,    90,    91,    92,    93,    58,    63,    51,    55,    57,
     104,    61,    57,    92,    93,   103,    57,    75,    96,   103,
       4,    61,    63,    59,    59,    56,    63,    11,    56,    63,
      11,    55,    63,    57,    55,    57
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
#line 76 "parser.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 77 "parser.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 81 "parser.y"
    { printf("Declaration\n"); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 83 "parser.y"
    { printf("Initialization\n"); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 85 "parser.y"
    { printf("Assignment\n"); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 87 "parser.y"
    { printf("Unary Expression\n"); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { printf("If statement start\n"); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 89 "parser.y"
    { printf("If statement end\n"); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    { printf("Switch case start\n"); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 91 "parser.y"
    { printf("Switch case end\n"); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    { printf("Do while loop start\n"); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 93 "parser.y"
    { printf("Do while loop end\n"); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    { printf("While loop start\n"); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 95 "parser.y"
    { printf("While loop end\n"); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    { printf("For loop start\n"); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 97 "parser.y"
    { printf("For loop end\n"); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 99 "parser.y"
    { printf("Function_definition\n"); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    { printf("Function_call\n"); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 103 "parser.y"
    { if (!(inFunction)) yyerror("Return statement outside function"); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    { printf("ID\n"); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    { printf("Scope start\n"); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    { printf("Scope end\n"); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    {;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    {;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    {;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    {;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 129 "parser.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 133 "parser.y"
    {;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 137 "parser.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    { inFunction = 1; }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 145 "parser.y"
    { inFunction = 0; }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 149 "parser.y"
    {;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 151 "parser.y"
    {;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 155 "parser.y"
    {;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 157 "parser.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 161 "parser.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 163 "parser.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 167 "parser.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 173 "parser.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 181 "parser.y"
    {;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    {;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    {;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    {;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 193 "parser.y"
    {;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    {;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    {;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 237 "parser.y"
    {;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 241 "parser.y"
    {;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 243 "parser.y"
    {;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 247 "parser.y"
    {;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    { printf("ASSIGN\n"); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    { printf("ADD_ASSIGN\n"); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    { printf("SUB_ASSIGN\n"); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 257 "parser.y"
    { printf("MUL_ASSIGN\n"); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    { printf("DIV_ASSIGN\n"); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 261 "parser.y"
    { printf("MOD_ASSIGN\n"); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    { ; }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    { ; }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    { ; }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    { ; }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 273 "parser.y"
    { ; }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    { printf("BIT_AND\n"); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 279 "parser.y"
    { printf("BIT_OR\n"); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    { printf("BIT_XOR\n"); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    { printf("PLUS\n"); }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    { printf("MINUS\n"); }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    { printf("MUL\n"); }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    { printf("DIV\n"); }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    { printf("MOD\n"); }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 293 "parser.y"
    { printf("INC\n"); }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    { printf("DEC\n"); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    {;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 299 "parser.y"
    {;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    {;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    {;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 305 "parser.y"
    {;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 307 "parser.y"
    {;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 309 "parser.y"
    {;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 313 "parser.y"
    {;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    {;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 319 "parser.y"
    { printf("OR\n"); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 321 "parser.y"
    { printf("AND\n"); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    { printf("NOT\n"); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 325 "parser.y"
    { printf("EQ\n"); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 327 "parser.y"
    { printf("NEQ\n"); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    { printf("LT\n"); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    { printf("GT\n"); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 333 "parser.y"
    { printf("LTE\n"); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    { printf("GTE\n"); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 337 "parser.y"
    {;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 341 "parser.y"
    {;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 343 "parser.y"
    {;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 347 "parser.y"
    {;}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 349 "parser.y"
    {;}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 354 "parser.y"
    {;}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    {;}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    {;}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    {;}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
    {;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 364 "parser.y"
    {;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    {;}
    break;



/* Line 1455 of yacc.c  */
#line 2471 "y.tab.c"
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
#line 368 "parser.y"


/* Error handling */
void yyerror(char *msg){
  fprintf(stderr, "%s\n", msg);
  exit(1);
}


int main(int argc, char *argv[]){

    extern FILE* yyin;
    char* filename = argv[1];
    FILE* file = fopen(filename,"r");
    if(!file)
    {
        printf("File Error\n");
    }
    yyin = file;

    yyparse();

    return 0;
}

