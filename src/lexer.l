%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
    #include "utils/symbolTable.hpp"
    #include "./y.tab.h"
%}

%option yylineno

    /* defines */

ID	[a-zA-z][a-zA-z0-9_]*

%%

    /* keywords */
"if"        {return IF;}
"else"      {return ELSE;}
"switch"    {return SWITCH;}
"case"      {return CASE;}
"default"   {return DEFAULT;}

"do"        {return DO;}
"while"     {return WHILE;}
"for"       {return FOR;}
"break"     {return BREAK;}
"continue"  {return CONTINUE;}

"return"    {return RETURN;}


    /* data types */
"const"     {return CONST;}
"int"       {return INT;}
"float"     {return FLOAT;}
"char"      {return CHAR;}
"string"    {return STRING;}
"bool"      {return BOOL;}
"void"      {return VOID;}

    /* boolean values */
"true"      {return TRUE;}
"false"     {return FALSE;}

    /* mathematical operators */
"+"         {return PLUS;}
"-"         {return MINUS;}
"*"         {return MUL;}
"/"         {return DIV;}
"%"         {return MOD;}
"++"        {return INC;}
"--"        {return DEC;}

    /* assignment operators */
"="         {return ASSIGN;}
"+="        {return ADD_ASSIGN;}
"-="        {return SUB_ASSIGN;}
"*="        {return MUL_ASSIGN;}
"/="        {return DIV_ASSIGN;}
"%="        {return MOD_ASSIGN;}

    /* relational operators */
"=="        {return EQ;}
"!="        {return NEQ;}
">"         {return GT;}
">="        {return GTE;}
"<"         {return LT;}
"<="        {return LTE;}

    /* logical operators */
"&&"        {return AND;}
"||"        {return OR;}
"!"         {return NOT;}

    /* bitwise operators */
"&"         {return BIT_AND;}
"|"         {return BIT_OR;}
"^"         {return BIT_XOR;}

    /* semicolon and comma */
[;:,]       {return yytext[0];}

    /* identifiers */
{ID}        {yylval.sval = strdup(yytext); return ID;}

    /* constants */
(0|[1-9][0-9]*)             {yylval.sval = strdup(yytext); return INT_CONST;}
(0|[1-9][0-9]*)\.[0-9]+     {yylval.sval = strdup(yytext); return FLOAT_CONST;}

    /* strings */
(\"[^"]*\")                 {yylval.sval = strdup(yytext); return STRING_CONST;}

    /* characters */
(\'[^\']\')                 {yylval.sval = strdup(yytext); return CHAR_CONST;}

    /* comments */
(\/\/.*)                    ;
(\/\*(.|\n|\r)*\*\/)        ;

    /* whitespace */
[ \t\n]                     {;}

    /* parentheses */
[(){}\[\]]                {return yytext[0];}

    /* error */
.                           {printf("Error: Unrecognized token %s\n", yytext); exit(1);}
%%

int yywrap(void) {
    return 1;
}
