typedef union {
    char cval;
    char *sval;
    int ival;
    float fval;
    char *id;
} YYSTYPE;
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


extern YYSTYPE yylval;
