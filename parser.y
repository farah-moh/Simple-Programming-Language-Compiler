%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lex.yy.c"

bool inFunction = FALSE;
%}

%union {
    char cval;
    char *sval;
    int ival;
    float fval;
    char *ID;
}

/* Keywords */
%token IF ELSE WHILE FOR DO SWITCH CASE DEFAULT BREAK CONTINUE RETURN

/* Data types */
%token CONST INT FLOAT CHAR STRING BOOL VOID

/* Boolean values */
%token TRUE FALSE

/* Mathematical operators */
%token PLUS MINUS MUL DIV MOD INC DEC

/* Assignment operators */
%token ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN MOD_ASSIGN

/* Relational operators */
%token EQ NEQ LT GT LTE GTE

/* Logical operators */
%token AND OR NOT

/* Bitwise operators */
%token BIT_AND BIT_OR BIT_XOR

/* Associativity: https://en.cppreference.com/w/cpp/language/operator_precedence */
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

/* Other tokens */
%token <ID> ID
%token <ival> INTEGER_CONST
%token <fval> FLOAT_CONST
%token <sval> STRING_CONST
%token <cval> CHAR_CONST

%type <sval> type function_declaration_prototype

/* Grammar */
%%

program :
        program statement
        | statement
        ;

statement :
        do_loop ';'                 { printf("Do_loop\n"); }
        | for_loop ';'              { printf("For_loop\n"); }
        | while_loop ';'            { printf("While_loop\n"); }
        | initialization ';'        { printf("Initialization\n"); }
        | declaration ';'           { printf("Declaration\n"); }
        | function_definition ';'   { printf("Function_definition\n"); }
        | function_call ';'         { printf("Function_call\n"); }
        | return_statement ';'      { if (!(inFunction)) yyerror("Return statement outside function"); }
        | assignment ';'            { printf("Assignment\n"); }
        | if_statement              { printf("If_statement\n"); }
        | switch_statement          { printf("Switch_statement\n"); }
        | ID ';'                    { printf("ID\n"); }
        | '{' program '}'           { printf("Scope\n"); }
        ;

do_loop :
        DO '{' program '}' WHILE '(' condition ')'      {;}
        ;

for_loop :
        FOR '(' for_loop_initialization ';' for_loop_condition ';' for_loop_increment ')' '{' program '}' {;}
        ;

for_loop_initialization :
    initialization  {;}
    |
    for_loop_condition {;}
    ;

for_loop_condition :
    expr            {;}
    |
    assignment      {;}
    |
                    {;}
    ;

for_loop_increment :
    expr            {;}
    |
    assignment      {;}
    |
                    {;}
    ;

while_loop :
    WHILE '(' condition ')' '{' program '}'     {;}
    ;

condition :
    condition OR literal          {;}
    | condition AND literal         {;}
    | condition EQ literal          {;}
    | condition NEQ literal         {;}
    | condition LT literal          {;}
    | condition GT literal          {;}
    | condition LTE literal         {;}
    | condition GTE literal         {;}
    | literal
    ;

function_definition :
    function_declaration_prototype { inFunction = TRUE; } '{' program '}' { inFunction = FALSE; }
    ;

function_declaration_prototype : 
    VOID ID '(' function_parameters_optional ')'  {;}
    |
    type ID '(' function_parameters_optional ')'  {;}
    ;
function_parameters_optional :
    function_parameters             {;}
    |
                                                {;}
    ;
function_parameters :
    function_parameters ',' function_parameter {;}
    |
    function_parameter
    ;

function_parameter:
    type ID {;}
    ;

return_statement :
    RETURN expr
    |
    RETURN
    ;

function_call :
    ID '(' function_arguments_optional ')'     {;}
    ;
function_arguments_optional :
    function_arguments        {;}
    |
                                    {;}
    ;
function_arguments :
    function_arguments ',' function_argument  {;}
    |
    function_argument
    ;
function_argument :
    ID                              {;}
    ;

if_statement :
    IF '(' expr ')' '{' program '}'
    |
    IF '(' expr ')' '{' program '}' ELSE '{' program '}'
    ;

switch_statement :
    SWITCH '(' expr ')' '{' switch_program '}'
    ;

switch_program :
    case_statements
    |
    case_statements default_statement
    ;

case_statements :
    case_statements case_statement
    |
    case_statement
    ;

case_statement :
    CASE literal ':' program BREAK ';'
    ;

default_statement :
    DEFAULT literal ':' program BREAK ';'
    ;

initialization :
    CONST type ID '=' expr  {;}
    |
    type ID '=' expr        {;}
    ;

declaration :
    CONST type ID   {;}
    |
    type ID         {;}
    ;

assignment :
    ID '=' expr     {;}
    ;

type:
    INT         {;}
    |
    FLOAT       {;}
    |
    CHAR        {;}
    |
    STRING      {;}
    |
    BOOL        {;}
    ;

expr :
    literal '+' literal     {;}
     ;

literal :
    ID                          {;}
    |
    INTEGER_CONST               {;}
    |
    FLOAT_CONST                 {;}
    |
    CHAR_CONST                  {;}
    |
    STRING_CONST                {;}
    |
    TRUE                        {;}
    |
    FALSE                       {;}
    ;
%%

/* Error handling */
void yyerror(char const *s){
    extern int yylineno;
    fprintf(stderr, "%s near line %d\n", s, yylineno);
    exit(-1);
}

int main(){
    yyparse();
    return 0;
}
