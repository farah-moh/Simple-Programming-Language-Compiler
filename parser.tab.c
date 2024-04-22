
/*  A Bison parser, made from parser.y
 by  GNU Bison version 1.27
  */

#define YYBISON 1  /* Identify Bison output.  */

#define	IF	257
#define	ELSE	258
#define	WHILE	259
#define	FOR	260
#define	DO	261
#define	SWITCH	262
#define	CASE	263
#define	DEFAULT	264
#define	BREAK	265
#define	CONTINUE	266
#define	RETURN	267
#define	CONST	268
#define	INT	269
#define	FLOAT	270
#define	CHAR	271
#define	STRING	272
#define	BOOL	273
#define	VOID	274
#define	TRUE	275
#define	FALSE	276
#define	PLUS	277
#define	MINUS	278
#define	MUL	279
#define	DIV	280
#define	MOD	281
#define	INC	282
#define	DEC	283
#define	ASSIGN	284
#define	ADD_ASSIGN	285
#define	SUB_ASSIGN	286
#define	MUL_ASSIGN	287
#define	DIV_ASSIGN	288
#define	MOD_ASSIGN	289
#define	EQ	290
#define	NEQ	291
#define	LT	292
#define	GT	293
#define	LTE	294
#define	GTE	295
#define	AND	296
#define	OR	297
#define	NOT	298
#define	BIT_AND	299
#define	BIT_OR	300
#define	BIT_XOR	301
#define	ID	302
#define	INTEGER_CONST	303
#define	FLOAT_CONST	304
#define	STRING_CONST	305
#define	CHAR_CONST	306

#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.yy.c"

bool inFunction = FALSE;

#line 10 "parser.y"
typedef union {
    char cval;
    char *sval;
    int ival;
    float fval;
    char *ID;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		174
#define	YYFLAG		-32768
#define	YYNTBASE	62

#define YYTRANSLATE(x) ((unsigned)(x) <= 306 ? yytranslate[x] : 94)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    56,
    57,     2,    61,    58,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    59,    53,     2,
    60,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    54,     2,    55,     2,     2,     2,     2,     2,
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
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
    37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
    47,    48,    49,    50,    51,    52
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     3,     5,     8,    11,    14,    17,    20,    23,    26,
    29,    32,    34,    36,    39,    43,    52,    64,    66,    68,
    70,    72,    73,    75,    77,    78,    86,    90,    94,    98,
   102,   106,   110,   114,   118,   120,   121,   127,   133,   139,
   141,   142,   146,   148,   151,   154,   156,   161,   163,   164,
   168,   170,   172,   180,   192,   200,   202,   205,   208,   210,
   217,   224,   230,   235,   239,   242,   246,   248,   250,   252,
   254,   256,   260,   262,   264,   266,   268,   270,   272
};

static const short yyrhs[] = {    62,
    63,     0,    63,     0,    64,    53,     0,    65,    53,     0,
    69,    53,     0,    88,    53,     0,    89,    53,     0,    71,
    53,     0,    78,    53,     0,    77,    53,     0,    90,    53,
     0,    82,     0,    83,     0,    48,    53,     0,    54,    62,
    55,     0,     7,    54,    62,    55,     5,    56,    70,    57,
     0,     6,    56,    66,    53,    67,    53,    68,    57,    54,
    62,    55,     0,    88,     0,    67,     0,    92,     0,    90,
     0,     0,    92,     0,    90,     0,     0,     5,    56,    70,
    57,    54,    62,    55,     0,    70,    43,    93,     0,    70,
    42,    93,     0,    70,    36,    93,     0,    70,    37,    93,
     0,    70,    38,    93,     0,    70,    39,    93,     0,    70,
    40,    93,     0,    70,    41,    93,     0,    93,     0,     0,
    73,    72,    54,    62,    55,     0,    20,    48,    56,    74,
    57,     0,    91,    48,    56,    74,    57,     0,    75,     0,
     0,    75,    58,    76,     0,    76,     0,    91,    48,     0,
    13,    92,     0,    13,     0,    48,    56,    79,    57,     0,
    80,     0,     0,    80,    58,    81,     0,    81,     0,    48,
     0,     3,    56,    92,    57,    54,    62,    55,     0,     3,
    56,    92,    57,    54,    62,    55,     4,    54,    62,    55,
     0,     8,    56,    92,    57,    54,    84,    55,     0,    85,
     0,    85,    87,     0,    85,    86,     0,    86,     0,     9,
    93,    59,    62,    11,    53,     0,    10,    93,    59,    62,
    11,    53,     0,    14,    91,    48,    60,    92,     0,    91,
    48,    60,    92,     0,    14,    91,    48,     0,    91,    48,
     0,    48,    60,    92,     0,    15,     0,    16,     0,    17,
     0,    18,     0,    19,     0,    93,    61,    93,     0,    48,
     0,    49,     0,    50,     0,    52,     0,    51,     0,    21,
     0,    22,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    68,    70,    73,    75,    76,    77,    78,    79,    80,    81,
    82,    83,    84,    85,    86,    89,    93,    97,    99,   103,
   105,   107,   111,   113,   115,   119,   123,   125,   126,   127,
   128,   129,   130,   131,   132,   135,   136,   139,   141,   144,
   146,   149,   151,   155,   159,   161,   165,   168,   170,   173,
   175,   178,   182,   184,   188,   192,   194,   198,   200,   204,
   208,   212,   214,   218,   220,   224,   228,   230,   232,   234,
   236,   240,   244,   246,   248,   250,   252,   254,   256
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","IF","ELSE",
"WHILE","FOR","DO","SWITCH","CASE","DEFAULT","BREAK","CONTINUE","RETURN","CONST",
"INT","FLOAT","CHAR","STRING","BOOL","VOID","TRUE","FALSE","PLUS","MINUS","MUL",
"DIV","MOD","INC","DEC","ASSIGN","ADD_ASSIGN","SUB_ASSIGN","MUL_ASSIGN","DIV_ASSIGN",
"MOD_ASSIGN","EQ","NEQ","LT","GT","LTE","GTE","AND","OR","NOT","BIT_AND","BIT_OR",
"BIT_XOR","ID","INTEGER_CONST","FLOAT_CONST","STRING_CONST","CHAR_CONST","';'",
"'{'","'}'","'('","')'","','","':'","'='","'+'","program","statement","do_loop",
"for_loop","for_loop_initialization","for_loop_condition","for_loop_increment",
"while_loop","condition","function_definition","@1","function_declaration_prototype",
"function_parameters_optional","function_parameters","function_parameter","return_statement",
"function_call","function_arguments_optional","function_arguments","function_argument",
"if_statement","switch_statement","switch_program","case_statements","case_statement",
"default_statement","initialization","declaration","assignment","type","expr",
"literal", NULL
};
#endif

static const short yyr1[] = {     0,
    62,    62,    63,    63,    63,    63,    63,    63,    63,    63,
    63,    63,    63,    63,    63,    64,    65,    66,    66,    67,
    67,    67,    68,    68,    68,    69,    70,    70,    70,    70,
    70,    70,    70,    70,    70,    72,    71,    73,    73,    74,
    74,    75,    75,    76,    77,    77,    78,    79,    79,    80,
    80,    81,    82,    82,    83,    84,    84,    85,    85,    86,
    87,    88,    88,    89,    89,    90,    91,    91,    91,    91,
    91,    92,    93,    93,    93,    93,    93,    93,    93
};

static const short yyr2[] = {     0,
     2,     1,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     1,     1,     2,     3,     8,    11,     1,     1,     1,
     1,     0,     1,     1,     0,     7,     3,     3,     3,     3,
     3,     3,     3,     3,     1,     0,     5,     5,     5,     1,
     0,     3,     1,     2,     2,     1,     4,     1,     0,     3,
     1,     1,     7,    11,     7,     1,     2,     2,     1,     6,
     6,     5,     4,     3,     2,     3,     1,     1,     1,     1,
     1,     3,     1,     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     0,
     0,     0,     0,     0,     0,    46,     0,    67,    68,    69,
    70,    71,     0,     0,     0,     0,     2,     0,     0,     0,
     0,    36,     0,     0,    12,    13,     0,     0,     0,     0,
     0,     0,    22,     0,     0,    78,    79,    73,    74,    75,
    77,    76,    45,     0,     0,     0,    14,    49,     0,     0,
     1,     3,     4,     5,     8,     0,    10,     9,     6,     7,
    11,    65,     0,     0,    35,     0,    73,     0,    19,    18,
    21,     0,    20,     0,     0,     0,    64,    41,    52,     0,
    48,    51,    66,    15,     0,    41,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    22,     0,
     0,     0,    72,     0,     0,    40,    43,     0,    47,     0,
     0,     0,    63,     0,    29,    30,    31,    32,    33,    34,
    28,    27,     0,     0,     0,     0,     0,    62,    38,     0,
    44,    50,    37,    39,     0,     0,    25,     0,     0,     0,
    56,    59,    42,    53,    26,     0,    24,    23,     0,     0,
    55,     0,    58,    57,     0,     0,    16,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    54,    17,    60,
     0,    61,     0,     0
};

static const short yydefgoto[] = {    16,
    17,    18,    19,    68,    69,   146,    20,    64,    21,    56,
    22,   105,   106,   107,    23,    24,    80,    81,    82,    25,
    26,   140,   141,   142,   154,    27,    28,    29,    30,    73,
    44
};

static const short yypact[] = {   368,
   -52,   -50,   -36,   -31,   -34,   109,    54,-32768,-32768,-32768,
-32768,-32768,   -23,   -32,   368,    36,-32768,   -21,   -15,   -13,
    -7,-32768,    -5,     4,-32768,-32768,     6,    22,    23,   -19,
   109,   109,   383,   368,   109,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,    17,   -18,    25,-32768,   -11,   109,   121,
-32768,-32768,-32768,-32768,-32768,    28,-32768,-32768,-32768,-32768,
-32768,   -55,    29,   -24,-32768,    54,    19,    32,-32768,-32768,
-32768,    39,-32768,   165,    34,   109,    33,    54,-32768,    35,
    31,-32768,-32768,-32768,   368,    54,   109,    40,   109,   109,
   109,   109,   109,   109,   109,   109,    42,    49,   272,    38,
    94,    47,-32768,   109,    45,    46,-32768,    55,-32768,   -11,
   183,    48,-32768,   368,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,   368,    33,    58,    51,    99,-32768,-32768,    54,
-32768,-32768,-32768,-32768,   209,   227,   272,   109,   109,    59,
     1,-32768,-32768,   112,-32768,    56,-32768,-32768,   370,    62,
-32768,   109,-32768,-32768,    63,    64,-32768,   368,    66,   368,
   368,   324,   368,   253,   271,    69,   342,-32768,-32768,-32768,
    89,-32768,   143,-32768
};

static const short yypgoto[] = {    -8,
   -16,-32768,-32768,-32768,    57,-32768,-32768,     7,-32768,-32768,
-32768,    61,-32768,    14,-32768,-32768,-32768,-32768,    44,-32768,
-32768,-32768,-32768,    21,-32768,   130,-32768,   -25,     2,    -4,
   -29
};


#define	YYLAST		435


static const short yytable[] = {    51,
    86,    43,    65,    31,    87,    32,    50,    71,    45,   139,
   152,    89,    90,    91,    92,    93,    94,    95,    96,    33,
    47,    35,    34,    48,    46,    74,    63,    49,    62,    77,
    75,    52,    97,    51,    72,   173,    79,    53,     1,    54,
     2,     3,     4,     5,    83,    55,   103,    57,     6,     7,
     8,     9,    10,    11,    12,    13,    58,    51,    59,   115,
   116,   117,   118,   119,   120,   121,   122,    98,     8,     9,
    10,    11,    12,    71,    60,    61,   111,    76,    49,   108,
    78,    85,   113,    14,    99,    88,   100,   108,   110,    15,
   102,   109,   104,   114,    51,   123,   124,    87,   126,   128,
   127,   129,   131,   130,   134,   135,   138,   139,    65,   150,
   137,   147,   156,   151,   136,   155,   160,   161,    51,    51,
   158,   170,   159,     1,   163,     2,     3,     4,     5,    36,
    37,   108,   148,     6,     7,     8,     9,    10,    11,    12,
    13,   172,   174,   143,   149,    51,   112,    51,    51,   162,
    51,   164,   165,   132,   167,   125,    38,    39,    40,    41,
    42,   153,    70,     0,     0,     0,     0,     1,    14,     2,
     3,     4,     5,     0,    15,    84,     0,     6,     7,     8,
     9,    10,    11,    12,    13,     1,     0,     2,     3,     4,
     5,     0,     0,     0,     0,     6,     7,     8,     9,    10,
    11,    12,    13,     0,     0,     0,     0,     0,     0,     0,
     0,     1,    14,     2,     3,     4,     5,     0,    15,   101,
     0,     6,     7,     8,     9,    10,    11,    12,    13,     1,
    14,     2,     3,     4,     5,     0,    15,   133,     0,     6,
     7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
     0,     0,     0,     0,     0,     1,    14,     2,     3,     4,
     5,     0,    15,   144,     0,     6,     7,     8,     9,    10,
    11,    12,    13,     1,    14,     2,     3,     4,     5,     0,
    15,   145,     0,     6,     7,     8,     9,    10,    11,    12,
    13,     0,    36,    37,     0,     0,     0,     0,     0,     0,
    14,     0,     0,     0,     0,     0,    15,   168,     0,     0,
     0,     0,     0,     0,     0,     0,     0,     0,    14,    67,
    39,    40,    41,    42,    15,   169,     1,     0,     2,     3,
     4,     5,     0,     0,   166,     0,     6,     7,     8,     9,
    10,    11,    12,    13,     1,     0,     2,     3,     4,     5,
     0,     0,   171,     0,     6,     7,     8,     9,    10,    11,
    12,    13,     0,     0,     0,     0,     0,     0,     0,     0,
     1,    14,     2,     3,     4,     5,     0,    15,     0,     0,
     6,     7,     8,     9,    10,    11,    12,    13,     0,    14,
     0,     0,     0,     0,     0,    15,    66,     8,     9,    10,
    11,    12,     0,    36,    37,    89,    90,    91,    92,    93,
    94,    95,    96,     0,     0,    14,     0,     0,     0,     0,
     0,    15,     0,     0,     0,     0,   157,     0,     0,     0,
    67,    39,    40,    41,    42
};

static const short yycheck[] = {    16,
    56,     6,    32,    56,    60,    56,    15,    33,     7,     9,
    10,    36,    37,    38,    39,    40,    41,    42,    43,    56,
    53,    56,    54,    56,    48,    34,    31,    60,    48,    48,
    35,    53,    57,    50,    33,     0,    48,    53,     3,    53,
     5,     6,     7,     8,    49,    53,    76,    53,    13,    14,
    15,    16,    17,    18,    19,    20,    53,    74,    53,    89,
    90,    91,    92,    93,    94,    95,    96,    66,    15,    16,
    17,    18,    19,    99,    53,    53,    85,    61,    60,    78,
    56,    54,    87,    48,    53,    57,    48,    86,    58,    54,
    57,    57,    60,    54,   111,    54,    48,    60,     5,   104,
    54,    57,    48,    58,    57,   114,    56,     9,   138,   139,
    53,   137,    57,    55,   123,     4,    54,    54,   135,   136,
    59,    53,   152,     3,    59,     5,     6,     7,     8,    21,
    22,   130,   137,    13,    14,    15,    16,    17,    18,    19,
    20,    53,     0,   130,   138,   162,    86,   164,   165,   158,
   167,   160,   161,   110,   163,    99,    48,    49,    50,    51,
    52,   141,    33,    -1,    -1,    -1,    -1,     3,    48,     5,
     6,     7,     8,    -1,    54,    55,    -1,    13,    14,    15,
    16,    17,    18,    19,    20,     3,    -1,     5,     6,     7,
     8,    -1,    -1,    -1,    -1,    13,    14,    15,    16,    17,
    18,    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    -1,     3,    48,     5,     6,     7,     8,    -1,    54,    55,
    -1,    13,    14,    15,    16,    17,    18,    19,    20,     3,
    48,     5,     6,     7,     8,    -1,    54,    55,    -1,    13,
    14,    15,    16,    17,    18,    19,    20,    -1,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,     3,    48,     5,     6,     7,
     8,    -1,    54,    55,    -1,    13,    14,    15,    16,    17,
    18,    19,    20,     3,    48,     5,     6,     7,     8,    -1,
    54,    55,    -1,    13,    14,    15,    16,    17,    18,    19,
    20,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
    48,    -1,    -1,    -1,    -1,    -1,    54,    55,    -1,    -1,
    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    48,
    49,    50,    51,    52,    54,    55,     3,    -1,     5,     6,
     7,     8,    -1,    -1,    11,    -1,    13,    14,    15,    16,
    17,    18,    19,    20,     3,    -1,     5,     6,     7,     8,
    -1,    -1,    11,    -1,    13,    14,    15,    16,    17,    18,
    19,    20,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     3,    48,     5,     6,     7,     8,    -1,    54,    -1,    -1,
    13,    14,    15,    16,    17,    18,    19,    20,    -1,    48,
    -1,    -1,    -1,    -1,    -1,    54,    14,    15,    16,    17,
    18,    19,    -1,    21,    22,    36,    37,    38,    39,    40,
    41,    42,    43,    -1,    -1,    48,    -1,    -1,    -1,    -1,
    -1,    54,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,
    48,    49,    50,    51,    52
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "bison.simple"
/* This file comes from bison-1.27.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 216 "bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 3:
#line 74 "parser.y"
{ printf("Do_loop\n"); ;
    break;}
case 4:
#line 75 "parser.y"
{ printf("For_loop\n"); ;
    break;}
case 5:
#line 76 "parser.y"
{ printf("While_loop\n"); ;
    break;}
case 6:
#line 77 "parser.y"
{ printf("Initialization\n"); ;
    break;}
case 7:
#line 78 "parser.y"
{ printf("Declaration\n"); ;
    break;}
case 8:
#line 79 "parser.y"
{ printf("Function_definition\n"); ;
    break;}
case 9:
#line 80 "parser.y"
{ printf("Function_call\n"); ;
    break;}
case 10:
#line 81 "parser.y"
{ if (!(inFunction)) yyerror("Return statement outside function"); ;
    break;}
case 11:
#line 82 "parser.y"
{ printf("Assignment\n"); ;
    break;}
case 12:
#line 83 "parser.y"
{ printf("If_statement\n"); ;
    break;}
case 13:
#line 84 "parser.y"
{ printf("Switch_statement\n"); ;
    break;}
case 14:
#line 85 "parser.y"
{ printf("ID\n"); ;
    break;}
case 15:
#line 86 "parser.y"
{ printf("Scope\n"); ;
    break;}
case 16:
#line 90 "parser.y"
{;;
    break;}
case 17:
#line 94 "parser.y"
{;;
    break;}
case 18:
#line 98 "parser.y"
{;;
    break;}
case 19:
#line 100 "parser.y"
{;;
    break;}
case 20:
#line 104 "parser.y"
{;;
    break;}
case 21:
#line 106 "parser.y"
{;;
    break;}
case 22:
#line 108 "parser.y"
{;;
    break;}
case 23:
#line 112 "parser.y"
{;;
    break;}
case 24:
#line 114 "parser.y"
{;;
    break;}
case 25:
#line 116 "parser.y"
{;;
    break;}
case 26:
#line 120 "parser.y"
{;;
    break;}
case 27:
#line 124 "parser.y"
{;;
    break;}
case 28:
#line 125 "parser.y"
{;;
    break;}
case 29:
#line 126 "parser.y"
{;;
    break;}
case 30:
#line 127 "parser.y"
{;;
    break;}
case 31:
#line 128 "parser.y"
{;;
    break;}
case 32:
#line 129 "parser.y"
{;;
    break;}
case 33:
#line 130 "parser.y"
{;;
    break;}
case 34:
#line 131 "parser.y"
{;;
    break;}
case 36:
#line 136 "parser.y"
{ inFunction = TRUE; ;
    break;}
case 37:
#line 136 "parser.y"
{ inFunction = FALSE; ;
    break;}
case 38:
#line 140 "parser.y"
{;;
    break;}
case 39:
#line 142 "parser.y"
{;;
    break;}
case 40:
#line 145 "parser.y"
{;;
    break;}
case 41:
#line 147 "parser.y"
{;;
    break;}
case 42:
#line 150 "parser.y"
{;;
    break;}
case 44:
#line 156 "parser.y"
{;;
    break;}
case 47:
#line 166 "parser.y"
{;;
    break;}
case 48:
#line 169 "parser.y"
{;;
    break;}
case 49:
#line 171 "parser.y"
{;;
    break;}
case 50:
#line 174 "parser.y"
{;;
    break;}
case 52:
#line 179 "parser.y"
{;;
    break;}
case 62:
#line 213 "parser.y"
{;;
    break;}
case 63:
#line 215 "parser.y"
{;;
    break;}
case 64:
#line 219 "parser.y"
{;;
    break;}
case 65:
#line 221 "parser.y"
{;;
    break;}
case 66:
#line 225 "parser.y"
{;;
    break;}
case 67:
#line 229 "parser.y"
{;;
    break;}
case 68:
#line 231 "parser.y"
{;;
    break;}
case 69:
#line 233 "parser.y"
{;;
    break;}
case 70:
#line 235 "parser.y"
{;;
    break;}
case 71:
#line 237 "parser.y"
{;;
    break;}
case 72:
#line 241 "parser.y"
{;;
    break;}
case 73:
#line 245 "parser.y"
{;;
    break;}
case 74:
#line 247 "parser.y"
{;;
    break;}
case 75:
#line 249 "parser.y"
{;;
    break;}
case 76:
#line 251 "parser.y"
{;;
    break;}
case 77:
#line 253 "parser.y"
{;;
    break;}
case 78:
#line 255 "parser.y"
{;;
    break;}
case 79:
#line 257 "parser.y"
{;;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 542 "bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 259 "parser.y"


/* Error handling */
void yyerror(char *msg){
  fprintf(stderr, "%s\n", msg);
  exit(1);
}


int main(){
    yyparse();
    return 0;
}
