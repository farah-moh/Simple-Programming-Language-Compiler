#include <cstring>
#include <string>

using namespace std;

#ifndef INCLUDES_HPP
#define INCLUDES_HPP


void yyerror(const char* s);
void yywarn(const char* s);

enum operation { 
                Plus,
                Minus,
                Mul,
                Div,
                Mod,
                Inc,
                Dec,
                Assign,
                Add_assign,
                Sub_assign,
                Mul_assign,
                Div_assign,
                Mod_assign,
                Eq,
                Neq,
                Lt,
                Gt,
                Lte,
                Gte,
                And,
                Or,
                Not,
                Bit_and,
                Bit_or,
                Bit_xor,    
            };

const string operationToString[] = {
    "plus",
    "minus",
    "mul",
    "div",
    "mod",
    "inc",
    "dec",
    "assign",
    "add_assign",
    "sub_assign",
    "mul_assign",
    "div_assign",
    "mod_assign",
    "eq",
    "neq",
    "lt",
    "gt",
    "lte",
    "gte",
    "and",
    "or",
    "not",
    "bit_and",
    "bit_or",
    "bit_xor",
};

#endif