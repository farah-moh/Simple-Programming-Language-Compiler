%{
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include "utils/symbolTable.hpp"

symbolTable symbTable = symbolTable();
int symbolTable::numScopes = 0;
vector<vector<symbolTable*>> symbolTable::symbolTableAdj = vector<vector<symbolTable*>>(1,vector<symbolTable*>());
symbolTable* symbolTable::current = &symbTable;

int yylex();

int inFunction = 0;
%}

%union {
    char cval;
    char *sval;
    int ival;
    float fval;
    char *id;
    constNode* constNodeType;
    symbolType symbolTypeType;
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
%token <id> ID
%token <ival> INT_CONST
%token <fval> FLOAT_CONST
%token <sval> STRING_CONST
%token <cval> CHAR_CONST

%type <sval> function_declaration_prototype
%type <constNodeType> evaluate_expression 
%type <constNodeType> math_or_value  
%type <constNodeType> expression 
%type <constNodeType> condition 
%type <constNodeType> unary_expression
%type <constNodeType> literal
%type <symbolTypeType> type

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
        { printf("Scope start\n"); }          '{' program '}'           { printf("Scope end\n"); }
        ;

do_loop :
        DO {symbTable.changeScope(1);} '{' program '}' WHILE {symbTable.changeScope(0);} '(' expression ')'      {;}
        ;

for_loop :
        FOR {symbTable.changeScope(1);} '(' for_loop_initialization ';' for_loop_condition ';' for_loop_increment ')' '{' program '}' {symbTable.changeScope(0);};
        ;

for_loop_initialization :
    INT ID ASSIGN INT_CONST {
                                symbTable.addOrUpdateSymbol(string($2),symbolType::INTtype,new constNode(symbolType::INTtype,to_string($4)),0,1);
                            }
    |
    ID ASSIGN INT_CONST     {
                                symbTable.addOrUpdateSymbol(string($1),symbolType::UNKNOWN,new constNode(symbolType::INTtype,to_string($3)),0,0);
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
    one_level_if_statement ELSE '{' program '}' {symbTable.changeScope(0);}
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
    CONST type ID ASSIGN expression  {symbTable.addOrUpdateSymbol(string($3),$2,$5,1,1);}
    |
    type ID ASSIGN expression        {symbTable.addOrUpdateSymbol(string($2),$1,$4,0,1);}
    ;

declaration :
    CONST type ID   {symbTable.addOrUpdateSymbol(string($3),$2,new constNode(),1,0);}
    |
    type ID         {symbTable.addOrUpdateSymbol(string($2),$1,new constNode(),0,0);}
    ;

assignment :
    ID assign expression     %prec ASSIGN{symbTable.addOrUpdateSymbol(string($1),symbolType::UNKNOWN,$3,0,0);}
    ;

assign :
    ASSIGN          { printf("ASSIGN\n"); }
    |
    ADD_ASSIGN      { printf("ADD_ASSIGN\n"); }
    |
    SUB_ASSIGN      { printf("SUB_ASSIGN\n"); }
    |
    MUL_ASSIGN      { printf("MUL_ASSIGN\n"); }
    |
    DIV_ASSIGN      { printf("DIV_ASSIGN\n"); }
    |
    MOD_ASSIGN      { printf("MOD_ASSIGN\n"); }
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
    evaluate_expression BIT_AND evaluate_expression         { printf("BIT_AND\n"); }
    |
    evaluate_expression BIT_OR evaluate_expression          { printf("BIT_OR\n"); }
    |
    evaluate_expression BIT_XOR evaluate_expression         { printf("BIT_XOR\n"); }
    |
    evaluate_expression PLUS evaluate_expression            { printf("PLUS\n"); }
    |
    evaluate_expression MINUS evaluate_expression           { printf("MINUS\n"); }
    |
    evaluate_expression MUL evaluate_expression             { printf("MUL\n"); }
    |
    evaluate_expression DIV evaluate_expression             { printf("DIV\n"); }
    |
    evaluate_expression MOD evaluate_expression             { printf("MOD\n"); }
    |
    evaluate_expression INC                                 { printf("INC\n"); }
    |
    evaluate_expression DEC                                 { printf("DEC\n"); }
    |
    '(' evaluate_expression ')'                             {;}
    |
    FLOAT_CONST                                             {$$ = new constNode(symbolType::FLOATtype,to_string($1));}
    |
    INT_CONST                                               {$$ = new constNode(symbolType::INTtype,to_string($1));}                        
    |
    CHAR_CONST                                              {$$ = new constNode(symbolType::INTtype, to_string((int)$1));}
    |
    ID                                                      {;}
    |
    TRUE                                                    {$$ = new constNode(symbolType::BOOLtype,"1");}
    |
    FALSE                                                   {$$ = new constNode(symbolType::BOOLtype,"0");}
    ;

math_or_value :
    evaluate_expression                 {;}
    |
    STRING_CONST                        {$$ = new constNode(symbolType::STRINGtype,$1);}
    ;

condition :
    expression OR expression                    { printf("OR\n"); }
    | 
    expression AND expression                   { printf("AND\n"); }
    | 
    NOT expression                              { printf("NOT\n"); }
    | 
    math_or_value EQ math_or_value              { printf("EQ\n"); }
    | 
    math_or_value NEQ math_or_value             { printf("NEQ\n"); }
    | 
    math_or_value LT math_or_value              { printf("LT\n"); }
    | 
    math_or_value GT math_or_value              { printf("GT\n"); }
    | 
    math_or_value LTE math_or_value             { printf("LTE\n"); }
    | 
    math_or_value GTE math_or_value             { printf("GTE\n"); }
    | 
    '(' condition ')'                           {;}
    ;

unary_expression:
    ID INC      {;}
    |
    ID DEC      {;}
    ;

expression :
    math_or_value                                    {;}
    |
    condition                                        {;}
    ;


literal :
    ID                          {;}
    |
    INT_CONST                   {$$ = new constNode(symbolType::INTtype,to_string($1));}
    |
    FLOAT_CONST                 {$$ = new constNode(symbolType::FLOATtype,to_string($1));}
    |
    CHAR_CONST                  {$$ = new constNode(symbolType::INTtype,to_string($1));}
    |
    STRING_CONST                {$$ = new constNode(symbolType::STRINGtype,$1);}
    |
    TRUE                        {$$ = new constNode(symbolType::BOOLtype,"1");}
    |
    FALSE                       {$$ = new constNode(symbolType::BOOLtype,"0");}
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
