
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
#include <string>
#include "utils/symbolTable.hpp"

symbolTable symbTable = symbolTable();
int symbolTable::numScopes = 0;
vector<vector<symbolTable*>> symbolTable::symbolTableAdj = vector<vector<symbolTable*>>(1,vector<symbolTable*>());
symbolTable* symbolTable::current = &symbTable;

int yylex();

int inFunction = 0;


/* Line 189 of yacc.c  */
#line 90 "y.tab.c"

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
#line 17 "parser.y"

    char cval;
    char *sval;
    int ival;
    float fval;
    char *id;
    constNode* constNodeType;
    symbolType symbolTypeType;



/* Line 214 of yacc.c  */
#line 246 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 258 "y.tab.c"

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
#define YYLAST   464

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  62
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  53
/* YYNRULES -- Number of rules.  */
#define YYNRULES  129
/* YYNRULES -- Number of states.  */
#define YYNSTATES  235

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
      45,    48,    49,    54,    55,    56,    67,    68,    81,    86,
      90,    91,    93,    94,    96,    98,    99,   100,   109,   110,
     116,   122,   128,   130,   131,   135,   137,   140,   143,   146,
     148,   153,   158,   163,   165,   166,   170,   172,   174,   176,
     182,   183,   192,   200,   202,   205,   207,   210,   212,   213,
     214,   223,   224,   225,   233,   239,   244,   248,   251,   255,
     257,   259,   261,   263,   265,   267,   269,   271,   273,   275,
     277,   281,   285,   289,   293,   297,   301,   305,   309,   312,
     315,   319,   321,   323,   325,   327,   329,   331,   333,   335,
     339,   343,   346,   350,   354,   358,   362,   366,   370,   374,
     377,   380,   382,   384,   386,   388,   390,   392,   394,   396
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      63,     0,    -1,    63,    64,    -1,    -1,   105,    55,    -1,
     104,    55,    -1,   106,    55,    -1,   112,    55,    -1,    -1,
      65,    92,    -1,    -1,    66,    95,    -1,    -1,    67,    71,
      55,    -1,    -1,    68,    79,    -1,    -1,    69,    74,    -1,
      81,    -1,    88,    55,    -1,    87,    55,    -1,    -1,    70,
      56,    63,    57,    -1,    -1,    -1,     7,    72,    56,    63,
      57,     5,    73,    58,   113,    59,    -1,    -1,     6,    75,
      58,    76,    55,    77,    55,    78,    59,    56,    63,    57,
      -1,    15,    50,    30,    51,    -1,    50,    30,    51,    -1,
      -1,   113,    -1,    -1,   113,    -1,   106,    -1,    -1,    -1,
       5,    58,   113,    59,    80,    56,    63,    57,    -1,    -1,
      83,    82,    56,    63,    57,    -1,    20,    50,    58,    84,
      59,    -1,   108,    50,    58,    84,    59,    -1,    85,    -1,
      -1,    85,    60,    86,    -1,    86,    -1,   108,    50,    -1,
      13,   113,    -1,    13,   106,    -1,    13,    -1,    50,    58,
      89,    59,    -1,   106,    58,    89,    59,    -1,   104,    58,
      89,    59,    -1,    90,    -1,    -1,    90,    60,    91,    -1,
      91,    -1,   114,    -1,    93,    -1,    93,     4,    56,    63,
      57,    -1,    -1,     3,    58,   113,    59,    94,    56,    63,
      57,    -1,     8,    58,    50,    59,    56,    96,    57,    -1,
      97,    -1,    97,   101,    -1,   101,    -1,    97,    98,    -1,
      98,    -1,    -1,    -1,     9,   114,    61,    99,    63,   100,
      11,    55,    -1,    -1,    -1,    10,    61,   102,    63,   103,
      11,    55,    -1,    14,   108,    50,    30,   113,    -1,   108,
      50,    30,   113,    -1,    14,   108,    50,    -1,   108,    50,
      -1,    50,   107,   113,    -1,    30,    -1,    31,    -1,    32,
      -1,    33,    -1,    34,    -1,    35,    -1,    15,    -1,    16,
      -1,    17,    -1,    18,    -1,    19,    -1,   109,    45,   109,
      -1,   109,    46,   109,    -1,   109,    47,   109,    -1,   109,
      23,   109,    -1,   109,    24,   109,    -1,   109,    25,   109,
      -1,   109,    26,   109,    -1,   109,    27,   109,    -1,   109,
      28,    -1,   109,    29,    -1,    58,   109,    59,    -1,    52,
      -1,    51,    -1,    54,    -1,    50,    -1,    21,    -1,    22,
      -1,   109,    -1,    53,    -1,   113,    43,   113,    -1,   113,
      42,   113,    -1,    44,   113,    -1,   110,    36,   110,    -1,
     110,    37,   110,    -1,   110,    38,   110,    -1,   110,    39,
     110,    -1,   110,    40,   110,    -1,   110,    41,   110,    -1,
      58,   111,    59,    -1,    50,    28,    -1,    50,    29,    -1,
     110,    -1,   111,    -1,    50,    -1,    51,    -1,    52,    -1,
      54,    -1,    53,    -1,    21,    -1,    22,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    89,    89,    90,    94,    96,    98,   100,   102,   102,
     104,   104,   106,   106,   108,   108,   110,   110,   112,   114,
     116,   118,   118,   122,   122,   122,   126,   126,   130,   134,
     138,   142,   144,   148,   150,   152,   156,   156,   160,   160,
     164,   166,   170,   172,   176,   178,   182,   186,   188,   190,
     194,   196,   198,   202,   204,   208,   210,   214,   218,   220,
     224,   224,   228,   232,   234,   236,   240,   242,   246,   246,
     246,   250,   250,   250,   254,   256,   260,   262,   266,   270,
     272,   274,   276,   278,   280,   284,   286,   288,   290,   292,
     296,   298,   300,   302,   304,   306,   308,   310,   312,   314,
     316,   318,   320,   322,   324,   326,   328,   332,   334,   338,
     340,   342,   344,   346,   348,   350,   352,   354,   356,   360,
     362,   366,   368,   373,   375,   377,   379,   381,   383,   385
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
  "$@5", "$@6", "do_loop", "$@7", "$@8", "for_loop", "$@9",
  "for_loop_initialization", "for_loop_condition", "for_loop_increment",
  "while_loop", "$@10", "function_definition", "$@11",
  "function_declaration_prototype", "function_parameters_optional",
  "function_parameters", "function_parameter", "return_statement",
  "function_call", "function_arguments_optional", "function_arguments",
  "function_argument", "if_statement", "one_level_if_statement", "$@12",
  "switch_statement", "switch_program", "case_statements",
  "case_statement", "$@13", "$@14", "default_statement", "$@15", "$@16",
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
      64,    70,    64,    72,    73,    71,    75,    74,    76,    76,
      76,    77,    77,    78,    78,    78,    80,    79,    82,    81,
      83,    83,    84,    84,    85,    85,    86,    87,    87,    87,
      88,    88,    88,    89,    89,    90,    90,    91,    92,    92,
      94,    93,    95,    96,    96,    96,    97,    97,    99,   100,
      98,   102,   103,   101,   104,   104,   105,   105,   106,   107,
     107,   107,   107,   107,   107,   108,   108,   108,   108,   108,
     109,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   111,
     111,   111,   111,   111,   111,   111,   111,   111,   111,   112,
     112,   113,   113,   114,   114,   114,   114,   114,   114,   114
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     2,     2,     2,     2,     0,     2,
       0,     2,     0,     3,     0,     2,     0,     2,     1,     2,
       2,     0,     4,     0,     0,    10,     0,    12,     4,     3,
       0,     1,     0,     1,     1,     0,     0,     8,     0,     5,
       5,     5,     1,     0,     3,     1,     2,     2,     2,     1,
       4,     4,     4,     1,     0,     3,     1,     1,     1,     5,
       0,     8,     7,     1,     2,     1,     2,     1,     0,     0,
       8,     0,     0,     7,     5,     4,     3,     2,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     3,     3,     3,     2,     2,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     2,     3,     3,     3,     3,     3,     3,     3,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     8,     1,    49,     0,    85,    86,    87,    88,    89,
       0,     0,     2,     0,     0,     0,     0,     0,     0,    18,
      38,     0,     0,     0,     0,     0,     0,     0,   105,   106,
       0,   104,   102,   101,   108,   103,     0,    48,   107,   121,
     122,    47,     0,     0,   119,   120,    79,    80,    81,    82,
      83,    84,    54,     0,     0,     9,    58,     0,    11,    23,
       0,     0,    15,    26,    17,     3,     0,    20,    19,     5,
      54,     4,     6,    54,    77,     7,   104,   111,   107,   122,
       0,     0,     0,     0,     0,     0,    98,    99,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
      43,   128,   129,   123,   124,   125,   127,   126,     0,    53,
      56,    57,    78,     0,     0,     0,     0,    13,     0,     0,
       8,     3,     0,     0,     0,    43,   100,   118,     0,    93,
      94,    95,    96,    97,    90,    91,    92,   112,   113,   114,
     115,   116,   117,   110,   109,     0,     0,    42,    45,     0,
      50,     0,     0,     3,     0,     3,     0,    30,    22,     8,
      52,    51,    75,     0,     0,    74,    40,     0,    46,    55,
      60,     8,     0,     8,    36,     0,     0,     0,    39,    41,
      44,     0,    59,     0,     0,     0,     0,     0,    32,     3,
       0,     0,     0,    63,    67,    65,    24,     3,     0,    29,
       0,    31,     8,     0,    71,    62,    66,    64,     0,     8,
      28,    35,    61,    68,     3,     0,    37,     0,    34,    33,
       3,     8,     0,     0,     8,     0,    25,     3,     0,     0,
       8,     0,    73,    27,    70
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    12,    13,    14,    15,    16,    17,    18,    60,
     116,   208,    64,   119,   177,   200,   217,    62,   185,    19,
      66,    20,   146,   147,   148,    21,    22,   108,   109,   110,
      55,    56,   181,    58,   192,   193,   194,   220,   228,   195,
     214,   225,    23,    24,    25,    53,    26,    38,    39,    40,
      27,    41,   111
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -60
static const yytype_int16 yypact[] =
{
     -60,    14,   -60,    -9,   130,   -60,   -60,   -60,   -60,   -60,
     -46,   257,   -60,     8,    15,    18,    34,    42,     5,   -60,
     -60,    12,    16,   -40,    30,   -18,    36,    32,   -60,   -60,
      82,   272,   -60,   -60,   -60,   -60,    82,   -60,   320,   314,
     -60,   -26,    38,    35,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   120,    82,    47,   -60,    86,    48,   -60,   -60,
      60,    59,   -60,   -60,   -60,   -60,    62,   -60,   -60,   -60,
     120,   -60,   -60,   120,   -22,   -60,   -60,   -60,   197,    66,
     -26,    70,    70,    70,    70,    70,   -60,   -60,    70,    70,
      70,    25,    25,    25,    25,    25,    25,    82,    82,    89,
     130,   -60,   -60,   -60,   -60,   -60,   -60,   -60,    68,    69,
     -60,   -60,   -26,    82,    75,    87,    83,   -60,    82,    85,
      94,   -60,    93,    95,    82,   130,   -60,   -60,    70,   202,
     202,    45,    45,    45,   152,   419,   383,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   111,    82,    97,    98,   -60,   107,
     -60,   120,   -33,   -60,   101,   -60,    13,   -12,   -60,   182,
     -60,   -60,   -26,   103,   197,   -26,   -60,   130,   -60,   -60,
     -60,   198,   108,   244,   -60,   113,   136,   112,   -60,   -60,
     -60,   127,   -60,    71,   164,   128,   155,   140,    82,   -60,
     120,   131,   137,    71,   -60,   -60,   -60,   -60,   142,   -60,
     154,   -26,   260,   146,   -60,   -60,   -60,   -60,   161,   306,
     -60,    -9,   -60,   -60,   -60,    82,   -60,   151,   -60,   -26,
     -60,   369,    23,   177,   385,   223,   -60,   -60,   224,   181,
     322,   185,   -60,   -60,   -60
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -60,   -59,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,   -60,
     -60,   -60,   116,   -60,    78,   -60,   -60,   -10,   -60,    96,
     -60,   -60,   -60,   -60,   -60,   -60,    44,   -60,   -60,    53,
     -60,   -60,   -60,   -60,    -3,   -60,    -2,   -31,   358,   217,
     -60,   -29,    79
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -73
static const yytype_int16 yytable[] =
{
      37,    77,    42,   175,    43,    78,   120,    80,   124,    97,
      98,    54,    28,    29,     2,    69,    97,    98,    70,   -14,
     -16,   -12,   -10,    57,   112,    59,   170,     3,     4,     5,
       6,     7,     8,     9,    10,    30,   125,    72,   176,    61,
      73,    31,    32,    33,    34,    35,    28,    29,    63,    36,
     129,   130,   131,   132,   133,    97,    98,   134,   135,   136,
     122,    65,   159,   123,    11,    97,    98,    67,   143,   144,
     -21,    68,   174,    86,    87,    76,    32,    33,    34,    35,
     190,   191,   226,   128,   152,    71,    74,    75,    99,   156,
     114,    28,    29,   100,   171,   162,   173,   164,   149,   -14,
     -16,   -12,   -10,    28,    29,   113,   115,     3,     4,     5,
       6,     7,     8,     9,    10,   117,   165,   118,   121,   145,
      76,    32,    33,   149,    35,   127,    30,   150,   128,   151,
     202,   153,    76,    32,    33,    34,    35,   154,   209,   155,
      36,   101,   102,   157,    11,     5,     6,     7,     8,     9,
     -21,   158,   160,    97,   161,   221,   166,   168,   167,   201,
     172,   224,   179,   186,   183,   149,   187,   188,   230,   196,
     103,   104,   105,   106,   107,    81,    82,    83,    84,    85,
      86,    87,   219,   189,   197,   198,   222,   -14,   -16,   -12,
     -10,   199,   204,   210,   205,     3,     4,     5,     6,     7,
       8,     9,    10,   -14,   -16,   -12,   -10,   213,   218,   211,
     223,     3,     4,     5,     6,     7,     8,     9,    10,   215,
      81,    82,    83,    84,    85,    86,    87,    83,    84,    85,
      86,    87,    11,   227,   229,   231,   232,   206,   -21,   178,
     234,   163,    88,    89,    90,   180,   207,   169,    11,   -14,
     -16,   -12,   -10,    79,   -21,   182,   126,     3,     4,     5,
       6,     7,     8,     9,    10,   -14,   -16,   -12,   -10,   203,
       0,     0,     0,     3,     4,     5,     6,     7,     8,     9,
      10,     0,     0,     0,     0,    44,    45,    46,    47,    48,
      49,    50,    51,     0,    11,     0,     0,     0,     0,     0,
     -21,   184,    46,    47,    48,    49,    50,    51,     0,     0,
      11,   -14,   -16,   -12,   -10,    52,   -21,   212,     0,     3,
       4,     5,     6,     7,     8,     9,    10,   -14,   -16,   -12,
     -10,     0,     0,     0,     0,     3,     4,     5,     6,     7,
       8,     9,    10,    81,    82,    83,    84,    85,    86,    87,
      91,    92,    93,    94,    95,    96,    11,     0,     0,     0,
       0,     0,   -21,   216,     0,    88,    89,    90,     0,     0,
       0,     0,    11,     0,   -14,   -16,   -12,   -10,   -21,   233,
     -72,     0,     3,     4,     5,     6,     7,     8,     9,    10,
     -14,   -16,   -12,   -10,     0,     0,   -69,     0,     3,     4,
       5,     6,     7,     8,     9,    10,    81,    82,    83,    84,
      85,    86,    87,     0,     0,     0,     0,     0,     0,    11,
       0,     0,     0,     0,     0,   -21,     0,     0,    88,    89,
       0,     0,     0,     0,     0,    11,     0,     0,     0,     0,
       0,   -21,    81,    82,    83,    84,    85,    86,    87,   137,
     138,   139,   140,   141,   142,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88
};

static const yytype_int16 yycheck[] =
{
       3,    30,     4,    15,    50,    36,    65,    36,    30,    42,
      43,     3,    21,    22,     0,    55,    42,    43,    58,     5,
       6,     7,     8,     8,    53,     7,    59,    13,    14,    15,
      16,    17,    18,    19,    20,    44,    58,    55,    50,     5,
      58,    50,    51,    52,    53,    54,    21,    22,     6,    58,
      81,    82,    83,    84,    85,    42,    43,    88,    89,    90,
      70,    56,   121,    73,    50,    42,    43,    55,    97,    98,
      56,    55,    59,    28,    29,    50,    51,    52,    53,    54,
       9,    10,    59,    58,   113,    55,    50,    55,    50,   118,
       4,    21,    22,    58,   153,   124,   155,   128,   100,     5,
       6,     7,     8,    21,    22,    58,    58,    13,    14,    15,
      16,    17,    18,    19,    20,    55,   145,    58,    56,    30,
      50,    51,    52,   125,    54,    59,    44,    59,    58,    60,
     189,    56,    50,    51,    52,    53,    54,    50,   197,    56,
      58,    21,    22,    58,    50,    15,    16,    17,    18,    19,
      56,    57,    59,    42,    59,   214,    59,    50,    60,   188,
      59,   220,    59,    50,    56,   167,    30,    55,   227,     5,
      50,    51,    52,    53,    54,    23,    24,    25,    26,    27,
      28,    29,   211,    56,    56,    30,   215,     5,     6,     7,
       8,    51,    61,    51,    57,    13,    14,    15,    16,    17,
      18,    19,    20,     5,     6,     7,     8,    61,   211,    55,
      59,    13,    14,    15,    16,    17,    18,    19,    20,    58,
      23,    24,    25,    26,    27,    28,    29,    25,    26,    27,
      28,    29,    50,    56,    11,    11,    55,   193,    56,    57,
      55,   125,    45,    46,    47,   167,   193,   151,    50,     5,
       6,     7,     8,    36,    56,    57,    59,    13,    14,    15,
      16,    17,    18,    19,    20,     5,     6,     7,     8,   190,
      -1,    -1,    -1,    13,    14,    15,    16,    17,    18,    19,
      20,    -1,    -1,    -1,    -1,    28,    29,    30,    31,    32,
      33,    34,    35,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      56,    57,    30,    31,    32,    33,    34,    35,    -1,    -1,
      50,     5,     6,     7,     8,    58,    56,    57,    -1,    13,
      14,    15,    16,    17,    18,    19,    20,     5,     6,     7,
       8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
      18,    19,    20,    23,    24,    25,    26,    27,    28,    29,
      36,    37,    38,    39,    40,    41,    50,    -1,    -1,    -1,
      -1,    -1,    56,    57,    -1,    45,    46,    47,    -1,    -1,
      -1,    -1,    50,    -1,     5,     6,     7,     8,    56,    57,
      11,    -1,    13,    14,    15,    16,    17,    18,    19,    20,
       5,     6,     7,     8,    -1,    -1,    11,    -1,    13,    14,
      15,    16,    17,    18,    19,    20,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    56,    23,    24,    25,    26,    27,    28,    29,    91,
      92,    93,    94,    95,    96,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    45
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    63,     0,    13,    14,    15,    16,    17,    18,    19,
      20,    50,    64,    65,    66,    67,    68,    69,    70,    81,
      83,    87,    88,   104,   105,   106,   108,   112,    21,    22,
      44,    50,    51,    52,    53,    54,    58,   106,   109,   110,
     111,   113,   108,    50,    28,    29,    30,    31,    32,    33,
      34,    35,    58,   107,     3,    92,    93,     8,    95,     7,
      71,     5,    79,     6,    74,    56,    82,    55,    55,    55,
      58,    55,    55,    58,    50,    55,    50,   113,   109,   111,
     113,    23,    24,    25,    26,    27,    28,    29,    45,    46,
      47,    36,    37,    38,    39,    40,    41,    42,    43,    50,
      58,    21,    22,    50,    51,    52,    53,    54,    89,    90,
      91,   114,   113,    58,     4,    58,    72,    55,    58,    75,
      63,    56,    89,    89,    30,    58,    59,    59,    58,   109,
     109,   109,   109,   109,   109,   109,   109,   110,   110,   110,
     110,   110,   110,   113,   113,    30,    84,    85,    86,   108,
      59,    60,   113,    56,    50,    56,   113,    58,    57,    63,
      59,    59,   113,    84,   109,   113,    59,    60,    50,    91,
      59,    63,    59,    63,    59,    15,    50,    76,    57,    59,
      86,    94,    57,    56,    57,    80,    50,    30,    55,    56,
       9,    10,    96,    97,    98,   101,     5,    56,    30,    51,
      77,   113,    63,   114,    61,    57,    98,   101,    73,    63,
      51,    55,    57,    61,   102,    58,    57,    78,   106,   113,
      99,    63,   113,    59,    63,   103,    59,    56,   100,    11,
      63,    11,    55,    57,    55
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
#line 89 "parser.y"
    {;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 90 "parser.y"
    {;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 94 "parser.y"
    { printf("Declaration\n"); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 96 "parser.y"
    { printf("Initialization\n"); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 98 "parser.y"
    { printf("Assignment\n"); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 100 "parser.y"
    { printf("Unary Expression\n"); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    { printf("If statement start\n"); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 102 "parser.y"
    { printf("If statement end\n"); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    { printf("Switch case start\n"); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 104 "parser.y"
    { printf("Switch case end\n"); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    { printf("Do while loop start\n"); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 106 "parser.y"
    { printf("Do while loop end\n"); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    { printf("While loop start\n"); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 108 "parser.y"
    { printf("While loop end\n"); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    { printf("For loop start\n"); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 110 "parser.y"
    { printf("For loop end\n"); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 112 "parser.y"
    { printf("Function_definition\n"); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 114 "parser.y"
    { printf("Function_call\n"); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 116 "parser.y"
    { if (!(inFunction)) yyerror("Return statement outside function"); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    { printf("Scope start\n"); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 118 "parser.y"
    { printf("Scope end\n"); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {symbTable.changeScope(1);}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {symbTable.changeScope(0);}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 122 "parser.y"
    {;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {symbTable.changeScope(1);}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 126 "parser.y"
    {symbTable.changeScope(0);}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 130 "parser.y"
    {
                                symbTable.addOrUpdateSymbol(string((yyvsp[(2) - (4)].id)),symbolType::INTtype,new constNode(symbolType::INTtype,to_string((yyvsp[(4) - (4)].ival))),0,1);
                            }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 134 "parser.y"
    {
                                symbTable.addOrUpdateSymbol(string((yyvsp[(1) - (3)].id)),symbolType::UNKNOWN,new constNode(symbolType::INTtype,to_string((yyvsp[(3) - (3)].ival))),0,0);
                            }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 138 "parser.y"
    {;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 142 "parser.y"
    {;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 144 "parser.y"
    {;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 148 "parser.y"
    {;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 150 "parser.y"
    {;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 152 "parser.y"
    {;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    {symbTable.changeScope(1);}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 156 "parser.y"
    {symbTable.changeScope(0);}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    { inFunction = 1;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 160 "parser.y"
    { inFunction = 0;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 166 "parser.y"
    {;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 170 "parser.y"
    {;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 172 "parser.y"
    {;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    {;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 178 "parser.y"
    {;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 182 "parser.y"
    {;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    {;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    {;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    {;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    {;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    {;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    {;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 208 "parser.y"
    {;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    {;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {symbTable.changeScope(0);}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    {symbTable.changeScope(1);}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 224 "parser.y"
    {symbTable.changeScope(0);}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 246 "parser.y"
    {symbTable.changeScope(1);}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 246 "parser.y"
    {symbTable.changeScope(0);}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    {symbTable.changeScope(1);}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 250 "parser.y"
    {symbTable.changeScope(0);}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    {symbTable.addOrUpdateSymbol(string((yyvsp[(3) - (5)].id)),(yyvsp[(2) - (5)].symbolTypeType),(yyvsp[(5) - (5)].constNodeType),1,1);}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    {symbTable.addOrUpdateSymbol(string((yyvsp[(2) - (4)].id)),(yyvsp[(1) - (4)].symbolTypeType),(yyvsp[(4) - (4)].constNodeType),0,1);}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    {symbTable.addOrUpdateSymbol(string((yyvsp[(3) - (3)].id)),(yyvsp[(2) - (3)].symbolTypeType),new constNode(),1,0);}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 262 "parser.y"
    {symbTable.addOrUpdateSymbol(string((yyvsp[(2) - (2)].id)),(yyvsp[(1) - (2)].symbolTypeType),new constNode(),0,0);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    {symbTable.addOrUpdateSymbol(string((yyvsp[(1) - (3)].id)),symbolType::UNKNOWN,(yyvsp[(3) - (3)].constNodeType),0,0);}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 270 "parser.y"
    { printf("ASSIGN\n"); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    { printf("ADD_ASSIGN\n"); }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 274 "parser.y"
    { printf("SUB_ASSIGN\n"); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    { printf("MUL_ASSIGN\n"); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 278 "parser.y"
    { printf("DIV_ASSIGN\n"); }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 280 "parser.y"
    { printf("MOD_ASSIGN\n"); }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    {(yyval.symbolTypeType) = symbolType::INTtype;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 286 "parser.y"
    {(yyval.symbolTypeType) = symbolType::FLOATtype;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    {(yyval.symbolTypeType) = symbolType::CHARtype;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 290 "parser.y"
    {(yyval.symbolTypeType) = symbolType::STRINGtype;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    {(yyval.symbolTypeType) = symbolType::BOOLtype;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 296 "parser.y"
    { printf("BIT_AND\n"); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 298 "parser.y"
    { printf("BIT_OR\n"); }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 300 "parser.y"
    { printf("BIT_XOR\n"); }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 302 "parser.y"
    { printf("PLUS\n"); }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    { printf("MINUS\n"); }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 306 "parser.y"
    { printf("MUL\n"); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    { printf("DIV\n"); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 310 "parser.y"
    { printf("MOD\n"); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 312 "parser.y"
    { printf("INC\n"); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 314 "parser.y"
    { printf("DEC\n"); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 316 "parser.y"
    {;}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 318 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::FLOATtype,to_string((yyvsp[(1) - (1)].fval)));}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::INTtype,to_string((yyvsp[(1) - (1)].ival)));}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 322 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::INTtype, to_string((int)(yyvsp[(1) - (1)].cval)));}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    {;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 326 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::BOOLtype,"1");}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 328 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::BOOLtype,"0");}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 332 "parser.y"
    {;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 334 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::STRINGtype,(yyvsp[(1) - (1)].sval));}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 338 "parser.y"
    { printf("OR\n"); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 340 "parser.y"
    { printf("AND\n"); }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    { printf("NOT\n"); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 344 "parser.y"
    { printf("EQ\n"); }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 346 "parser.y"
    { printf("NEQ\n"); }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    { printf("LT\n"); }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    { printf("GT\n"); }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    { printf("LTE\n"); }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 354 "parser.y"
    { printf("GTE\n"); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    {;}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    {;}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 362 "parser.y"
    {;}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    {;}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 368 "parser.y"
    {;}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 373 "parser.y"
    {;}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 375 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::INTtype,to_string((yyvsp[(1) - (1)].ival)));}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 377 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::FLOATtype,to_string((yyvsp[(1) - (1)].fval)));}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 379 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::INTtype,to_string((yyvsp[(1) - (1)].cval)));}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 381 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::STRINGtype,(yyvsp[(1) - (1)].sval));}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 383 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::BOOLtype,"1");}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 385 "parser.y"
    {(yyval.constNodeType) = new constNode(symbolType::BOOLtype,"0");}
    break;



/* Line 1455 of yacc.c  */
#line 2553 "y.tab.c"
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
#line 387 "parser.y"


/* Error handling */
void yyerror(const char *msg){
  fprintf(stderr, "%s\n", msg);
  exit(1);
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
    symbolTable::cleanup();
    cout<<"Cleanup done"<<endl;

    return 0;
}

