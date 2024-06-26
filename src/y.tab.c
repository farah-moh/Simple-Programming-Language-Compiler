
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
#include <cstring>
#include "utils/symbolTable.hpp"
#include "utils/quadHandler.hpp"

symbolTable symbTable = symbolTable();
QuadHandler quadHandle = QuadHandler("output/quad.faam");
int symbolTable::numScopes = 0;
vector<vector<symbolTable*>> symbolTable::symbolTableAdj = vector<vector<symbolTable*>>(1,vector<symbolTable*>());
symbolTable* symbolTable::current = &symbTable;
map<string, vector<symbol*>> functionParameters;
vector<symbol*> currentFunctionParameters;
vector<symbol*> functionCallParameters;
symbolType currFunctionReturn = symbolType::UNKNOWN;
string currSwitchLabel = "";
symbol* currSwitchVar = NULL;

int yylex();

int inFunction = 0;


/* Line 189 of yacc.c  */
#line 98 "y.tab.c"

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
#line 25 "parser.y"

    char *sval;
    symbol* symboll;
    symbolType symbolTypeType;
    operation operationName;



/* Line 214 of yacc.c  */
#line 251 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 263 "y.tab.c"

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
#define YYLAST   468

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  64
/* YYNRULES -- Number of rules.  */
#define YYNRULES  133
/* YYNRULES -- Number of states.  */
#define YYNSTATES  241

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
      45,    46,    47,    48,    55,    56,    57,    68,    69,    70,
      71,    86,    91,    95,    97,    99,   101,   102,   103,   113,
     114,   122,   123,   130,   131,   138,   140,   141,   145,   147,
     150,   153,   155,   160,   162,   163,   167,   169,   171,   173,
     174,   175,   183,   184,   193,   194,   195,   205,   207,   210,
     212,   215,   217,   218,   219,   228,   229,   230,   238,   244,
     249,   252,   256,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   282,   286,   290,   294,   298,   302,
     306,   310,   313,   316,   320,   322,   324,   326,   328,   330,
     332,   334,   336,   340,   344,   347,   351,   355,   359,   363,
     367,   371,   375,   378,   381,   383,   385,   387,   389,   391,
     393,   395,   397,   399
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    63,    64,    -1,    -1,   116,    55,    -1,
     115,    55,    -1,   117,    55,    -1,   123,    55,    -1,    -1,
      65,    99,    -1,    -1,    66,   104,    -1,    -1,    67,    73,
      55,    -1,    -1,    68,    83,    -1,    -1,    69,    76,    -1,
      86,    -1,    95,    55,    -1,    -1,    -1,    -1,    70,    56,
      71,    63,    57,    72,    -1,    -1,    -1,     7,    74,    56,
      63,    57,     5,    75,    58,   124,    59,    -1,    -1,    -1,
      -1,     6,    77,    58,    80,    78,    55,    81,    79,    55,
      82,    59,    56,    63,    57,    -1,    15,    50,    30,    51,
      -1,    50,    30,    51,    -1,   124,    -1,   124,    -1,   117,
      -1,    -1,    -1,     5,    84,    58,   124,    59,    85,    56,
      63,    57,    -1,    -1,    88,    87,    56,    63,    94,    55,
      57,    -1,    -1,    20,    50,    89,    58,    91,    59,    -1,
      -1,   119,    50,    90,    58,    91,    59,    -1,    92,    -1,
      -1,    92,    60,    93,    -1,    93,    -1,   119,    50,    -1,
      13,   124,    -1,    13,    -1,    50,    58,    96,    59,    -1,
      97,    -1,    -1,    97,    60,    98,    -1,    98,    -1,   125,
      -1,   102,    -1,    -1,    -1,   102,   100,     4,   101,    56,
      63,    57,    -1,    -1,     3,    58,   124,    59,   103,    56,
      63,    57,    -1,    -1,    -1,   105,     8,    58,    50,    59,
     106,    56,   107,    57,    -1,   108,    -1,   108,   112,    -1,
     112,    -1,   108,   109,    -1,   109,    -1,    -1,    -1,     9,
     125,    61,   110,    63,   111,    11,    55,    -1,    -1,    -1,
      10,    61,   113,    63,   114,    11,    55,    -1,    14,   119,
      50,    30,   124,    -1,   119,    50,    30,   124,    -1,   119,
      50,    -1,    50,   118,   124,    -1,    30,    -1,    31,    -1,
      32,    -1,    33,    -1,    34,    -1,    35,    -1,    15,    -1,
      16,    -1,    17,    -1,    18,    -1,    19,    -1,   120,    45,
     120,    -1,   120,    46,   120,    -1,   120,    47,   120,    -1,
     120,    23,   120,    -1,   120,    24,   120,    -1,   120,    25,
     120,    -1,   120,    26,   120,    -1,   120,    27,   120,    -1,
     120,    28,    -1,   120,    29,    -1,    58,   120,    59,    -1,
      52,    -1,    51,    -1,    54,    -1,    50,    -1,    21,    -1,
      22,    -1,   120,    -1,    53,    -1,   124,    43,   124,    -1,
     124,    42,   124,    -1,    44,   124,    -1,   121,    36,   121,
      -1,   121,    37,   121,    -1,   121,    38,   121,    -1,   121,
      39,   121,    -1,   121,    40,   121,    -1,   121,    41,   121,
      -1,    58,   122,    59,    -1,    50,    28,    -1,    50,    29,
      -1,   121,    -1,   122,    -1,    95,    -1,    50,    -1,    51,
      -1,    52,    -1,    54,    -1,    53,    -1,    21,    -1,    22,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   100,   100,   101,   105,   107,   109,   111,   113,   113,
     115,   115,   117,   117,   119,   119,   121,   121,   123,   125,
     127,   127,   127,   127,   131,   134,   131,   139,   140,   141,
     139,   148,   153,   160,   164,   166,   170,   171,   170,   176,
     176,   186,   186,   188,   188,   192,   194,   198,   200,   204,
     208,   210,   214,   230,   232,   236,   238,   242,   246,   248,
     250,   248,   256,   256,   264,   265,   264,   270,   272,   274,
     278,   280,   284,   285,   284,   291,   291,   291,   295,   301,
     309,   313,   322,   324,   326,   328,   330,   332,   336,   338,
     340,   342,   344,   348,   350,   352,   354,   356,   358,   360,
     362,   364,   366,   368,   370,   372,   374,   376,   378,   380,
     384,   386,   390,   392,   394,   396,   398,   400,   402,   404,
     406,   408,   412,   418,   426,   428,   430,   435,   437,   439,
     441,   443,   445,   447
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
  "$@5", "$@6", "$@7", "$@8", "do_loop", "@9", "$@10", "for_loop", "@11",
  "$@12", "@13", "for_loop_initialization", "for_loop_condition",
  "for_loop_increment", "while_loop", "@14", "@15", "function_definition",
  "$@16", "function_declaration_prototype", "$@17", "$@18",
  "function_parameters_optional", "function_parameters",
  "function_parameter", "return_statement", "function_call",
  "function_arguments_optional", "function_arguments", "function_argument",
  "if_statement", "@19", "$@20", "one_level_if_statement", "@21",
  "switch_statement", "@22", "$@23", "switch_program", "case_statements",
  "case_statement", "@24", "$@25", "default_statement", "$@26", "$@27",
  "initialization", "declaration", "assignment", "assign", "type",
  "evaluate_expression", "math_or_value", "condition", "unary_expression",
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
     305,   306,   307,   308,   309,    59,   123,   125,    40,    41,
      44,    58
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    62,    63,    63,    64,    64,    64,    64,    65,    64,
      66,    64,    67,    64,    68,    64,    69,    64,    64,    64,
      70,    71,    72,    64,    74,    75,    73,    77,    78,    79,
      76,    80,    80,    81,    82,    82,    84,    85,    83,    87,
      86,    89,    88,    90,    88,    91,    91,    92,    92,    93,
      94,    94,    95,    96,    96,    97,    97,    98,    99,   100,
     101,    99,   103,   102,   105,   106,   104,   107,   107,   107,
     108,   108,   110,   111,   109,   113,   114,   112,   115,   115,
     116,   117,   118,   118,   118,   118,   118,   118,   119,   119,
     119,   119,   119,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     121,   121,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   123,   123,   124,   124,   124,   125,   125,   125,
     125,   125,   125,   125
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     2,     2,     2,     0,     2,
       0,     2,     0,     3,     0,     2,     0,     2,     1,     2,
       0,     0,     0,     6,     0,     0,    10,     0,     0,     0,
      14,     4,     3,     1,     1,     1,     0,     0,     9,     0,
       7,     0,     6,     0,     6,     1,     0,     3,     1,     2,
       2,     1,     4,     1,     0,     3,     1,     1,     1,     0,
       0,     7,     0,     8,     0,     0,     9,     1,     2,     1,
       2,     1,     0,     0,     8,     0,     0,     7,     5,     4,
       2,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     3,
       3,     2,     2,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     2,     3,     3,     3,     3,     3,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     8,     1,     0,    88,    89,    90,    91,    92,     0,
       0,     2,     0,    64,     0,     0,     0,     0,    18,    39,
       0,     0,     0,     0,     0,     0,     0,    41,   122,   123,
      82,    83,    84,    85,    86,    87,    54,     0,     0,     9,
      58,    11,     0,    24,     0,    36,    15,    27,    17,    21,
       0,    19,     5,     4,     6,    43,     7,     0,     0,   132,
     133,   127,   128,   129,   131,   130,     0,    53,    56,    57,
     108,   109,     0,   107,   105,   104,   111,   106,     0,   126,
     110,   124,   125,    81,     0,     0,     0,     0,    13,     0,
       0,     3,     3,     0,     0,     0,    46,    52,     0,   114,
     110,   125,     0,     0,     0,     0,     0,     0,   101,   102,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    60,     0,     3,     0,     0,     8,     8,    79,
      46,    78,     0,    45,    48,     0,    55,   103,   121,   107,
       0,    96,    97,    98,    99,   100,    93,    94,    95,   115,
     116,   117,   118,   119,   120,   113,   112,    62,     0,     0,
       8,     0,     0,     0,    28,    22,    51,     0,     0,    42,
       0,    49,     0,     0,     3,    65,     0,    37,     0,     0,
       0,    23,    50,     0,    44,    47,     3,     8,     0,    25,
       0,     0,    32,     0,    40,     8,    61,     0,     0,     3,
      31,    29,    33,    63,     0,     0,     0,    67,    71,    69,
       0,     8,     0,     0,    75,    66,    70,    68,     0,    38,
       0,    72,     3,    26,   107,     0,    35,    34,     3,     8,
       0,     8,     0,     3,     0,     0,     8,     0,    77,    30,
      74
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    11,    12,    13,    14,    15,    16,    17,    91,
     181,    44,    87,   198,    48,    90,   180,   212,   164,   201,
     225,    46,    89,   190,    18,    50,    19,    58,    94,   132,
     133,   134,   167,    79,    66,    67,    68,    39,    85,   158,
      40,   173,    41,    42,   188,   206,   207,   208,   228,   234,
     209,   222,   232,    21,    22,    23,    37,    24,    80,    81,
      82,    25,    83,    69
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -88
static const yytype_int16 yypact[] =
{
     -88,    57,   -88,    63,   -88,   -88,   -88,   -88,   -88,   -39,
     301,   -88,    21,   -88,    20,    25,    35,   -13,   -88,   -88,
      -4,     1,     3,     4,    16,    12,    19,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   123,    39,    26,   -88,
      66,   -88,    80,   -88,    40,   -88,   -88,   -88,   -88,   -88,
      42,   -88,   -88,   -88,   -88,   -27,   -88,    81,    51,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,    60,    50,   -88,   -88,
     -88,   -88,    39,    62,   -88,   -88,   -88,   -88,    39,   -88,
     364,   168,   -88,   -25,    39,   117,    67,    68,   -88,    74,
      76,   -88,   -88,    39,    78,    39,    63,   -88,   123,   -88,
     241,    83,   -25,    79,    79,    79,    79,    79,   -88,   -88,
      79,    79,    79,    -6,    -6,    -6,    -6,    -6,    -6,    39,
      39,   -33,   -88,    88,   -88,    39,    -8,   146,   350,   -25,
      63,   -25,    84,    87,   -88,    89,   -88,   -88,   -88,   -88,
      79,    77,    77,    -7,    -7,    -7,   323,   418,   410,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   106,   -88,    93,    96,
     164,   -30,   107,   126,   -88,   -88,    39,   103,   108,   -88,
      63,   -88,   241,   129,   -88,   -88,   188,   -88,   165,   147,
     142,   -88,   -25,   143,   -88,   -88,   -88,   226,   145,   -88,
     155,   148,   -88,    39,   -88,   242,   -88,    44,   154,   -88,
     -88,   -88,   -25,   -88,   123,   152,   159,    44,   -88,   -88,
      39,   288,   162,   158,   -88,   -88,   -88,   -88,   -23,   -88,
      64,   -88,   -88,   -88,   157,   170,   -88,   -25,   -88,   366,
     180,   412,   207,   -88,   227,   182,   304,   184,   -88,   -88,
     -88
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -87,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   -88,   121,
     -88,    82,   -88,    -1,   -88,   -88,   156,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   -88,   -88,   -88,    46,   -88,   -88,
      48,   -88,   -88,   -88,   -88,    43,   -88,    -2,   -72,   109,
     193,   -88,   -70,    69
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -81
static const yytype_int16 yytable[] =
{
      20,    26,    99,    93,   127,   128,   100,   162,   102,   119,
     120,    27,   119,   120,   121,    70,    71,   119,   120,   119,
     120,   108,   109,   129,    38,   131,   157,    43,   -80,   177,
      45,   141,   142,   143,   144,   145,   223,   160,   146,   147,
     148,    47,   163,    49,   139,    74,    75,    76,    77,   155,
     156,    51,   140,   204,   205,   161,    52,     2,    53,    54,
      70,    71,   -14,   -16,   -12,   -10,    55,    56,   172,    57,
     -59,     3,     4,     5,     6,     7,     8,     9,     4,     5,
       6,     7,     8,    72,    84,    70,    71,   187,    86,    73,
      74,    75,    76,    77,   135,    88,   182,    78,    92,   195,
      70,    71,   105,   106,   107,   108,   109,    10,    72,    96,
      98,    95,   211,   -20,   224,    74,    75,    76,    77,    97,
      36,   122,    78,   202,   124,   123,    20,    20,   135,   139,
      74,    75,   125,    77,   126,   229,   130,   140,   159,   171,
     218,   231,   138,   169,    59,    60,   236,   170,   119,   174,
     227,   -14,   -16,   -12,   -10,   175,   179,   178,   183,    20,
       3,     4,     5,     6,     7,     8,     9,   184,   135,   -14,
     -16,   -12,   -10,    61,    62,    63,    64,    65,     3,     4,
       5,     6,     7,     8,     9,   186,    20,    30,    31,    32,
      33,    34,    35,   189,    20,   191,    10,   193,   192,   200,
     194,   197,   -20,   165,   113,   114,   115,   116,   117,   118,
      20,   199,   210,   214,    10,    36,   215,   220,   235,   221,
     -20,   176,   149,   150,   151,   152,   153,   154,    20,   230,
      20,   -14,   -16,   -12,   -10,    20,   233,   238,   237,   240,
       3,     4,     5,     6,     7,     8,     9,   -14,   -16,   -12,
     -10,   168,   185,   216,   136,   217,     3,     4,     5,     6,
       7,     8,     9,   226,   103,   104,   105,   106,   107,   108,
     109,   101,     0,   213,     0,     0,    10,     0,     0,     0,
       0,     0,   -20,   196,     0,     0,   110,   111,   112,     0,
       0,     0,    10,   -14,   -16,   -12,   -10,     0,   -20,   203,
     137,     0,     3,     4,     5,     6,     7,     8,     9,   -14,
     -16,   -12,   -10,     0,     0,     0,     0,     0,     3,     4,
       5,     6,     7,     8,     9,     0,     0,     0,     0,    28,
      29,    30,    31,    32,    33,    34,    35,     0,    10,     0,
       0,     0,     0,     0,   -20,   219,   103,   104,   105,   106,
     107,   108,   109,     0,    10,   -14,   -16,   -12,   -10,    36,
     -20,   239,     0,   166,     3,     4,     5,     6,     7,     8,
       9,   -14,   -16,   -12,   -10,     0,     0,   -76,     0,     0,
       3,     4,     5,     6,     7,     8,     9,   103,   104,   105,
     106,   107,   108,   109,     0,     0,     0,     0,     0,     0,
      10,     0,     0,     0,     0,     0,   -20,     0,     0,   110,
     111,   112,     0,     0,     0,     0,    10,   -14,   -16,   -12,
     -10,     0,   -20,   -73,     0,     0,     3,     4,     5,     6,
       7,     8,     9,   103,   104,   105,   106,   107,   108,   109,
       0,   103,   104,   105,   106,   107,   108,   109,     0,     0,
       0,     0,     0,     0,     0,   110,   111,     0,     0,     0,
       0,     0,    10,   110,     0,     0,     0,     0,   -20
};

static const yytype_int16 yycheck[] =
{
       1,     3,    72,    30,    91,    92,    78,    15,    78,    42,
      43,    50,    42,    43,    84,    21,    22,    42,    43,    42,
      43,    28,    29,    93,     3,    95,    59,     7,    55,    59,
       5,   103,   104,   105,   106,   107,    59,   124,   110,   111,
     112,     6,    50,    56,    50,    51,    52,    53,    54,   119,
     120,    55,    58,     9,    10,   125,    55,     0,    55,    55,
      21,    22,     5,     6,     7,     8,    50,    55,   140,    50,
       4,    14,    15,    16,    17,    18,    19,    20,    15,    16,
      17,    18,    19,    44,    58,    21,    22,   174,     8,    50,
      51,    52,    53,    54,    96,    55,   166,    58,    56,   186,
      21,    22,    25,    26,    27,    28,    29,    50,    44,    58,
      60,    30,   199,    56,    50,    51,    52,    53,    54,    59,
      58,     4,    58,   193,    56,    58,   127,   128,   130,    50,
      51,    52,    58,    54,    58,   222,    58,    58,    50,    50,
     210,   228,    59,    59,    21,    22,   233,    60,    42,    56,
     220,     5,     6,     7,     8,    59,    30,    50,    55,   160,
      14,    15,    16,    17,    18,    19,    20,    59,   170,     5,
       6,     7,     8,    50,    51,    52,    53,    54,    14,    15,
      16,    17,    18,    19,    20,    56,   187,    30,    31,    32,
      33,    34,    35,     5,   195,    30,    50,    55,    51,    51,
      57,    56,    56,    57,    36,    37,    38,    39,    40,    41,
     211,    56,    58,    61,    50,    58,    57,    55,    11,    61,
      56,    57,   113,   114,   115,   116,   117,   118,   229,    59,
     231,     5,     6,     7,     8,   236,    56,    55,    11,    55,
      14,    15,    16,    17,    18,    19,    20,     5,     6,     7,
       8,   130,   170,   207,    98,   207,    14,    15,    16,    17,
      18,    19,    20,   220,    23,    24,    25,    26,    27,    28,
      29,    78,    -1,   204,    -1,    -1,    50,    -1,    -1,    -1,
      -1,    -1,    56,    57,    -1,    -1,    45,    46,    47,    -1,
      -1,    -1,    50,     5,     6,     7,     8,    -1,    56,    57,
      59,    -1,    14,    15,    16,    17,    18,    19,    20,     5,
       6,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    -1,    -1,    -1,    -1,    28,
      29,    30,    31,    32,    33,    34,    35,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    56,    57,    23,    24,    25,    26,
      27,    28,    29,    -1,    50,     5,     6,     7,     8,    58,
      56,    57,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,     5,     6,     7,     8,    -1,    -1,    11,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    45,
      46,    47,    -1,    -1,    -1,    -1,    50,     5,     6,     7,
       8,    -1,    56,    11,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    23,    24,    25,    26,    27,    28,    29,
      -1,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    50,    45,    -1,    -1,    -1,    -1,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,     0,    14,    15,    16,    17,    18,    19,    20,
      50,    64,    65,    66,    67,    68,    69,    70,    86,    88,
      95,   115,   116,   117,   119,   123,   119,    50,    28,    29,
      30,    31,    32,    33,    34,    35,    58,   118,     3,    99,
     102,   104,   105,     7,    73,     5,    83,     6,    76,    56,
      87,    55,    55,    55,    55,    50,    55,    50,    89,    21,
      22,    50,    51,    52,    53,    54,    96,    97,    98,   125,
      21,    22,    44,    50,    51,    52,    53,    54,    58,    95,
     120,   121,   122,   124,    58,   100,     8,    74,    55,    84,
      77,    71,    56,    30,    90,    30,    58,    59,    60,   124,
     120,   122,   124,    23,    24,    25,    26,    27,    28,    29,
      45,    46,    47,    36,    37,    38,    39,    40,    41,    42,
      43,   124,     4,    58,    56,    58,    58,    63,    63,   124,
      58,   124,    91,    92,    93,   119,    98,    59,    59,    50,
      58,   120,   120,   120,   120,   120,   120,   120,   120,   121,
     121,   121,   121,   121,   121,   124,   124,    59,   101,    50,
      63,   124,    15,    50,    80,    57,    13,    94,    91,    59,
      60,    50,   120,   103,    56,    59,    57,    59,    50,    30,
      78,    72,   124,    55,    59,    93,    56,    63,   106,     5,
      85,    30,    51,    55,    57,    63,    57,    56,    75,    56,
      51,    81,   124,    57,     9,    10,   107,   108,   109,   112,
      58,    63,    79,   125,    61,    57,   109,   112,   124,    57,
      55,    61,   113,    59,    50,    82,   117,   124,   110,    63,
      59,    63,   114,    56,   111,    11,    63,    11,    55,    57,
      55
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
#line 100 "parser.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 101 "parser.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 105 "parser.y"
    { printf("Declaration\n"); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 107 "parser.y"
    { printf("Initialization\n"); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 109 "parser.y"
    { printf("Assignment\n"); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 111 "parser.y"
    { printf("Unary Expression\n"); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    { printf("If statement start\n"); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 113 "parser.y"
    { printf("If statement end\n"); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    { printf("Switch case start\n"); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 115 "parser.y"
    { printf("Switch case end\n"); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    { printf("Do while loop start\n"); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 117 "parser.y"
    { printf("Do while loop end\n"); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    { printf("While loop start\n"); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 119 "parser.y"
    { printf("While loop end\n"); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    { printf("For loop start\n"); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 121 "parser.y"
    { printf("For loop end\n"); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 123 "parser.y"
    { printf("Function_definition\n"); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 125 "parser.y"
    { printf("Function_call\n"); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    { printf("Scope start\n"); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {symbTable.changeScope(1);}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    {symbTable.changeScope(0);}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 127 "parser.y"
    { printf("Scope end\n"); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 131 "parser.y"
    {symbTable.changeScope(1); string label = quadHandle.generateLabel(); quadHandle.writeToFile(label+":"); (yyval.sval) = strdup(label.data());}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {symbTable.changeScope(0);}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 135 "parser.y"
    {quadHandle.jump_cond_op((yyvsp[(9) - (10)].symboll), (yyvsp[(2) - (10)].sval), true);}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 139 "parser.y"
    {symbTable.changeScope(1); string label = quadHandle.generateLabel(); (yyval.sval) = strdup(label.data());}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 140 "parser.y"
    {quadHandle.writeToFile(string((yyvsp[(2) - (4)].sval))+":");}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 141 "parser.y"
    {string label = quadHandle.generateLabel(); (yyval.sval) = strdup(label.data()); quadHandle.jump_cond_op((yyvsp[(7) - (7)].symboll), label, false);}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {quadHandle.jump_uncond_op((yyvsp[(2) - (14)].sval)); symbTable.changeScope(0); quadHandle.writeToFile(string((yyvsp[(8) - (14)].sval)) + ":");}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    {
                                symbol* temp = symbTable.addOrUpdateSymbol(string((yyvsp[(2) - (4)].sval)),symbolType::INTtype,new symbol(string((yyvsp[(4) - (4)].sval)), symbolType::INTtype, 1,1),0,1);
                                quadHandle.assign_op(operation::Assign, temp, new symbol((yyvsp[(4) - (4)].sval), symbolType::INTtype, 1,1));
                            }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 153 "parser.y"
    {
                                symbol* temp = symbTable.addOrUpdateSymbol(string((yyvsp[(1) - (3)].sval)),symbolType::UNKNOWN,new symbol(string((yyvsp[(3) - (3)].sval)), symbolType::INTtype, 1,1),0,1);
                                quadHandle.assign_op(operation::Assign, temp, new symbol((yyvsp[(3) - (3)].sval), symbolType::INTtype, 1,1));
                            }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    {(yyval.symboll) = (yyvsp[(1) - (1)].symboll);}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {string label = quadHandle.generateLabel(); quadHandle.writeToFile(label+":"); (yyval.sval) = strdup(label.data());}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 171 "parser.y"
    {string label = quadHandle.generateLabel(); (yyval.sval) = strdup(label.data()); quadHandle.jump_cond_op((yyvsp[(4) - (5)].symboll), label, false); symbTable.changeScope(1);}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {quadHandle.jump_uncond_op((yyvsp[(2) - (9)].sval)); symbTable.changeScope(0); quadHandle.writeToFile(string((yyvsp[(6) - (9)].sval))+":");}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    {if(inFunction) yyerror("You cannot declare a function inside a function."); inFunction = 1;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    { 
        inFunction = 0; 
        symbTable.changeScope(0); 
        functionParameters[(yyvsp[(1) - (7)].sval)] = currentFunctionParameters;
        currentFunctionParameters.clear();
        currFunctionReturn = symbolType::UNKNOWN;
        }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {symbTable.setUsed(symbTable.addOrUpdateSymbol(string((yyvsp[(2) - (2)].sval)),symbolType::VOIDtype,NULL,0,1)); symbTable.changeScope(1); currFunctionReturn = symbolType::VOIDtype;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {quadHandle.declare_func_op(symbTable.findSymbol(string((yyvsp[(2) - (6)].sval))), currentFunctionParameters); (yyval.sval)=(yyvsp[(2) - (6)].sval);}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {symbTable.setUsed(symbTable.addOrUpdateSymbol(string((yyvsp[(2) - (2)].sval)),(yyvsp[(1) - (2)].symbolTypeType),NULL,0,1)); symbTable.changeScope(1); currFunctionReturn = (yyvsp[(1) - (2)].symbolTypeType);}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {quadHandle.declare_func_op(symbTable.findSymbol(string((yyvsp[(2) - (6)].sval))), currentFunctionParameters); (yyval.sval)=(yyvsp[(2) - (6)].sval);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 200 "parser.y"
    {;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    {symbol* s = symbTable.addOrUpdateSymbol(string((yyvsp[(2) - (2)].sval)),(yyvsp[(1) - (2)].symbolTypeType),NULL,0,1); currentFunctionParameters.push_back(s);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {quadHandle.return_op((yyvsp[(2) - (2)].symboll), currFunctionReturn);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {quadHandle.return_op(NULL, currFunctionReturn);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    {
        symbol* temp = symbTable.findSymbol(string((yyvsp[(1) - (4)].sval)));
        if(!functionParameters.count(string(temp->name))) yyerror("There is not a function with this name.");
        vector<symbol*> params = functionParameters[string(temp->name)];
        if(params.size() != functionCallParameters.size()) yyerror("Number of parameters does not match.");
        for(int i = 0; i < params.size(); i++)
        {
            if(!quadHandle.tryCast(functionCallParameters[i],params[i]->type)) yyerror("Parameter types do not match.");
        }
        symbol* ret = quadHandle.call_func_op(temp, functionCallParameters);
        functionCallParameters.clear();
        (yyval.symboll) = ret;
    }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 230 "parser.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 232 "parser.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 236 "parser.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 238 "parser.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 242 "parser.y"
    {functionCallParameters.push_back((yyvsp[(1) - (1)].symboll));}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 246 "parser.y"
    {quadHandle.writeToFile(string((yyvsp[(1) - (1)].sval))+":");}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    {string label2 = quadHandle.generateLabel(); quadHandle.jump_uncond_op(label2); quadHandle.writeToFile(string((yyvsp[(1) - (1)].sval))+":"); (yyval.sval) = strdup(label2.data());}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    {symbTable.changeScope(1);}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    {symbTable.changeScope(0); quadHandle.writeToFile(string((yyvsp[(2) - (7)].sval))+":");}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    {
                            string label = quadHandle.generateLabel(); quadHandle.jump_cond_op((yyvsp[(3) - (4)].symboll), label, false); symbTable.changeScope(1); (yyval.sval) = strdup(label.data());
                          }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    {symbTable.changeScope(0); (yyval.sval) = (yyvsp[(5) - (8)].sval);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    {string label = quadHandle.generateLabel(); (yyval.sval) = strdup(label.data()); currSwitchLabel = label;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    {currSwitchVar = symbTable.findSymbol(string((yyvsp[(4) - (5)].sval)));}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    {quadHandle.writeToFile(string((yyvsp[(1) - (9)].sval))+":"); currSwitchLabel = ""; symbTable.setUsed(symbTable.findSymbol(string((yyvsp[(4) - (9)].sval)))); currSwitchVar = NULL;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    {symbol* temp = quadHandle.rel_op(operation::Eq, currSwitchVar, (yyvsp[(2) - (3)].symboll)); string label = quadHandle.generateLabel(); quadHandle.jump_cond_op(temp, label, false); symbTable.changeScope(1); (yyval.sval) = strdup(label.data());}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 285 "parser.y"
    {quadHandle.jump_uncond_op(currSwitchLabel); symbTable.changeScope(0);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 287 "parser.y"
    {quadHandle.writeToFile(string((yyvsp[(4) - (8)].sval))+":");}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    {symbTable.changeScope(1);}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 291 "parser.y"
    {symbTable.changeScope(0);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    {
                                        symbol* temp = symbTable.addOrUpdateSymbol(string((yyvsp[(3) - (5)].sval)),(yyvsp[(2) - (5)].symbolTypeType),(yyvsp[(5) - (5)].symboll),1,1);
                                        quadHandle.assign_op(operation::Assign, temp, (yyvsp[(5) - (5)].symboll));
                                        (yyval.symboll) = (yyvsp[(5) - (5)].symboll);
                                    }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    {
                                        symbol* temp = symbTable.addOrUpdateSymbol(string((yyvsp[(2) - (4)].sval)),(yyvsp[(1) - (4)].symbolTypeType),(yyvsp[(4) - (4)].symboll),0,1);
                                        quadHandle.assign_op(operation::Assign, temp, (yyvsp[(4) - (4)].symboll));
                                        (yyval.symboll) = (yyvsp[(4) - (4)].symboll);
                                    }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 309 "parser.y"
    {symbTable.addOrUpdateSymbol(string((yyvsp[(2) - (2)].sval)),(yyvsp[(1) - (2)].symbolTypeType),NULL,0,0);}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 313 "parser.y"
    {
                                symbol* temp = symbTable.addOrUpdateSymbol(string((yyvsp[(1) - (3)].sval)),symbolType::UNKNOWN,(yyvsp[(3) - (3)].symboll),0,1);
                                quadHandle.assign_op((yyvsp[(2) - (3)].operationName) ,temp, (yyvsp[(3) - (3)].symboll));
                                (yyval.symboll) = (yyvsp[(3) - (3)].symboll);
                                if((yyvsp[(2) - (3)].operationName) != operation::Assign) symbTable.setUsed(temp); // if += or -= or so, then the variable is used
                            }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    {(yyval.operationName) = operation::Assign;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    {(yyval.operationName) = operation::Add_assign;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    {(yyval.operationName) = operation::Sub_assign;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 328 "parser.y"
    {(yyval.operationName) = operation::Mul_assign;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 330 "parser.y"
    {(yyval.operationName) = operation::Div_assign;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 332 "parser.y"
    {(yyval.operationName) = operation::Mod_assign;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    {(yyval.symbolTypeType) = symbolType::INTtype;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 338 "parser.y"
    {(yyval.symbolTypeType) = symbolType::FLOATtype;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 340 "parser.y"
    {(yyval.symbolTypeType) = symbolType::CHARtype;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    {(yyval.symbolTypeType) = symbolType::STRINGtype;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 344 "parser.y"
    {(yyval.symbolTypeType) = symbolType::BOOLtype;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    {(yyval.symboll) = quadHandle.bit_op(operation::Bit_and, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    {(yyval.symboll) = quadHandle.bit_op(operation::Bit_or, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    {(yyval.symboll) = quadHandle.bit_op(operation::Bit_xor, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 354 "parser.y"
    {(yyval.symboll) = quadHandle.math_op(operation::Plus, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    {(yyval.symboll) = quadHandle.math_op(operation::Minus, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    {(yyval.symboll) = quadHandle.math_op(operation::Mul, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    {(yyval.symboll) = quadHandle.math_op(operation::Div, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
    {(yyval.symboll) = quadHandle.math_op(operation::Mod, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 364 "parser.y"
    {(yyval.symboll) = quadHandle.unary_op(operation::Inc, (yyvsp[(1) - (2)].symboll));}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    {(yyval.symboll) = quadHandle.unary_op(operation::Inc, (yyvsp[(1) - (2)].symboll));}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 368 "parser.y"
    {;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 370 "parser.y"
    {symbol* temp = new symbol((yyvsp[(1) - (1)].sval), symbolType::FLOATtype,1,1); quadHandle.tempVars.push_back(temp);(yyval.symboll) = temp;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 372 "parser.y"
    {symbol* temp = new symbol((yyvsp[(1) - (1)].sval), symbolType::INTtype, 1,1); quadHandle.tempVars.push_back(temp); (yyval.symboll) = temp;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 374 "parser.y"
    {symbol* temp = new symbol((yyvsp[(1) - (1)].sval), symbolType::INTtype, 1,1); quadHandle.tempVars.push_back(temp); (yyval.symboll) = temp;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 376 "parser.y"
    {(yyval.symboll) = symbTable.setUsed(symbTable.findSymbol(string((yyvsp[(1) - (1)].sval))));}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 378 "parser.y"
    {symbol* temp = new symbol("true", symbolType::BOOLtype, 1,1); quadHandle.tempVars.push_back(temp); (yyval.symboll) = temp;}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 380 "parser.y"
    {symbol* temp = new symbol("false", symbolType::BOOLtype, 1,1); quadHandle.tempVars.push_back(temp); (yyval.symboll) = temp;}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 384 "parser.y"
    {;}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 386 "parser.y"
    {symbol* temp = new symbol((yyvsp[(1) - (1)].sval), symbolType::STRINGtype, 1,1); quadHandle.tempVars.push_back(temp); (yyval.symboll) = temp;}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 390 "parser.y"
    {(yyval.symboll) = quadHandle.logic_op(operation::Or, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 392 "parser.y"
    {(yyval.symboll) = quadHandle.logic_op(operation::And, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 394 "parser.y"
    {(yyval.symboll) = quadHandle.logic_op(operation::Not, (yyvsp[(2) - (2)].symboll), NULL);}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 396 "parser.y"
    {(yyval.symboll) = quadHandle.rel_op(operation::Eq, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 398 "parser.y"
    {(yyval.symboll) = quadHandle.rel_op(operation::Neq, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 400 "parser.y"
    {(yyval.symboll) = quadHandle.rel_op(operation::Lt, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 402 "parser.y"
    {(yyval.symboll) = quadHandle.rel_op(operation::Gt, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 404 "parser.y"
    {(yyval.symboll) = quadHandle.rel_op(operation::Lte, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 406 "parser.y"
    {(yyval.symboll) = quadHandle.rel_op(operation::Gte, (yyvsp[(1) - (3)].symboll), (yyvsp[(3) - (3)].symboll));}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 408 "parser.y"
    {;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 412 "parser.y"
    {
                    symbol *temp = symbTable.findSymbol(string((yyvsp[(1) - (2)].sval)));
                    (yyval.symboll) = quadHandle.unary_op(operation::Inc, temp);
                    symbTable.setUsed(temp);
                }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 418 "parser.y"
    {
                    symbol *temp = symbTable.findSymbol(string((yyvsp[(1) - (2)].sval)));
                    (yyval.symboll) = quadHandle.unary_op(operation::Inc, temp);
                    symbTable.setUsed(temp);
                }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 426 "parser.y"
    {;}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    {;}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 430 "parser.y"
    {;}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 435 "parser.y"
    {(yyval.symboll) = symbTable.setUsed(symbTable.findSymbol(string((yyvsp[(1) - (1)].sval))));}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 437 "parser.y"
    {symbol* temp = new symbol((yyvsp[(1) - (1)].sval), symbolType::INTtype, 1,1); quadHandle.tempVars.push_back(temp); (yyval.symboll) = temp;}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 439 "parser.y"
    {symbol* temp = new symbol((yyvsp[(1) - (1)].sval), symbolType::FLOATtype, 1,1); quadHandle.tempVars.push_back(temp); (yyval.symboll) = temp;}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 441 "parser.y"
    {symbol* temp = new symbol((yyvsp[(1) - (1)].sval), symbolType::INTtype, 1,1); quadHandle.tempVars.push_back(temp); (yyval.symboll) = temp;}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 443 "parser.y"
    {symbol* temp = new symbol((yyvsp[(1) - (1)].sval), symbolType::STRINGtype, 1,1); quadHandle.tempVars.push_back(temp); (yyval.symboll) = temp;}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 445 "parser.y"
    {symbol* temp = new symbol("true", symbolType::BOOLtype,1,1); quadHandle.tempVars.push_back(temp); (yyval.symboll) = temp;}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 447 "parser.y"
    {symbol* temp = new symbol("false", symbolType::BOOLtype,1,1); quadHandle.tempVars.push_back(temp); (yyval.symboll) = temp;}
    break;



/* Line 1455 of yacc.c  */
#line 2668 "y.tab.c"
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
#line 449 "parser.y"


/* Error handling */
void yyerror(const char *msg){
  extern int yylineno;
    fprintf(stderr, "Error: %s at line %d\n", msg, yylineno);
    fprintf(stdout, "\nError: %s at line %d\n", msg, yylineno);
  exit(1);
}

void yywarn(const char *msg){
    fprintf(stderr, "Warning: %s\n", msg);
    fprintf(stdout, "\nWarning: %s\n", msg);
}


int main(int argc, char *argv[]){

    printf("Starting...\n");

    extern FILE* yyin;
    char* filename = argv[1];
    FILE* file = fopen(filename,"r");
    if(!file)
    {
        printf("File Error\n");
    }
    yyin = file;

    yyparse();
    symbTable.printSymbolTable(symbolTable::current);
    symbolTable::cleanUp();
    quadHandle.cleanUp();
    cout<<"Cleanup done"<<endl;

    return 0;
}

