#include "quadHandler.hpp"

void QuadHandler::writeToFile(operation op, symbol* arg1, symbol* arg2, symbol* result) {
    string op_str = operationToString[op];
    cout<< "Writing to file" << endl;
    string arg1_name = arg1 ? "" : arg1->name;
    string arg2_name = arg2 ? "" : arg2->name;
    string result_name = result ? "" : result->name;
    quad_file << op_str << " " << arg1_name << " " << arg2_name << " " << result_name << endl;
}

void QuadHandler::implicitCast(symbol* arg1, symbol* arg2) {

    symbolType type1 = arg1->value->type;
    symbolType type2 = arg2->value->type;

    if(type1 != symbolType::INTtype && type1 != symbolType::FLOATtype && type1 != symbolType::BOOLtype)
    {
        yyerror(("Error: Invalid type "+ symbolTypeName[type1] + " for operation.").c_str());
    }
    if(type2 != symbolType::INTtype && type2 != symbolType::FLOATtype && type2 != symbolType::BOOLtype)
    {
        yyerror(("Error: Invalid type "+ symbolTypeName[type2] + " for operation.").c_str());
    }

    if(type1 == type2) {
        return;
    }
    
    if(type1 < type2) {
        arg2->value->type = type1;
        quad_file << "CAST " << arg2->name << " to " << symbolTypeName[type1] << endl;
    }
    else {
        arg1->value->type = type2;
        quad_file << "CAST " << arg1->name << " to " << symbolTypeName[type2] << endl;
    }
}

symbol* QuadHandler::math_op(operation op, symbol* arg1, symbol* arg2) {
    symbol* result = new symbol();
    result->name = "t" + to_string(tempVarCounter++);

    writeToFile(op, arg1, arg2, result);
    return NULL;
}