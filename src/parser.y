%{
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include "utils/symbolTable.hpp"
#include "utils/quadHandler.hpp"

symbolTable symbTable = symbolTable();
QuadHandler quadHandle = QuadHandler("output/quad.faam");
int symbolTable::numScopes = 0;
vector<vector<symbolTable*>> symbolTable::symbolTableAdj = vector<vector<symbolTable*>>(1,vector<symbolTable*>());
symbolTable* symbolTable::current = &symbTable;

int yylex();

int inFunction = 0;
%}

%union {
    char *sval;
    symbol* symboll;
    symbolType symbolTypeType;
    operation operationName;
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
%left FUNC

/* Other tokens */
%token <sval> ID
%token <sval> INT_CONST
%token <sval> FLOAT_CONST
%token <sval> STRING_CONST
%token <sval> CHAR_CONST

%type <sval> function_declaration_prototype
%type <symboll> evaluate_expression 
%type <symboll> math_or_value  
%type <symboll> expression 
%type <symboll> condition 
%type <symboll> unary_expression
%type <symboll> literal
%type <symbolTypeType> type
%type <operationName> assign

/* Grammar */
%%

program :
        program statement       {;}
        |                       {;}
        ;

statement :
        declaration ';'           { printf("Declaration\n"); }
        | 
        initialization ';'        { printf("Initialization\n"); }
        | 
        assignment ';'            { printf("Assignment\n"); }
        | 
        unary_expression ';'      { printf("Unary Expression\n"); }
        | 
        { printf("If statement start\n"); }   if_statement              { printf("If statement end\n"); }
        | 
        { printf("Switch case start\n"); }    switch_statement          { printf("Switch case end\n"); }
        | 
        { printf("Do while loop start\n"); }  do_loop ';'               { printf("Do while loop end\n"); }
        | 
        { printf("While loop start\n"); }     while_loop                { printf("While loop end\n"); }
        | 
        { printf("For loop start\n"); }       for_loop                  { printf("For loop end\n"); }
        | 
        function_definition       { printf("Function_definition\n"); }
        | 
        function_call ';'         { printf("Function_call\n"); }
        | 
        return_statement ';'      { if (!(inFunction)) yyerror("Return statement outside function"); }
        |
        { printf("Scope start\n"); }          '{' {symbTable.changeScope(1);} program '}' {symbTable.changeScope(0);}    { printf("Scope end\n"); }
        ;

do_loop :
        DO {symbTable.changeScope(1);} '{' program '}' WHILE {symbTable.changeScope(0);} '(' expression ')'      {;}
        ;

for_loop :
        FOR {symbTable.changeScope(1);} '(' for_loop_initialization ';' for_loop_condition ';' for_loop_increment ')' '{' program '}' {symbTable.changeScope(0);};
        ;

for_loop_initialization :
    INT ID ASSIGN INT_CONST {
                                symbTable.addOrUpdateSymbol(string($2),symbolType::INTtype,new symbol(string($4), symbolType::INTtype, 1,1),0 ,0);
                            }
    |
    ID ASSIGN INT_CONST     {
                                symbTable.addOrUpdateSymbol(string($1),symbolType::UNKNOWN,new symbol(string($3), symbolType::INTtype, 1,1),0,0);
                            }
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
    WHILE '(' expression ')' {symbTable.changeScope(1);} '{' program '}'     {symbTable.changeScope(0);}
    ;

function_definition :
    function_declaration_prototype { inFunction = 1;} '{' program '}' { inFunction = 0;}
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
    type ID             {;}
    ;

return_statement :
    RETURN expression   {;}
    |
    RETURN assignment   {;}
    |
    RETURN
    ;

function_call : 
    ID '(' function_arguments_optional ')'                      %prec FUNC{;}
    |
    assignment '(' function_arguments_optional ')'            %prec FUNC{;}
    |
    initialization '(' function_arguments_optional ')'       %prec FUNC{;}
    ;

function_arguments_optional :
    function_arguments      {;}
    |
                            {;}
    ;

function_arguments :
    function_arguments ',' function_argument    {;}
    |
    function_argument                           {;}
    ;

function_argument :
    literal            {;}
    ;

if_statement :
    one_level_if_statement
    |
    one_level_if_statement ELSE {symbTable.changeScope(1);} '{' program '}' {symbTable.changeScope(0);}
    ;

one_level_if_statement :
    IF '(' expression ')' {symbTable.changeScope(1);} '{' program '}'    {symbTable.changeScope(0);}
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
    CASE literal ':' {symbTable.changeScope(1);} program {symbTable.changeScope(0);} BREAK ';'
    ;

default_statement :
    DEFAULT ':' {symbTable.changeScope(1);} program {symbTable.changeScope(0);} BREAK ';'
    ;

initialization :
    CONST type ID ASSIGN expression {
                                        symbol* temp = symbTable.addOrUpdateSymbol(string($3),$2,$5,1,1);
                                        quadHandle.assign_op(operation::Assign, temp, $5);
                                    }
    |
    type ID ASSIGN expression       {
                                        symbol* temp = symbTable.addOrUpdateSymbol(string($2),$1,$4,0,1);
                                        quadHandle.assign_op(operation::Assign, temp, $4);
                                    }
    ;

declaration :
    CONST type ID   {symbTable.addOrUpdateSymbol(string($3),$2,NULL,1,0);}
    |
    type ID         {symbTable.addOrUpdateSymbol(string($2),$1,NULL,0,0);}
    ;

assignment :
    ID assign expression     %prec ASSIGN{
                                            symbol* temp = symbTable.findSymbol(string($1));
                                            quadHandle.assign_op($2 ,temp, $3);
                                         }
    ;

assign :
    ASSIGN          {$$ = operation::Assign;}
    |
    ADD_ASSIGN      {$$ = operation::Add_assign;}
    |
    SUB_ASSIGN      {$$ = operation::Sub_assign;}
    |
    MUL_ASSIGN      {$$ = operation::Mul_assign;}
    |
    DIV_ASSIGN      {$$ = operation::Div_assign;}
    |
    MOD_ASSIGN      {$$ = operation::Mod_assign;}
    ;

type :
    INT         {$$ = symbolType::INTtype;}
    |
    FLOAT       {$$ = symbolType::FLOATtype;}
    |
    CHAR        {$$ = symbolType::CHARtype;}
    |
    STRING      {$$ = symbolType::STRINGtype;}
    |
    BOOL        {$$ = symbolType::BOOLtype;}
    ;

evaluate_expression :
    evaluate_expression BIT_AND evaluate_expression         {$$ = quadHandle.bit_op(operation::Bit_and, $1, $3);}
    |
    evaluate_expression BIT_OR evaluate_expression          {$$ = quadHandle.bit_op(operation::Bit_or, $1, $3);}
    |
    evaluate_expression BIT_XOR evaluate_expression         {$$ = quadHandle.bit_op(operation::Bit_xor, $1, $3);}
    |
    evaluate_expression PLUS evaluate_expression            {$$ = quadHandle.math_op(operation::Plus, $1, $3);}
    |
    evaluate_expression MINUS evaluate_expression           {$$ = quadHandle.math_op(operation::Minus, $1, $3);}
    |
    evaluate_expression MUL evaluate_expression             {$$ = quadHandle.math_op(operation::Mul, $1, $3);}
    |
    evaluate_expression DIV evaluate_expression             {$$ = quadHandle.math_op(operation::Div, $1, $3);}
    |
    evaluate_expression MOD evaluate_expression             {$$ = quadHandle.math_op(operation::Mod, $1, $3);}
    |
    evaluate_expression INC                                 {$$ = quadHandle.unary_op(operation::Inc, $1);}
    |
    evaluate_expression DEC                                 {$$ = quadHandle.unary_op(operation::Inc, $1);}
    |
    '(' evaluate_expression ')'                             {;}
    |
    FLOAT_CONST                                             {$$ = new symbol($1, symbolType::FLOATtype,1,1);}
    |
    INT_CONST                                               {$$ = new symbol($1, symbolType::INTtype, 1,1);}                        
    |
    CHAR_CONST                                              {$$ = new symbol($1, symbolType::INTtype, 1,1);}
    |
    ID                                                      {$$ = symbTable.findSymbol(string($1));}
    |
    TRUE                                                    {$$ = new symbol("true", symbolType::BOOLtype, 1,1);}
    |
    FALSE                                                   {$$ = new symbol("false", symbolType::BOOLtype, 1,1);}
    ;

math_or_value :
    evaluate_expression                 {;}
    |
    STRING_CONST                        {$$ = new symbol($1, symbolType::STRINGtype, 1,1);}
    ;

condition :
    expression OR expression                    {$$ = quadHandle.logic_op(operation::Or, $1, $3);}
    | 
    expression AND expression                   {$$ = quadHandle.logic_op(operation::And, $1, $3);}
    | 
    NOT expression                              {$$ = quadHandle.logic_op(operation::Not, $2, NULL);}
    | 
    math_or_value EQ math_or_value              {$$ = quadHandle.rel_op(operation::Eq, $1, $3);}
    | 
    math_or_value NEQ math_or_value             {$$ = quadHandle.rel_op(operation::Neq, $1, $3);}
    | 
    math_or_value LT math_or_value              {$$ = quadHandle.rel_op(operation::Lt, $1, $3);}
    | 
    math_or_value GT math_or_value              {$$ = quadHandle.rel_op(operation::Gt, $1, $3);}
    | 
    math_or_value LTE math_or_value             {$$ = quadHandle.rel_op(operation::Lte, $1, $3);}
    | 
    math_or_value GTE math_or_value             {$$ = quadHandle.rel_op(operation::Gte, $1, $3);}
    | 
    '(' condition ')'                           {;}
    ;

unary_expression:
    ID INC      {$$ = quadHandle.unary_op(operation::Inc, symbTable.findSymbol(string($1)));}
    |
    ID DEC      {$$ = quadHandle.unary_op(operation::Inc, symbTable.findSymbol(string($1)));}
    ;

expression :
    math_or_value                                    {;}
    |
    condition                                        {;}
    ;


literal :
    ID                          {$$ = symbTable.findSymbol(string($1));}
    |
    INT_CONST                   {$$ = new symbol($1, symbolType::INTtype, 1,1);}
    |
    FLOAT_CONST                 {$$ = new symbol($1, symbolType::FLOATtype, 1,1);}
    |
    CHAR_CONST                  {$$ = new symbol($1, symbolType::INTtype, 1,1);}
    |
    STRING_CONST                {$$ = new symbol($1, symbolType::STRINGtype, 1,1);}
    |
    TRUE                        {$$ = new symbol("true", symbolType::BOOLtype,1,1);}
    |
    FALSE                       {$$ = new symbol("false", symbolType::BOOLtype,1,1);}
    ;
%%

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
