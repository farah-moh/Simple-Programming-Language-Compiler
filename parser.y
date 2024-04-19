%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "lex.yy.c"
%}

%union {
    char cval;
    char *sval;
    int ival;
    float fval;
    char *ID;
}

    /* keywords */
%token IF ELSE WHILE FOR DO SWITCH CASE DEFAULT BREAK CONTINUE RETURN

    /* data types */
%token CONST INT FLOAT CHAR STRING BOOL VOID

    /* boolean values */
%token TRUE FALSE

    /* mathematical operators */
%token PLUS MINUS MUL DIV MOD INC DEC 

    /* assignment operators */
%token ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN

    /* relational operators */
%token EQ NEQ LT GT LTE GTE

    /* logical operators */
%token AND OR NOT

    /* bitwise operators */
%token BIT_AND BIT_OR BIT_XOR

    /* associativity: https://en.cppreference.com/w/cpp/language/operator_precedence */
%right ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN
%left   OR
%left   AND
%left   BIT_XOR
%left   BIT_OR
%left   BIT_AND
%left   EQ NEQ
%left   LT GT LTE GTE
%left   PLUS MINUS
%left   MUL DIV MOD
%right  NOT
%left   INC DEC

    /* other tokens */
%token <ID> ID
%token <ival> INTEGER_CONST
%token <fval> FLOAT_CONST
%token <sval> STRING_CONST
%token <cval> CHAR_CONST

    /* grammar */