
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
#define	FUNC	303
#define	ID	304
#define	INT_CONST	305
#define	FLOAT_CONST	306
#define	STRING_CONST	307
#define	CHAR_CONST	308

#line 1 "parser.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void yyerror(char* s);
int yylex();

_Bool inFunction = 0;

#line 12 "parser.y"
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



#define	YYFINAL		226
#define	YYFLAG		-32768
#define	YYNTBASE	62

#define YYTRANSLATE(x) ((unsigned)(x) <= 308 ? yytranslate[x] : 104)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    58,
    59,     2,     2,    60,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,    61,    55,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,    56,     2,    57,     2,     2,     2,     2,     2,
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
    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     3,     4,     7,    10,    13,    16,    17,    20,    21,
    24,    25,    29,    30,    33,    34,    37,    39,    42,    45,
    48,    49,    54,    63,    75,    80,    84,    85,    87,    88,
    90,    92,    93,   101,   102,   108,   114,   120,   122,   123,
   127,   129,   132,   135,   138,   140,   145,   150,   155,   157,
   158,   162,   164,   166,   174,   186,   194,   196,   199,   201,
   204,   206,   213,   219,   225,   230,   234,   237,   241,   243,
   245,   247,   249,   251,   253,   255,   257,   259,   261,   263,
   267,   271,   275,   279,   283,   287,   291,   295,   298,   301,
   305,   307,   309,   311,   313,   315,   317,   319,   321,   325,
   329,   332,   336,   340,   344,   348,   352,   356,   360,   363,
   366,   368,   370,   372,   374,   376,   378,   380,   382
};

static const short yyrhs[] = {    62,
    63,     0,     0,    94,    55,     0,    93,    55,     0,    95,
    55,     0,   101,    55,     0,     0,    64,    87,     0,     0,
    65,    88,     0,     0,    66,    70,    55,     0,     0,    67,
    75,     0,     0,    68,    71,     0,    76,     0,    83,    55,
     0,    82,    55,     0,    50,    55,     0,     0,    69,    56,
    62,    57,     0,     7,    56,    62,    57,     5,    58,   102,
    59,     0,     6,    58,    72,    55,    73,    55,    74,    59,
    56,    62,    57,     0,    15,    50,    30,    51,     0,    50,
    30,    51,     0,     0,   102,     0,     0,   102,     0,    95,
     0,     0,     5,    58,   102,    59,    56,    62,    57,     0,
     0,    78,    77,    56,    62,    57,     0,    20,    50,    58,
    79,    59,     0,    97,    50,    58,    79,    59,     0,    80,
     0,     0,    80,    60,    81,     0,    81,     0,    97,    50,
     0,    13,   102,     0,    13,    95,     0,    13,     0,    50,
    58,    84,    59,     0,    95,    58,    84,    59,     0,    93,
    58,    84,    59,     0,    85,     0,     0,    85,    60,    86,
     0,    86,     0,   103,     0,     3,    58,   102,    59,    56,
    62,    57,     0,     3,    58,   102,    59,    56,    62,    57,
     4,    56,    62,    57,     0,     8,    58,    50,    59,    56,
    89,    57,     0,    90,     0,    90,    92,     0,    92,     0,
    90,    91,     0,    91,     0,     9,   103,    61,    62,    11,
    55,     0,    10,    61,    62,    11,    55,     0,    14,    97,
    50,    30,   102,     0,    97,    50,    30,   102,     0,    14,
    97,    50,     0,    97,    50,     0,    50,    96,   102,     0,
    30,     0,    31,     0,    32,     0,    33,     0,    34,     0,
    35,     0,    15,     0,    16,     0,    17,     0,    18,     0,
    19,     0,    98,    45,    98,     0,    98,    46,    98,     0,
    98,    47,    98,     0,    98,    23,    98,     0,    98,    24,
    98,     0,    98,    25,    98,     0,    98,    26,    98,     0,
    98,    27,    98,     0,    98,    28,     0,    98,    29,     0,
    58,    98,    59,     0,    52,     0,    51,     0,    54,     0,
    50,     0,    21,     0,    22,     0,    98,     0,    53,     0,
   102,    43,   102,     0,   102,    42,   102,     0,    44,   102,
     0,    99,    36,    99,     0,    99,    37,    99,     0,    99,
    38,    99,     0,    99,    39,    99,     0,    99,    40,    99,
     0,    99,    41,    99,     0,    58,   100,    59,     0,    50,
    28,     0,    50,    29,     0,    99,     0,   100,     0,    50,
     0,    51,     0,    52,     0,    54,     0,    53,     0,    21,
     0,    22,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    74,    76,    79,    81,    83,    85,    87,    88,    89,    90,
    91,    92,    93,    94,    95,    96,    97,    99,   101,   103,
   105,   106,   109,   113,   117,   119,   121,   125,   127,   131,
   133,   135,   139,   143,   144,   147,   149,   153,   155,   159,
   161,   165,   169,   171,   173,   177,   179,   181,   185,   187,
   191,   193,   197,   201,   203,   207,   211,   213,   215,   219,
   221,   225,   229,   233,   235,   239,   241,   245,   249,   251,
   253,   255,   257,   259,   263,   265,   267,   269,   271,   275,
   277,   279,   281,   283,   285,   287,   289,   291,   293,   295,
   297,   299,   301,   303,   305,   307,   311,   313,   317,   319,
   321,   323,   325,   327,   329,   331,   333,   335,   339,   341,
   345,   347,   352,   354,   356,   358,   360,   362,   364
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","IF","ELSE",
"WHILE","FOR","DO","SWITCH","CASE","DEFAULT","BREAK","CONTINUE","RETURN","CONST",
"INT","FLOAT","CHAR","STRING","BOOL","VOID","TRUE","FALSE","PLUS","MINUS","MUL",
"DIV","MOD","INC","DEC","ASSIGN","ADD_ASSIGN","SUB_ASSIGN","MUL_ASSIGN","DIV_ASSIGN",
"MOD_ASSIGN","EQ","NEQ","LT","GT","LTE","GTE","AND","OR","NOT","BIT_AND","BIT_OR",
"BIT_XOR","COMMENT","FUNC","ID","INT_CONST","FLOAT_CONST","STRING_CONST","CHAR_CONST",
"';'","'{'","'}'","'('","')'","','","':'","program","statement","@1","@2","@3",
"@4","@5","@6","do_loop","for_loop","for_loop_initialization","for_loop_condition",
"for_loop_increment","while_loop","function_definition","@7","function_declaration_prototype",
"function_parameters_optional","function_parameters","function_parameter","return_statement",
"function_call","function_arguments_optional","function_arguments","function_argument",
"if_statement","switch_statement","switch_program","case_statements","case_statement",
"default_statement","initialization","declaration","assignment","assign","type",
"evaluate_expression","math_or_value","condition","unary_expression","expression",
"literal", NULL
};
#endif

static const short yyr1[] = {     0,
    62,    62,    63,    63,    63,    63,    64,    63,    65,    63,
    66,    63,    67,    63,    68,    63,    63,    63,    63,    63,
    69,    63,    70,    71,    72,    72,    72,    73,    73,    74,
    74,    74,    75,    77,    76,    78,    78,    79,    79,    80,
    80,    81,    82,    82,    82,    83,    83,    83,    84,    84,
    85,    85,    86,    87,    87,    88,    89,    89,    89,    90,
    90,    91,    92,    93,    93,    94,    94,    95,    96,    96,
    96,    96,    96,    96,    97,    97,    97,    97,    97,    98,
    98,    98,    98,    98,    98,    98,    98,    98,    98,    98,
    98,    98,    98,    98,    98,    98,    99,    99,   100,   100,
   100,   100,   100,   100,   100,   100,   100,   100,   101,   101,
   102,   102,   103,   103,   103,   103,   103,   103,   103
};

static const short yyr2[] = {     0,
     2,     0,     2,     2,     2,     2,     0,     2,     0,     2,
     0,     3,     0,     2,     0,     2,     1,     2,     2,     2,
     0,     4,     8,    11,     4,     3,     0,     1,     0,     1,
     1,     0,     7,     0,     5,     5,     5,     1,     0,     3,
     1,     2,     2,     2,     1,     4,     4,     4,     1,     0,
     3,     1,     1,     7,    11,     7,     1,     2,     1,     2,
     1,     6,     5,     5,     4,     3,     2,     3,     1,     1,
     1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
     3,     3,     3,     3,     3,     3,     3,     2,     2,     3,
     1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
     2,     3,     3,     3,     3,     3,     3,     3,     2,     2,
     1,     1,     1,     1,     1,     1,     1,     1,     1
};

static const short yydefact[] = {     2,
     7,    45,     0,    75,    76,    77,    78,    79,     0,     0,
     1,     0,     0,     0,     0,     0,     0,    17,    34,     0,
     0,     0,     0,     0,     0,     0,    95,    96,     0,    94,
    92,    91,    98,    93,     0,    44,    97,   111,   112,    43,
     0,     0,   109,   110,    69,    70,    71,    72,    73,    74,
    20,    50,     0,     0,     8,     0,    10,     0,     0,     0,
    14,     0,    16,     2,     0,    19,    18,     4,    50,     3,
     5,    50,    67,     6,    94,   101,    97,   112,     0,     0,
     0,     0,     0,     0,    88,    89,     0,     0,     0,     0,
     0,     0,     0,     0,     0,     0,     0,    66,    39,   118,
   119,   113,   114,   115,   117,   116,     0,    49,    52,    53,
    68,     0,     0,     2,    12,     0,    27,     7,     2,     0,
     0,     0,    39,    90,   108,     0,    83,    84,    85,    86,
    87,    80,    81,    82,   102,   103,   104,   105,   106,   107,
   100,    99,     0,     0,    38,    41,     0,    46,     0,     0,
     0,     7,     0,     0,     0,     0,    22,     7,    48,    47,
    65,     0,     0,    64,    36,     0,    42,    51,     0,     0,
     0,     0,     0,     0,    29,    35,    37,    40,     2,     0,
     0,     2,     0,    26,     0,    28,     7,     0,     0,     0,
    57,    61,    59,     0,     7,    25,    32,    54,     0,     2,
    56,    60,    58,     0,    33,     0,    31,    30,     0,     2,
     7,    23,     0,     2,     7,     0,     2,     7,     0,    63,
     7,    55,    62,    24,     0,     0
};

static const short yydefgoto[] = {     1,
    11,    12,    13,    14,    15,    16,    17,    59,    63,   156,
   185,   206,    61,    18,    65,    19,   144,   145,   146,    20,
    21,   107,   108,   109,    55,    57,   190,   191,   192,   193,
    22,    23,    24,    53,    25,    37,    38,    39,    26,    40,
   110
};

static const short yypact[] = {-32768,
    23,    39,   241,-32768,-32768,-32768,-32768,-32768,   -23,   354,
-32768,    17,    41,    28,    46,    51,     3,-32768,-32768,     7,
    25,   -47,    26,   -41,    32,    30,-32768,-32768,   323,   220,
-32768,-32768,-32768,-32768,   323,-32768,   324,   260,-32768,   -30,
    36,    20,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,   107,   323,    29,-32768,    37,-32768,    40,    44,    42,
-32768,    43,-32768,-32768,    50,-32768,-32768,-32768,   107,-32768,
-32768,   107,   -26,-32768,-32768,-32768,   117,    49,   -30,    53,
    53,    53,    53,    53,-32768,-32768,    53,    53,    53,    -6,
    -6,    -6,    -6,    -6,    -6,   323,   323,    72,   241,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,    54,    52,-32768,-32768,
   -30,   323,    60,-32768,-32768,   323,     4,   118,-32768,    55,
    57,   323,   241,-32768,-32768,    53,   277,   277,    27,    27,
    27,   181,   375,   368,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,    75,   323,    61,    59,-32768,    77,-32768,   107,   -37,
    71,   165,   -33,    98,   120,    96,-32768,   183,-32768,-32768,
   -30,    93,   117,   -30,-32768,   241,-32768,-32768,    99,   111,
   149,   121,   156,   136,   323,-32768,-32768,-32768,-32768,    67,
   134,-32768,   142,-32768,   139,   -30,   211,   107,   150,   155,
    67,-32768,-32768,   323,   229,-32768,    39,   209,   153,-32768,
-32768,-32768,-32768,    -9,-32768,   161,-32768,   -30,   167,-32768,
   304,-32768,   176,-32768,   322,   186,-32768,   257,   214,-32768,
   275,-32768,-32768,-32768,   238,-32768
};

static const short yypgoto[] = {   -61,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,   143,-32768,   112,-32768,
-32768,   -48,-32768,   135,-32768,-32768,-32768,-32768,   125,   152,
-32768,-32768,    -2,-32768,    -1,   -17,   271,   252,-32768,   -28,
   138
};


#define	YYLAST		420


static const short yytable[] = {    36,
    76,    41,   118,   122,    96,    97,    79,    68,    96,    97,
    69,    96,    97,    71,    27,    28,    72,    77,   154,    54,
   120,   169,   225,   121,   111,   172,    42,   -13,   -15,   -11,
    -9,   123,    96,    97,    58,     2,     3,     4,     5,     6,
     7,     8,     9,    75,    31,    32,    33,    34,    56,   212,
    60,   126,   152,   155,    85,    86,    62,   158,    64,    27,
    28,    66,   127,   128,   129,   130,   131,   141,   142,   132,
   133,   134,    10,    27,    28,   188,   189,    99,   -21,    67,
    70,    73,    29,   150,    74,    98,   112,   153,    30,    31,
    32,    33,    34,   161,   113,   114,    35,   147,   115,   116,
   117,   143,    75,    31,    32,   119,    34,   125,   163,   151,
   126,   149,   148,   159,   164,   160,    96,   187,   166,   165,
   195,   147,   -13,   -15,   -11,    -9,   167,   100,   101,   170,
     2,     3,     4,     5,     6,     7,     8,     9,   211,    80,
    81,    82,    83,    84,    85,    86,   186,   173,   215,   174,
   175,   177,   218,   181,   179,   221,   102,   103,   104,   105,
   106,    87,    88,    89,   147,   204,   180,    10,   208,   -13,
   -15,   -11,    -9,   -21,   157,   124,   182,     2,     3,     4,
     5,     6,     7,     8,     9,   183,   184,   -13,   -15,   -11,
    -9,   194,   196,   197,   207,     2,     3,     4,     5,     6,
     7,     8,     9,    80,    81,    82,    83,    84,    85,    86,
   200,   201,   209,   210,    10,   -13,   -15,   -11,    -9,   213,
   -21,   171,   214,     2,     3,     4,     5,     6,     7,     8,
     9,   217,    10,   -13,   -15,   -11,    -9,   226,   -21,   176,
   220,     2,     3,     4,     5,     6,     7,     8,     9,    45,
    46,    47,    48,    49,    50,     4,     5,     6,     7,     8,
    10,   -13,   -15,   -11,    -9,   162,   -21,   198,   223,     2,
     3,     4,     5,     6,     7,     8,     9,   178,    10,   -13,
   -15,   -11,    -9,   168,   -21,   205,    78,     2,     3,     4,
     5,     6,     7,     8,     9,    90,    91,    92,    93,    94,
    95,    82,    83,    84,    85,    86,    10,     0,   -13,   -15,
   -11,    -9,   -21,   222,   216,   202,     2,     3,     4,     5,
     6,     7,     8,     9,    10,   199,   -13,   -15,   -11,    -9,
   -21,   224,   219,     0,     2,     3,     4,     5,     6,     7,
     8,     9,   203,    27,    28,     0,    80,    81,    82,    83,
    84,    85,    86,    10,     0,     0,     0,     0,     0,   -21,
   135,   136,   137,   138,   139,   140,    29,     0,    87,    88,
    89,    10,    75,    31,    32,    33,    34,   -21,     0,     0,
    35,    43,    44,    45,    46,    47,    48,    49,    50,     0,
    80,    81,    82,    83,    84,    85,    86,    80,    81,    82,
    83,    84,    85,    86,     0,     0,     0,     0,    51,     0,
     0,    52,    87,    88,     0,     0,     0,     0,     0,    87
};

static const short yycheck[] = {     2,
    29,     3,    64,    30,    42,    43,    35,    55,    42,    43,
    58,    42,    43,    55,    21,    22,    58,    35,    15,     3,
    69,    59,     0,    72,    53,    59,    50,     5,     6,     7,
     8,    58,    42,    43,     7,    13,    14,    15,    16,    17,
    18,    19,    20,    50,    51,    52,    53,    54,     8,    59,
     5,    58,   114,    50,    28,    29,     6,   119,    56,    21,
    22,    55,    80,    81,    82,    83,    84,    96,    97,    87,
    88,    89,    50,    21,    22,     9,    10,    58,    56,    55,
    55,    50,    44,   112,    55,    50,    58,   116,    50,    51,
    52,    53,    54,   122,    58,    56,    58,    99,    55,    58,
    58,    30,    50,    51,    52,    56,    54,    59,   126,    50,
    58,    60,    59,    59,   143,    59,    42,   179,    60,    59,
   182,   123,     5,     6,     7,     8,    50,    21,    22,    59,
    13,    14,    15,    16,    17,    18,    19,    20,   200,    23,
    24,    25,    26,    27,    28,    29,   175,    50,   210,    30,
    55,    59,   214,     5,    56,   217,    50,    51,    52,    53,
    54,    45,    46,    47,   166,   194,    56,    50,   197,     5,
     6,     7,     8,    56,    57,    59,    56,    13,    14,    15,
    16,    17,    18,    19,    20,    30,    51,     5,     6,     7,
     8,    58,    51,    55,   197,    13,    14,    15,    16,    17,
    18,    19,    20,    23,    24,    25,    26,    27,    28,    29,
    61,    57,     4,    61,    50,     5,     6,     7,     8,    59,
    56,    57,    56,    13,    14,    15,    16,    17,    18,    19,
    20,    56,    50,     5,     6,     7,     8,     0,    56,    57,
    55,    13,    14,    15,    16,    17,    18,    19,    20,    30,
    31,    32,    33,    34,    35,    15,    16,    17,    18,    19,
    50,     5,     6,     7,     8,   123,    56,    57,    55,    13,
    14,    15,    16,    17,    18,    19,    20,   166,    50,     5,
     6,     7,     8,   149,    56,    57,    35,    13,    14,    15,
    16,    17,    18,    19,    20,    36,    37,    38,    39,    40,
    41,    25,    26,    27,    28,    29,    50,    -1,     5,     6,
     7,     8,    56,    57,    11,   191,    13,    14,    15,    16,
    17,    18,    19,    20,    50,   188,     5,     6,     7,     8,
    56,    57,    11,    -1,    13,    14,    15,    16,    17,    18,
    19,    20,   191,    21,    22,    -1,    23,    24,    25,    26,
    27,    28,    29,    50,    -1,    -1,    -1,    -1,    -1,    56,
    90,    91,    92,    93,    94,    95,    44,    -1,    45,    46,
    47,    50,    50,    51,    52,    53,    54,    56,    -1,    -1,
    58,    28,    29,    30,    31,    32,    33,    34,    35,    -1,
    23,    24,    25,    26,    27,    28,    29,    23,    24,    25,
    26,    27,    28,    29,    -1,    -1,    -1,    -1,    55,    -1,
    -1,    58,    45,    46,    -1,    -1,    -1,    -1,    -1,    45
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
#line 75 "parser.y"
{;;
    break;}
case 2:
#line 76 "parser.y"
{;;
    break;}
case 3:
#line 80 "parser.y"
{ printf("Declaration\n"); ;
    break;}
case 4:
#line 82 "parser.y"
{ printf("Initialization\n"); ;
    break;}
case 5:
#line 84 "parser.y"
{ printf("Assignment\n"); ;
    break;}
case 6:
#line 86 "parser.y"
{ printf("Unary Expression\n"); ;
    break;}
case 7:
#line 88 "parser.y"
{ printf("If statement start\n"); ;
    break;}
case 8:
#line 88 "parser.y"
{ printf("If statement end\n"); ;
    break;}
case 9:
#line 90 "parser.y"
{ printf("Switch case start\n"); ;
    break;}
case 10:
#line 90 "parser.y"
{ printf("Switch case end\n"); ;
    break;}
case 11:
#line 92 "parser.y"
{ printf("Do while loop start\n"); ;
    break;}
case 12:
#line 92 "parser.y"
{ printf("Do while loop end\n"); ;
    break;}
case 13:
#line 94 "parser.y"
{ printf("While loop start\n"); ;
    break;}
case 14:
#line 94 "parser.y"
{ printf("While loop end\n"); ;
    break;}
case 15:
#line 96 "parser.y"
{ printf("For loop start\n"); ;
    break;}
case 16:
#line 96 "parser.y"
{ printf("For loop end\n"); ;
    break;}
case 17:
#line 98 "parser.y"
{ printf("Function_definition\n"); ;
    break;}
case 18:
#line 100 "parser.y"
{ printf("Function_call\n"); ;
    break;}
case 19:
#line 102 "parser.y"
{ if (!(inFunction)) yyerror("Return statement outside function"); ;
    break;}
case 20:
#line 104 "parser.y"
{ printf("ID\n"); ;
    break;}
case 21:
#line 106 "parser.y"
{ printf("Scope start\n"); ;
    break;}
case 22:
#line 106 "parser.y"
{ printf("Scope end\n"); ;
    break;}
case 23:
#line 110 "parser.y"
{;;
    break;}
case 24:
#line 114 "parser.y"
{;;
    break;}
case 25:
#line 118 "parser.y"
{;;
    break;}
case 26:
#line 120 "parser.y"
{;;
    break;}
case 27:
#line 122 "parser.y"
{;;
    break;}
case 28:
#line 126 "parser.y"
{;;
    break;}
case 29:
#line 128 "parser.y"
{;;
    break;}
case 30:
#line 132 "parser.y"
{;;
    break;}
case 31:
#line 134 "parser.y"
{;;
    break;}
case 32:
#line 136 "parser.y"
{;;
    break;}
case 33:
#line 140 "parser.y"
{;;
    break;}
case 34:
#line 144 "parser.y"
{ inFunction = 1; ;
    break;}
case 35:
#line 144 "parser.y"
{ inFunction = 0; ;
    break;}
case 36:
#line 148 "parser.y"
{;;
    break;}
case 37:
#line 150 "parser.y"
{;;
    break;}
case 38:
#line 154 "parser.y"
{;;
    break;}
case 39:
#line 156 "parser.y"
{;;
    break;}
case 40:
#line 160 "parser.y"
{;;
    break;}
case 41:
#line 162 "parser.y"
{;;
    break;}
case 42:
#line 166 "parser.y"
{;;
    break;}
case 43:
#line 170 "parser.y"
{;;
    break;}
case 44:
#line 172 "parser.y"
{;;
    break;}
case 46:
#line 178 "parser.y"
{;;
    break;}
case 47:
#line 180 "parser.y"
{;;
    break;}
case 48:
#line 182 "parser.y"
{;;
    break;}
case 49:
#line 186 "parser.y"
{;;
    break;}
case 50:
#line 188 "parser.y"
{;;
    break;}
case 51:
#line 192 "parser.y"
{;;
    break;}
case 52:
#line 194 "parser.y"
{;;
    break;}
case 53:
#line 198 "parser.y"
{;;
    break;}
case 54:
#line 202 "parser.y"
{;;
    break;}
case 55:
#line 204 "parser.y"
{;;
    break;}
case 64:
#line 234 "parser.y"
{;;
    break;}
case 65:
#line 236 "parser.y"
{;;
    break;}
case 66:
#line 240 "parser.y"
{;;
    break;}
case 67:
#line 242 "parser.y"
{;;
    break;}
case 68:
#line 246 "parser.y"
{;;
    break;}
case 69:
#line 250 "parser.y"
{ printf("ASSIGN\n"); ;
    break;}
case 70:
#line 252 "parser.y"
{ printf("ADD_ASSIGN\n"); ;
    break;}
case 71:
#line 254 "parser.y"
{ printf("SUB_ASSIGN\n"); ;
    break;}
case 72:
#line 256 "parser.y"
{ printf("MUL_ASSIGN\n"); ;
    break;}
case 73:
#line 258 "parser.y"
{ printf("DIV_ASSIGN\n"); ;
    break;}
case 74:
#line 260 "parser.y"
{ printf("MOD_ASSIGN\n"); ;
    break;}
case 75:
#line 264 "parser.y"
{ ; ;
    break;}
case 76:
#line 266 "parser.y"
{ ; ;
    break;}
case 77:
#line 268 "parser.y"
{ ; ;
    break;}
case 78:
#line 270 "parser.y"
{ ; ;
    break;}
case 79:
#line 272 "parser.y"
{ ; ;
    break;}
case 80:
#line 276 "parser.y"
{ printf("BIT_AND\n"); ;
    break;}
case 81:
#line 278 "parser.y"
{ printf("BIT_OR\n"); ;
    break;}
case 82:
#line 280 "parser.y"
{ printf("BIT_XOR\n"); ;
    break;}
case 83:
#line 282 "parser.y"
{ printf("PLUS\n"); ;
    break;}
case 84:
#line 284 "parser.y"
{ printf("MINUS\n"); ;
    break;}
case 85:
#line 286 "parser.y"
{ printf("MUL\n"); ;
    break;}
case 86:
#line 288 "parser.y"
{ printf("DIV\n"); ;
    break;}
case 87:
#line 290 "parser.y"
{ printf("MOD\n"); ;
    break;}
case 88:
#line 292 "parser.y"
{ printf("INC\n"); ;
    break;}
case 89:
#line 294 "parser.y"
{ printf("DEC\n"); ;
    break;}
case 90:
#line 296 "parser.y"
{;;
    break;}
case 91:
#line 298 "parser.y"
{;;
    break;}
case 92:
#line 300 "parser.y"
{;;
    break;}
case 93:
#line 302 "parser.y"
{;;
    break;}
case 94:
#line 304 "parser.y"
{;;
    break;}
case 95:
#line 306 "parser.y"
{;;
    break;}
case 96:
#line 308 "parser.y"
{;;
    break;}
case 97:
#line 312 "parser.y"
{;;
    break;}
case 98:
#line 314 "parser.y"
{;;
    break;}
case 99:
#line 318 "parser.y"
{ printf("OR\n"); ;
    break;}
case 100:
#line 320 "parser.y"
{ printf("AND\n"); ;
    break;}
case 101:
#line 322 "parser.y"
{ printf("NOT\n"); ;
    break;}
case 102:
#line 324 "parser.y"
{ printf("EQ\n"); ;
    break;}
case 103:
#line 326 "parser.y"
{ printf("NEQ\n"); ;
    break;}
case 104:
#line 328 "parser.y"
{ printf("LT\n"); ;
    break;}
case 105:
#line 330 "parser.y"
{ printf("GT\n"); ;
    break;}
case 106:
#line 332 "parser.y"
{ printf("LTE\n"); ;
    break;}
case 107:
#line 334 "parser.y"
{ printf("GTE\n"); ;
    break;}
case 108:
#line 336 "parser.y"
{;;
    break;}
case 109:
#line 340 "parser.y"
{;;
    break;}
case 110:
#line 342 "parser.y"
{;;
    break;}
case 111:
#line 346 "parser.y"
{;;
    break;}
case 112:
#line 348 "parser.y"
{;;
    break;}
case 113:
#line 353 "parser.y"
{;;
    break;}
case 114:
#line 355 "parser.y"
{;;
    break;}
case 115:
#line 357 "parser.y"
{;;
    break;}
case 116:
#line 359 "parser.y"
{;;
    break;}
case 117:
#line 361 "parser.y"
{;;
    break;}
case 118:
#line 363 "parser.y"
{;;
    break;}
case 119:
#line 365 "parser.y"
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
#line 367 "parser.y"


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
