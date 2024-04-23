
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
#define	COMMENT	302
#define	ID	303
#define	INT_CONST	304
#define	FLOAT_CONST	305
#define	STRING_CONST	306
#define	CHAR_CONST	307

#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(char* s);

_Bool inFunction = 0;

#line 11 "parser.y"
typedef union {
    char cval;
    char *sval;
    int ival;
    float fval;
    char *id;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		225
#define	YYFLAG		-32768
#define	YYNTBASE	61

#define YYTRANSLATE(x) ((unsigned)(x) <= 307 ? yytranslate[x] : 102)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    57,
    58,     2,     2,    59,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    60,    54,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    55,     2,    56,     2,     2,     2,     2,     2,
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
    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     3,     4,     7,    10,    13,    14,    17,    18,    21,
    22,    26,    27,    30,    31,    34,    36,    39,    42,    45,
    46,    51,    60,    72,    77,    81,    82,    84,    85,    87,
    89,    90,    98,    99,   105,   111,   117,   119,   120,   124,
   126,   129,   132,   135,   137,   142,   149,   157,   159,   160,
   164,   166,   168,   176,   188,   196,   198,   201,   203,   206,
   208,   215,   221,   227,   232,   236,   239,   243,   245,   247,
   249,   251,   253,   255,   257,   259,   261,   263,   265,   269,
   273,   277,   281,   285,   289,   293,   297,   300,   303,   307,
   309,   311,   313,   315,   317,   319,   321,   323,   327,   331,
   334,   338,   342,   346,   350,   354,   358,   362,   364,   366,
   368,   370,   372,   374,   376,   378
};

static const short yyrhs[] = {    61,
    62,     0,     0,    93,    54,     0,    92,    54,     0,    94,
    54,     0,     0,    63,    86,     0,     0,    64,    87,     0,
     0,    65,    69,    54,     0,     0,    66,    74,     0,     0,
    67,    70,     0,    75,     0,    82,    54,     0,    81,    54,
     0,    49,    54,     0,     0,    68,    55,    61,    56,     0,
     7,    55,    61,    56,     5,    57,   100,    58,     0,     6,
    57,    71,    54,    72,    54,    73,    58,    55,    61,    56,
     0,    15,    49,    30,    50,     0,    49,    30,    50,     0,
     0,   100,     0,     0,   100,     0,    94,     0,     0,     5,
    57,   100,    58,    55,    61,    56,     0,     0,    77,    76,
    55,    61,    56,     0,    20,    49,    57,    78,    58,     0,
    96,    49,    57,    78,    58,     0,    79,     0,     0,    79,
    59,    80,     0,    80,     0,    96,    49,     0,    13,   100,
     0,    13,    94,     0,    13,     0,    49,    57,    83,    58,
     0,    49,    30,    49,    57,    83,    58,     0,    96,    49,
    30,    49,    57,    83,    58,     0,    84,     0,     0,    84,
    59,    85,     0,    85,     0,   101,     0,     3,    57,   100,
    58,    55,    61,    56,     0,     3,    57,   100,    58,    55,
    61,    56,     4,    55,    61,    56,     0,     8,    57,    49,
    58,    55,    88,    56,     0,    89,     0,    89,    91,     0,
    91,     0,    89,    90,     0,    90,     0,     9,   101,    60,
    61,    11,    54,     0,    10,    60,    61,    11,    54,     0,
    14,    96,    49,    30,   100,     0,    96,    49,    30,   100,
     0,    14,    96,    49,     0,    96,    49,     0,    49,    95,
   100,     0,    30,     0,    31,     0,    32,     0,    33,     0,
    34,     0,    35,     0,    15,     0,    16,     0,    17,     0,
    18,     0,    19,     0,    97,    45,    97,     0,    97,    46,
    97,     0,    97,    47,    97,     0,    97,    23,    97,     0,
    97,    24,    97,     0,    97,    25,    97,     0,    97,    26,
    97,     0,    97,    27,    97,     0,    97,    28,     0,    97,
    29,     0,    57,    97,    58,     0,    51,     0,    50,     0,
    53,     0,    49,     0,    21,     0,    22,     0,    97,     0,
    52,     0,   100,    43,   100,     0,   100,    42,   100,     0,
    44,   100,     0,    98,    36,    98,     0,    98,    37,    98,
     0,    98,    38,    98,     0,    98,    39,    98,     0,    98,
    40,    98,     0,    98,    41,    98,     0,    57,    99,    58,
     0,    98,     0,    99,     0,    49,     0,    50,     0,    51,
     0,    53,     0,    52,     0,    21,     0,    22,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    72,    74,    77,    79,    80,    81,    81,    82,    82,    83,
    83,    84,    84,    85,    85,    86,    87,    88,    89,    90,
    90,    93,    97,   101,   103,   105,   109,   111,   115,   117,
   119,   123,   127,   128,   131,   133,   137,   139,   143,   145,
   149,   153,   155,   157,   161,   163,   165,   169,   171,   175,
   177,   181,   185,   187,   191,   195,   197,   199,   203,   205,
   209,   213,   217,   219,   223,   225,   229,   233,   235,   237,
   239,   241,   243,   247,   249,   251,   253,   255,   259,   261,
   263,   265,   267,   269,   271,   273,   275,   277,   279,   281,
   283,   285,   287,   289,   291,   295,   297,   301,   303,   305,
   307,   309,   311,   313,   315,   317,   319,   323,   325,   329,
   331,   333,   335,   337,   339,   341
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","IF","ELSE",
"WHILE","FOR","DO","SWITCH","CASE","DEFAULT","BREAK","CONTINUE","RETURN","CONST",
"INT","FLOAT","CHAR","STRING","BOOL","VOID","TRUE","FALSE","PLUS","MINUS","MUL",
"DIV","MOD","INC","DEC","ASSIGN","ADD_ASSIGN","SUB_ASSIGN","MUL_ASSIGN","DIV_ASSIGN",
"MOD_ASSIGN","EQ","NEQ","LT","GT","LTE","GTE","AND","OR","NOT","BIT_AND","BIT_OR",
"BIT_XOR","COMMENT","ID","INT_CONST","FLOAT_CONST","STRING_CONST","CHAR_CONST",
"';'","'{'","'}'","'('","')'","','","':'","program","statement","@1","@2","@3",
"@4","@5","@6","do_loop","for_loop","for_loop_initialization","for_loop_condition",
"for_loop_increment","while_loop","function_definition","@7","function_declaration_prototype",
"function_parameters_optional","function_parameters","function_parameter","return_statement",
"function_call","function_arguments_optional","function_arguments","function_argument",
"if_statement","switch_statement","switch_program","case_statements","case_statement",
"default_statement","initialization","declaration","assignment","assign","type",
"evaluate_expression","math_or_value","condition","expression","literal", NULL
};
#endif

static const short yyr1[] = {     0,
    61,    61,    62,    62,    62,    63,    62,    64,    62,    65,
    62,    66,    62,    67,    62,    62,    62,    62,    62,    68,
    62,    69,    70,    71,    71,    71,    72,    72,    73,    73,
    73,    74,    76,    75,    77,    77,    78,    78,    79,    79,
    80,    81,    81,    81,    82,    82,    82,    83,    83,    84,
    84,    85,    86,    86,    87,    88,    88,    88,    89,    89,
    90,    91,    92,    92,    93,    93,    94,    95,    95,    95,
    95,    95,    95,    96,    96,    96,    96,    96,    97,    97,
    97,    97,    97,    97,    97,    97,    97,    97,    97,    97,
    97,    97,    97,    97,    97,    98,    98,    99,    99,    99,
    99,    99,    99,    99,    99,    99,    99,   100,   100,   101,
   101,   101,   101,   101,   101,   101
};

static const short yyr2[] = {     0,
     2,     0,     2,     2,     2,     0,     2,     0,     2,     0,
     3,     0,     2,     0,     2,     1,     2,     2,     2,     0,
     4,     8,    11,     4,     3,     0,     1,     0,     1,     1,
     0,     7,     0,     5,     5,     5,     1,     0,     3,     1,
     2,     2,     2,     1,     4,     6,     7,     1,     0,     3,
     1,     1,     7,    11,     7,     1,     2,     1,     2,     1,
     6,     5,     5,     4,     3,     2,     3,     1,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
     3,     3,     3,     3,     3,     3,     2,     2,     3,     1,
     1,     1,     1,     1,     1,     1,     1,     3,     3,     2,
     3,     3,     3,     3,     3,     3,     3,     1,     1,     1,
     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     2,
     6,    44,     0,    74,    75,    76,    77,    78,     0,     0,
     1,     0,     0,     0,     0,     0,     0,    16,    33,     0,
     0,     0,     0,     0,     0,    94,    95,     0,    93,    91,
    90,    97,    92,     0,    43,    96,   108,   109,    42,     0,
     0,    68,    69,    70,    71,    72,    73,    19,    49,     0,
     0,     7,     0,     9,     0,     0,     0,    13,     0,    15,
     2,     0,    18,    17,     4,     3,     5,    66,    93,   100,
    68,    96,   109,     0,     0,     0,     0,     0,     0,    87,
    88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     0,     0,    65,    38,     0,   115,   116,   110,   111,   112,
   114,   113,     0,    48,    51,    52,    67,     0,     0,     2,
    11,     0,    26,     6,     2,     0,    38,    89,   107,     0,
    82,    83,    84,    85,    86,    79,    80,    81,   101,   102,
   103,   104,   105,   106,    99,    98,     0,     0,    37,    40,
     0,    49,    45,     0,     0,     0,     6,     0,     0,     0,
     0,    21,     6,    93,    64,     0,     0,    63,    35,     0,
    41,     0,    50,     0,     0,     0,     0,     0,     0,    28,
    34,    49,    36,    39,    46,     2,     0,     0,     2,     0,
    25,     0,    27,     0,     6,     0,     0,     0,    56,    60,
    58,     0,     6,    24,    31,    47,    53,     0,     2,    55,
    59,    57,     0,    32,     0,    30,    29,     0,     2,     6,
    22,     0,     2,     6,     0,     2,     6,     0,    62,     6,
    54,    61,    23,     0,     0
};

static const short yydefgoto[] = {     1,
    11,    12,    13,    14,    15,    16,    17,    56,    60,   151,
   182,   205,    58,    18,    62,    19,   138,   139,   140,    20,
    21,   103,   104,   105,    52,    54,   188,   189,   190,   191,
    22,    23,    24,    50,    25,    36,    37,    38,    39,   106
};

static const short yypact[] = {-32768,
    11,   -12,   131,-32768,-32768,-32768,-32768,-32768,   -41,   227,
-32768,    32,    36,    44,    58,    61,    13,-32768,-32768,    15,
    22,    25,    26,    28,    37,-32768,-32768,   306,   382,-32768,
-32768,-32768,-32768,   306,-32768,   359,   383,-32768,   -30,    38,
    18,    39,-32768,-32768,-32768,-32768,-32768,-32768,   281,   306,
    33,-32768,    35,-32768,    45,    47,    60,-32768,    63,-32768,
-32768,    71,-32768,-32768,-32768,-32768,-32768,   -24,-32768,-32768,
-32768,   352,    69,   -30,    62,    62,    62,    62,    62,-32768,
-32768,    62,    62,    62,    21,    21,    21,    21,    21,    21,
   306,   306,    98,   131,    72,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,    81,    83,-32768,-32768,   -30,   306,    91,-32768,
-32768,   306,     7,    89,-32768,   317,   131,-32768,-32768,    62,
   135,   135,   -14,   -14,   -14,   187,   366,   319,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,   110,   306,    95,    97,-32768,
   105,   281,-32768,   281,   -22,    99,   117,    19,   118,   139,
   116,-32768,   169,   114,   -30,   120,   352,   -30,-32768,   131,
-32768,   121,-32768,   125,   126,   185,   136,   162,   148,   306,
-32768,   281,-32768,-32768,-32768,-32768,    49,   142,-32768,   150,
-32768,   147,   -30,   159,   189,   281,   163,   170,    49,-32768,
-32768,   306,   214,-32768,   -12,-32768,   231,   176,-32768,-32768,
-32768,-32768,    56,-32768,   179,-32768,   -30,   188,-32768,   280,
-32768,   191,-32768,   305,   201,-32768,   234,   202,-32768,   259,
-32768,-32768,-32768,   268,-32768
};

static const short yypgoto[] = {   -58,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   154,-32768,   122,-32768,
-32768,  -138,-32768,   157,-32768,-32768,-32768,-32768,   103,   115,
-32768,-32768,    -2,-32768,    -1,   -29,   340,   246,   -27,   119
};


#define	YYLAST		430


static const short yytable[] = {    35,
    70,    40,   114,   162,    72,   116,    74,    41,    26,    27,
   224,    91,    92,    80,    81,   -12,   -14,   -10,    -8,    91,
    92,   149,   107,     2,     3,     4,     5,     6,     7,     8,
     9,    28,   117,   184,    51,   164,    29,    30,    31,    32,
    33,    26,    27,    53,    34,   121,   122,   123,   124,   125,
    55,   147,   126,   127,   128,   150,   153,   186,   187,    10,
    91,    92,    57,   135,   136,   -20,    59,    61,    63,    69,
    30,    31,    32,    33,    94,    64,   167,   120,    65,    66,
   145,    67,    26,    27,   148,    68,    93,    95,   155,   108,
   157,   109,   141,   -12,   -14,   -10,    -8,    91,    92,   110,
   111,     2,     3,     4,     5,     6,     7,     8,     9,   158,
    69,    30,    31,   211,    33,   141,   112,   185,   120,   113,
   193,   -12,   -14,   -10,    -8,   115,   119,   137,   142,     2,
     3,     4,     5,     6,     7,     8,     9,    10,   143,   146,
   210,   144,   183,   -20,   152,     4,     5,     6,     7,     8,
   214,    91,   159,   161,   217,   160,   165,   220,   141,    77,
    78,    79,    80,    81,   203,    10,   168,   207,   169,   170,
   172,   -20,   166,   -12,   -14,   -10,    -8,   173,   175,   176,
   177,     2,     3,     4,     5,     6,     7,     8,     9,   178,
   179,   180,   206,   -12,   -14,   -10,    -8,   181,   192,   194,
   195,     2,     3,     4,     5,     6,     7,     8,     9,    75,
    76,    77,    78,    79,    80,    81,   196,    10,   -12,   -14,
   -10,    -8,   199,   -20,   171,   200,     2,     3,     4,     5,
     6,     7,     8,     9,   208,   209,   212,    10,   -12,   -14,
   -10,    -8,   213,   -20,   197,   216,     2,     3,     4,     5,
     6,     7,     8,     9,   219,   222,    42,    43,    44,    45,
    46,    47,    10,   -12,   -14,   -10,    -8,   225,   -20,   204,
   156,     2,     3,     4,     5,     6,     7,     8,     9,    73,
    48,   174,    10,    49,   -12,   -14,   -10,    -8,   -20,   221,
   215,   201,     2,     3,     4,     5,     6,     7,     8,     9,
   163,    96,    97,   202,   198,     0,     0,    10,     0,   -12,
   -14,   -10,    -8,   -20,   223,   218,     0,     2,     3,     4,
     5,     6,     7,     8,     9,     0,    26,    27,    10,    98,
    99,   100,   101,   102,   -20,     0,     0,    26,    27,     0,
     0,    75,    76,    77,    78,    79,    80,    81,     0,    28,
     0,     0,     0,    10,    69,    30,    31,    32,    33,   -20,
    28,     0,    34,    82,    83,   154,    30,    31,    32,    33,
     0,     0,     0,    34,    75,    76,    77,    78,    79,    80,
    81,    75,    76,    77,    78,    79,    80,    81,    75,    76,
    77,    78,    79,    80,    81,     0,    82,    83,    84,     0,
     0,     0,     0,    82,    83,    84,     0,     0,     0,   118,
    82,    71,    43,    44,    45,    46,    47,     0,    85,    86,
    87,    88,    89,    90,   129,   130,   131,   132,   133,   134
};

static const short yycheck[] = {     2,
    28,     3,    61,   142,    34,    30,    34,    49,    21,    22,
     0,    42,    43,    28,    29,     5,     6,     7,     8,    42,
    43,    15,    50,    13,    14,    15,    16,    17,    18,    19,
    20,    44,    57,   172,     3,    58,    49,    50,    51,    52,
    53,    21,    22,     8,    57,    75,    76,    77,    78,    79,
     7,   110,    82,    83,    84,    49,   115,     9,    10,    49,
    42,    43,     5,    91,    92,    55,     6,    55,    54,    49,
    50,    51,    52,    53,    57,    54,    58,    57,    54,    54,
   108,    54,    21,    22,   112,    49,    49,    49,   116,    57,
   120,    57,    94,     5,     6,     7,     8,    42,    43,    55,
    54,    13,    14,    15,    16,    17,    18,    19,    20,   137,
    49,    50,    51,    58,    53,   117,    57,   176,    57,    57,
   179,     5,     6,     7,     8,    55,    58,    30,    57,    13,
    14,    15,    16,    17,    18,    19,    20,    49,    58,    49,
   199,    59,   170,    55,    56,    15,    16,    17,    18,    19,
   209,    42,    58,    49,   213,    59,    58,   216,   160,    25,
    26,    27,    28,    29,   192,    49,    49,   195,    30,    54,
    57,    55,    56,     5,     6,     7,     8,    58,    58,    55,
    55,    13,    14,    15,    16,    17,    18,    19,    20,     5,
    55,    30,   195,     5,     6,     7,     8,    50,    57,    50,
    54,    13,    14,    15,    16,    17,    18,    19,    20,    23,
    24,    25,    26,    27,    28,    29,    58,    49,     5,     6,
     7,     8,    60,    55,    56,    56,    13,    14,    15,    16,
    17,    18,    19,    20,     4,    60,    58,    49,     5,     6,
     7,     8,    55,    55,    56,    55,    13,    14,    15,    16,
    17,    18,    19,    20,    54,    54,    30,    31,    32,    33,
    34,    35,    49,     5,     6,     7,     8,     0,    55,    56,
   117,    13,    14,    15,    16,    17,    18,    19,    20,    34,
    54,   160,    49,    57,     5,     6,     7,     8,    55,    56,
    11,   189,    13,    14,    15,    16,    17,    18,    19,    20,
   144,    21,    22,   189,   186,    -1,    -1,    49,    -1,     5,
     6,     7,     8,    55,    56,    11,    -1,    13,    14,    15,
    16,    17,    18,    19,    20,    -1,    21,    22,    49,    49,
    50,    51,    52,    53,    55,    -1,    -1,    21,    22,    -1,
    -1,    23,    24,    25,    26,    27,    28,    29,    -1,    44,
    -1,    -1,    -1,    49,    49,    50,    51,    52,    53,    55,
    44,    -1,    57,    45,    46,    49,    50,    51,    52,    53,
    -1,    -1,    -1,    57,    23,    24,    25,    26,    27,    28,
    29,    23,    24,    25,    26,    27,    28,    29,    23,    24,
    25,    26,    27,    28,    29,    -1,    45,    46,    47,    -1,
    -1,    -1,    -1,    45,    46,    47,    -1,    -1,    -1,    58,
    45,    30,    31,    32,    33,    34,    35,    -1,    36,    37,
    38,    39,    40,    41,    85,    86,    87,    88,    89,    90
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

case 1:
#line 73 "parser.y"
{;;
    break;}
case 2:
#line 74 "parser.y"
{;;
    break;}
case 3:
#line 78 "parser.y"
{ printf("Declaration\n"); ;
    break;}
case 4:
#line 79 "parser.y"
{ printf("Initialization\n"); ;
    break;}
case 5:
#line 80 "parser.y"
{ printf("Assignment\n"); ;
    break;}
case 6:
#line 81 "parser.y"
{ printf("If statement start\n"); ;
    break;}
case 7:
#line 81 "parser.y"
{ printf("If statement end\n"); ;
    break;}
case 8:
#line 82 "parser.y"
{ printf("Switch case start\n"); ;
    break;}
case 9:
#line 82 "parser.y"
{ printf("Switch case end\n"); ;
    break;}
case 10:
#line 83 "parser.y"
{ printf("Do while loop start\n"); ;
    break;}
case 11:
#line 83 "parser.y"
{ printf("Do while loop end\n"); ;
    break;}
case 12:
#line 84 "parser.y"
{ printf("While loop start\n"); ;
    break;}
case 13:
#line 84 "parser.y"
{ printf("While loop end\n"); ;
    break;}
case 14:
#line 85 "parser.y"
{ printf("For loop start\n"); ;
    break;}
case 15:
#line 85 "parser.y"
{ printf("For loop end\n"); ;
    break;}
case 16:
#line 86 "parser.y"
{ printf("Function_definition\n"); ;
    break;}
case 17:
#line 87 "parser.y"
{ printf("Function_call\n"); ;
    break;}
case 18:
#line 88 "parser.y"
{ if (!(inFunction)) yyerror("Return statement outside function"); ;
    break;}
case 19:
#line 89 "parser.y"
{ printf("ID\n"); ;
    break;}
case 20:
#line 90 "parser.y"
{ printf("Scope start\n"); ;
    break;}
case 21:
#line 90 "parser.y"
{ printf("Scope end\n"); ;
    break;}
case 22:
#line 94 "parser.y"
{;;
    break;}
case 23:
#line 98 "parser.y"
{;;
    break;}
case 24:
#line 102 "parser.y"
{;;
    break;}
case 25:
#line 104 "parser.y"
{;;
    break;}
case 26:
#line 106 "parser.y"
{;;
    break;}
case 27:
#line 110 "parser.y"
{;;
    break;}
case 28:
#line 112 "parser.y"
{;;
    break;}
case 29:
#line 116 "parser.y"
{;;
    break;}
case 30:
#line 118 "parser.y"
{;;
    break;}
case 31:
#line 120 "parser.y"
{;;
    break;}
case 32:
#line 124 "parser.y"
{;;
    break;}
case 33:
#line 128 "parser.y"
{ inFunction = 1; ;
    break;}
case 34:
#line 128 "parser.y"
{ inFunction = 0; ;
    break;}
case 35:
#line 132 "parser.y"
{;;
    break;}
case 36:
#line 134 "parser.y"
{;;
    break;}
case 37:
#line 138 "parser.y"
{;;
    break;}
case 38:
#line 140 "parser.y"
{;;
    break;}
case 39:
#line 144 "parser.y"
{;;
    break;}
case 40:
#line 146 "parser.y"
{;;
    break;}
case 41:
#line 150 "parser.y"
{;;
    break;}
case 42:
#line 154 "parser.y"
{;;
    break;}
case 43:
#line 156 "parser.y"
{;;
    break;}
case 45:
#line 162 "parser.y"
{;;
    break;}
case 46:
#line 164 "parser.y"
{;;
    break;}
case 47:
#line 166 "parser.y"
{;;
    break;}
case 48:
#line 170 "parser.y"
{;;
    break;}
case 49:
#line 172 "parser.y"
{;;
    break;}
case 50:
#line 176 "parser.y"
{;;
    break;}
case 52:
#line 182 "parser.y"
{;;
    break;}
case 53:
#line 186 "parser.y"
{;;
    break;}
case 54:
#line 188 "parser.y"
{;;
    break;}
case 63:
#line 218 "parser.y"
{;;
    break;}
case 64:
#line 220 "parser.y"
{;;
    break;}
case 65:
#line 224 "parser.y"
{;;
    break;}
case 66:
#line 226 "parser.y"
{;;
    break;}
case 67:
#line 230 "parser.y"
{;;
    break;}
case 68:
#line 234 "parser.y"
{ printf("ASSIGN\n") ;
    break;}
case 69:
#line 236 "parser.y"
{ printf("ADD_ASSIGN\n") ;
    break;}
case 70:
#line 238 "parser.y"
{ printf("SUB_ASSIGN\n") ;
    break;}
case 71:
#line 240 "parser.y"
{ printf("MUL_ASSIGN\n") ;
    break;}
case 72:
#line 242 "parser.y"
{ printf("DIV_ASSIGN\n") ;
    break;}
case 73:
#line 244 "parser.y"
{ printf("MOD_ASSIGN\n") ;
    break;}
case 74:
#line 248 "parser.y"
{ printf("INT\n") ;
    break;}
case 75:
#line 250 "parser.y"
{ printf("FLOAT\n") ;
    break;}
case 76:
#line 252 "parser.y"
{ printf("CHAR\n") ;
    break;}
case 77:
#line 254 "parser.y"
{ printf("STRING\n") ;
    break;}
case 78:
#line 256 "parser.y"
{ printf("BOOL\n") ;
    break;}
case 79:
#line 260 "parser.y"
{ printf("BIT_AND\n"); ;
    break;}
case 80:
#line 262 "parser.y"
{ printf("BIT_OR\n"); ;
    break;}
case 81:
#line 264 "parser.y"
{ printf("BIT_XOR\n"); ;
    break;}
case 82:
#line 266 "parser.y"
{ printf("PLUS\n"); ;
    break;}
case 83:
#line 268 "parser.y"
{ printf("MINUS\n"); ;
    break;}
case 84:
#line 270 "parser.y"
{ printf("MUL\n"); ;
    break;}
case 85:
#line 272 "parser.y"
{ printf("DIV\n") ;
    break;}
case 86:
#line 274 "parser.y"
{ printf("MOD\n") ;
    break;}
case 87:
#line 276 "parser.y"
{ printf("INC") ;
    break;}
case 88:
#line 278 "parser.y"
{ printf("DEC\n") ;
    break;}
case 89:
#line 280 "parser.y"
{;;
    break;}
case 90:
#line 282 "parser.y"
{;;
    break;}
case 91:
#line 284 "parser.y"
{;;
    break;}
case 92:
#line 286 "parser.y"
{;;
    break;}
case 93:
#line 288 "parser.y"
{;;
    break;}
case 94:
#line 290 "parser.y"
{;;
    break;}
case 95:
#line 292 "parser.y"
{;;
    break;}
case 96:
#line 296 "parser.y"
{;;
    break;}
case 97:
#line 298 "parser.y"
{;;
    break;}
case 98:
#line 302 "parser.y"
{ printf("OR\n"); ;
    break;}
case 99:
#line 304 "parser.y"
{ printf("AND\n"); ;
    break;}
case 100:
#line 306 "parser.y"
{ printf("NOT\n"); ;
    break;}
case 101:
#line 308 "parser.y"
{ printf("EQ\n"); ;
    break;}
case 102:
#line 310 "parser.y"
{ printf("NEQ\n"); ;
    break;}
case 103:
#line 312 "parser.y"
{ printf("LT\n"); ;
    break;}
case 104:
#line 314 "parser.y"
{ printf("GT\n"); ;
    break;}
case 105:
#line 316 "parser.y"
{ printf("LTE\n"); ;
    break;}
case 106:
#line 318 "parser.y"
{ printf("GTE\n"); ;
    break;}
case 107:
#line 320 "parser.y"
{;;
    break;}
case 108:
#line 324 "parser.y"
{;;
    break;}
case 109:
#line 326 "parser.y"
{;;
    break;}
case 110:
#line 330 "parser.y"
{;;
    break;}
case 111:
#line 332 "parser.y"
{;;
    break;}
case 112:
#line 334 "parser.y"
{;;
    break;}
case 113:
#line 336 "parser.y"
{;;
    break;}
case 114:
#line 338 "parser.y"
{;;
    break;}
case 115:
#line 340 "parser.y"
{;;
    break;}
case 116:
#line 342 "parser.y"
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
#line 344 "parser.y"


/* Error handling */
void yyerror(char *msg){
  fprintf(stderr, "%s\n", msg);
  exit(1);
}


int main(){
    yyparse();
    return 0;
}
