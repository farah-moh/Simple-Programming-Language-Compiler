%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

_Bool inFunction = 0;
%}

%union {
    char cval;
    char *sval;
    int ival;
    float fval;
    char *id;
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

/* COMMENT tokens */
%token COMMENT

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
%token <id> ID
%token <ival> INT_CONST
%token <fval> FLOAT_CONST
%token <sval> STRING_CONST
%token <cval> CHAR_CONST

%type <sval> type function_declaration_prototype

/* Grammar */
%%

program :
        program statement       {;}
        |                       {;}
        ;

statement :
        declaration ';'             { printf("Declaration\n"); }
        | initialization ';'        { printf("Initialization\n"); }
        | assignment ';'            { printf("Assignment\n"); }
        | if_statement              { printf("If_statement\n"); }
        | switch_statement          { printf("Switch_statement\n"); }
        | do_loop ';'               { printf("Do_loop\n"); }
        | while_loop                { printf("While_loop\n"); }
        | for_loop                  { printf("For_loop\n"); }
        | function_definition       { printf("Function_definition\n"); }
        | function_call ';'         { printf("Function_call\n"); }
        | return_statement ';'      { if (!(inFunction)) yyerror("Return statement outside function"); }
        | ID ';'                    { printf("ID\n"); }
        | '{' program '}'           { printf("Scope\n"); }
        ;

do_loop :
        DO '{' program '}' WHILE '(' expression ')'      {;}
        ;

for_loop :
        FOR '(' for_loop_initialization ';' for_loop_condition ';' for_loop_increment ')' '{' program '}' {;}
        ;

for_loop_initialization :
    INT ID ASSIGN INT_CONST {;}
    |
    ID ASSIGN INT_CONST     {;}
    |
                            {;}
    ;

for_loop_condition :
    expression            {;}
    |
                    {;}
    ;

for_loop_increment :
    expression            {;}
    |
    assignment            {;}
    |
                    {;}
    ;

while_loop :
    WHILE '(' expression ')' '{' program '}'     {;}
    ;

function_definition :
    function_declaration_prototype { inFunction = 1; } '{' program '}' { inFunction = 0; }
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
    function_parameters ',' function_parameter      {;}
    |
    function_parameter                              {;}
    ;

function_parameter:
    type ID {;}
    ;

return_statement :
    RETURN expression   {;}
    |
    RETURN assignment   {;}
    |
    RETURN
    ;

function_call : 
    ID '(' function_arguments_optional ')'                      {;}
    |
    ID ASSIGN ID '(' function_arguments_optional ')'            {;}
    |
    type ID ASSIGN ID '(' function_arguments_optional ')'       {;}
    ;

function_arguments_optional :
    function_arguments              {;}
    |
                                    {;}
    ;

function_arguments :
    function_arguments ',' function_argument  {;}
    |
    function_argument
    ;

function_argument :
    literal                              {;}
    ;

if_statement :
    IF '(' expression ')' '{' program '}'                                {;}
    |
    IF '(' expression ')' '{' program '}' ELSE '{' program '}'        {;}
    ;

switch_statement :
    SWITCH '(' ID ')' '{' switch_program '}'
    ;

switch_program :
    case_statements
    |
    case_statements default_statement
    |
    default_statement
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
    DEFAULT ':' program BREAK ';'
    ;

initialization :
    CONST type ID ASSIGN expression  {;}
    |
    type ID ASSIGN expression        {;}
    ;

declaration :
    CONST type ID   {;}
    |
    type ID         {;}
    ;

assignment :
    ID assign expression     {;}
    ;

assign :
    ASSIGN          {;}
    |
    ADD_ASSIGN      {;}
    |
    SUB_ASSIGN      {;}
    |
    MUL_ASSIGN      {;}
    |
    DIV_ASSIGN      {;}
    |
    MOD_ASSIGN      {;}
    ;

type :
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

evaluate_expression :
    evaluate_expression BIT_AND evaluate_expression         {;}
    |
    evaluate_expression BIT_OR evaluate_expression          {;}
    |
    evaluate_expression BIT_XOR evaluate_expression         {;}
    |
    evaluate_expression PLUS evaluate_expression            {;}
    |
    evaluate_expression MINUS evaluate_expression           {;}
    |
    evaluate_expression MUL evaluate_expression             {;}
    |
    evaluate_expression DIV evaluate_expression             {;}
    |
    evaluate_expression MOD evaluate_expression             {;}
    |
    evaluate_expression INC                                 {;}
    |
    evaluate_expression DEC                                 {;}
    |
    '(' evaluate_expression ')'                             {;}
    |
    FLOAT_CONST                                             {;}
    |
    INT_CONST                                               {;}                        
    |
    CHAR_CONST                                              {;}
    |
    ID                                                      {;}
    |
    TRUE                                                    {;}
    |
    FALSE                                                   {;}
    ;

math_or_value :
    evaluate_expression                 {;}
    |
    STRING_CONST                        {;}
    ;

condition :
    expression OR expression                    {;}
    | 
    expression AND expression                   {;}
    | 
    NOT expression                              {;}
    | 
    math_or_value EQ math_or_value              {;}
    | 
    math_or_value NEQ math_or_value             {;}
    | 
    math_or_value LT math_or_value              {;}
    | 
    math_or_value GT math_or_value              {;}
    | 
    math_or_value LTE math_or_value             {;}
    | 
    math_or_value GTE math_or_value             {;}
    | 
    '(' condition ')'                           {;}
    ;

expression :
    math_or_value           {;}
    |
    condition               {;}
    ;

literal :
    ID                          {;}
    |
    INT_CONST                   {;}
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
void yyerror(char *msg){
  fprintf(stderr, "%s\n", msg);
  exit(1);
}


int main(){
    yyparse();
    return 0;
}
