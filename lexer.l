%{
    #include <stdlib.h>
    #include <stdio.h>
    #include <string.h>
%}

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
"*"         {return MULTIPLY;}
"/"         {return DIVIDE;}
"%"         {return MODULO;}
"++"        {return INCREMENT;}
"--"        {return DECREMENT;}

    /* assignment operators */
"="         {return ASSIGN;}
"+="        {return ADD_ASSIGN;}
"-="        {return SUB_ASSIGN;}
"*="        {return MUL_ASSIGN;}
"/="        {return DIV_ASSIGN;}
"%="        {return MOD_ASSIGN;}

    /* relational operators */
"=="        {return EQUAL;}
"!="        {return NOT_EQUAL;}
">"         {return GREATER;}
">="        {return GREATER_EQUAL;}
"<"         {return LESS;}
"<="        {return LESS_EQUAL;}

    /* logical operators */
"&&"        {return AND;}
"||"        {return OR;}
"!"         {return NOT;}

    /* bitwise operators */
"&"         {return BITWISE_AND;}
"|"         {return BITWISE_OR;}
"^"         {return BITWISE_XOR;}

    /* semicolon and comma */
[;:,]       {return yytext[0];}

    /* identifiers */
{ID}        {yylval.sval = strdup(yytext); return ID;}

    /* constants */
(0|[1-9][0-9]*)             {yylval.ival = atoi(yytext); return INT_CONST;}
(0|[1-9][0-9]*)\.[0-9]+     {yylval.fval = atof(yytext); return FLOAT_CONST;}

    /* strings */
(\"[^"]*\")                 {yylval.sval = strdup(yytext); return STRING_CONST;}

    /* characters */
(\'[^\']\')                 {yylval.cval = yytext[1]; return CHAR_CONST;}

    /* comments */
("//".*)                    {return COMMENT;}

    /* whitespace */
[ \t\n]                     {;}

    /* parentheses */
"[(){}\[\]]"                {return yytext[0];}

    /* error */
.                           {printf("Error: Unrecognized token %s\n", yytext); exit(1);}
%%

int yywrap(void) {
    return 1;
}