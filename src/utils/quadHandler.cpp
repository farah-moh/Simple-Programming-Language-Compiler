#include "quadHandler.hpp"

void QuadHandler::writeToFile(operation op, symbol* arg1, symbol* arg2, symbol* result) {
    string op_str = operationToString[op];
    string arg1_name = !arg1 ? "" : arg1->name;
    string arg2_name = !arg2 ? "" : arg2->name;
    string result_name = !result ? "" : result->name;
    quad_file << op_str << " " << arg1_name << " " << arg2_name << " " << result_name << endl;
}

void QuadHandler::writeToFile(string command) {
    quad_file << command << endl;
}

string QuadHandler::generateLabel() {
    return "L" + to_string(labelCounter++);
}

void QuadHandler::implicitCast(symbol* arg1, symbol* arg2) {

    symbolType type1 = arg1->type;
    symbolType type2 = arg2->type;

    if(type1 != symbolType::INTtype && type1 != symbolType::FLOATtype && type1 != symbolType::BOOLtype && type1 != symbolType::CHARtype)
    {
        yyerror(("Invalid type "+ symbolTypeName[type1] + " for operation.").c_str());
    }
    if(type2 != symbolType::INTtype && type2 != symbolType::FLOATtype && type2 != symbolType::BOOLtype && type2 != symbolType::CHARtype)
    {
        yyerror(("Invalid type "+ symbolTypeName[type2] + " for operation.").c_str());
    }

    if(type1 == type2) {
        if(type1 == symbolType::BOOLtype) {
            arg1->type = symbolType::INTtype;
            arg2->type = symbolType::INTtype;
        }
        return;
    }
    if(type1 < type2) {
        arg2->type = type1;
        quad_file << "CAST " << arg2->name << " to " << symbolTypeName[type1] << endl;
    }
    else {
        arg1->type = type2;
        quad_file << "CAST " << arg1->name << " to " << symbolTypeName[type2] << endl;
    }
}

void QuadHandler::bitwiseCast(symbol* arg1, symbol* arg2) {

    symbolType type1 = arg1->type;
    symbolType type2 = arg2->type;

    if(type1 != symbolType::INTtype && type1 != symbolType::BOOLtype)
    {
        yyerror(("Invalid type "+ symbolTypeName[type1] + " for operation.").c_str());
    }
    if(type2 != symbolType::INTtype && type2 != symbolType::BOOLtype)
    {
        yyerror(("Invalid type "+ symbolTypeName[type2] + " for operation.").c_str());
    }

    if(type1 == type2) return;
    
    if(type1 < type2) {
        arg2->type = type1;
        quad_file << "CAST " << arg2->name << " to " << symbolTypeName[type1] << endl;
    }
    else {
        arg1->type = type2;
        quad_file << "CAST " << arg1->name << " to " << symbolTypeName[type2] << endl;
    }
}

symbol* QuadHandler::math_op(operation op, symbol* arg1, symbol* arg2) {
    implicitCast(arg1, arg2);

    string resultName = "t" + to_string(tempVarCounter++);
    symbol* result = new symbol(resultName, arg1->type, 1, 1);
    tempVars.push_back(result);

    // delete arg1;
    // delete arg2;

    writeToFile(op, arg1, arg2, result);
    return result;
}

symbol* QuadHandler::bit_op(operation op, symbol* arg1, symbol* arg2) {
    bitwiseCast(arg1, arg2);

    string resultName = "t" + to_string(tempVarCounter++);
    symbol* result = new symbol(resultName, arg1->type, 1, 1);
    tempVars.push_back(result);

    // delete arg1;
    // delete arg2;

    writeToFile(op, arg1, arg2, result);
    return result;
}

symbol* QuadHandler::logic_op(operation op, symbol* arg1, symbol* arg2) {

    if(op == operation::Not) {
        if(arg1->type != symbolType::BOOLtype) {
            yyerror("Invalid type for logical operation.");
        }
    }
    else if(arg1->type != symbolType::BOOLtype || arg2->type != symbolType::BOOLtype) {
        yyerror("Invalid type for logical operation.");
    }

    string resultName = "t" + to_string(tempVarCounter++);
    symbol* result = new symbol(resultName, arg1->type, 1, 1);
    tempVars.push_back(result);

    // delete arg1;
    // delete arg2;

    writeToFile(op, arg1, arg2, result);
    return result;
}

symbol* QuadHandler::rel_op(operation op, symbol* arg1, symbol* arg2) {

    implicitCast(arg1, arg2);

    string resultName = "t" + to_string(tempVarCounter++);
    symbol* result = new symbol(resultName, symbolType::BOOLtype, 1, 1);
    tempVars.push_back(result);

    writeToFile(op, arg1, arg2, result);
    return result;
}

void QuadHandler::assign_op(operation op, symbol* dest, symbol* src) {
    if(op != operation::Assign) {
        implicitCast(dest, src);
    }
    if(dest->type == symbolType::VOIDtype || dest->type == symbolType::UNKNOWN || dest->type == symbolType::CONSTtype) {
        yyerror("Can't assign to void type.");
    }
    if(src->type == symbolType::VOIDtype || src->type == symbolType::UNKNOWN || src->type == symbolType::CONSTtype) {
        yyerror("Can't assign void type.");
    }
    
    if(src->type == symbolType::STRINGtype && dest->type == symbolType::STRINGtype) {
        writeToFile(op, src, NULL, dest);
    }
    else if((src->type == symbolType::STRINGtype && dest->type != symbolType::STRINGtype) || (src->type != symbolType::STRINGtype && dest->type == symbolType::STRINGtype)) {
        yyerror("Invalid type for assignment.");
    }
    else {
        if(src->type != dest->type) {
            quad_file << "CAST " << src->name << " to " << symbolTypeName[dest->type] << endl;
        }
        src->type = dest->type;
        writeToFile(op, src, NULL, dest);
    } 
}

symbol* QuadHandler::unary_op(operation op, symbol* arg1) {
    symbolType type1 = arg1->type;
    if(type1 != symbolType::INTtype && type1 != symbolType::FLOATtype)
    {
        yyerror(("Invalid type "+ symbolTypeName[type1] + " for operation.").c_str());
    }

    writeToFile(op, arg1, NULL, NULL);
    return arg1;
}

void QuadHandler::jump_cond_op(symbol* arg1, string label, bool onTrue) {
    if(arg1->type == symbolType::VOIDtype) {
        yyerror("Invalid type for conditional jump.");
    }

    string command = "jmp " + label + " on " + arg1->name + " " + (onTrue ? "true" : "false");
    writeToFile(command);
}

void QuadHandler::jump_uncond_op(string label) {
    string command = "jmp " + label;
    writeToFile(command);
}

void QuadHandler::declare_func_op(symbol* funcPrototype, vector<symbol*> args) {
    string command = "proc " + symbolTypeName[funcPrototype->type] + " " + funcPrototype->name + " ";
    for(auto arg : args) {
        command += symbolTypeName[arg->type] + " " + arg->name + " ";
    }
    writeToFile(command);
}

// cast arg2 to arg1
bool QuadHandler::tryCast(symbol* arg1, symbolType type) {
    if(arg1->type == type) return true;
    if(arg1->type == symbolType::INTtype || arg1->type == symbolType::BOOLtype || arg1->type == symbolType::FLOATtype || arg1->type == symbolType::CHARtype) { 
        if(type == symbolType::INTtype || type == symbolType::BOOLtype || type == symbolType::FLOATtype || type == symbolType::CHARtype) {
            quad_file << "CAST " << arg1->name << " to " << symbolTypeName[type] << endl;
            return true;
        }
    }
    return false;
}

void QuadHandler::return_op(symbol* arg1, symbolType returnType) {
    if(!arg1) {
        if(returnType != symbolType::VOIDtype) {
            yyerror("Function return type is not void.");
        }
        writeToFile("return");
        return;
    }
    if(returnType == symbolType::UNKNOWN) {
        yyerror("Return cannot be outside function.");
    }
    else if(!tryCast(arg1, returnType)) {
        yyerror("Invalid return type. Cannot cast value to function return type.");
    }
    string command = "return " + arg1->name + "\n\n";
    writeToFile(command);
}

symbol* QuadHandler::call_func_op(symbol* funcPrototype, vector<symbol*> args) {
    symbol* result = new symbol("t" + to_string(tempVarCounter++), funcPrototype->type, 1, 1);
    tempVars.push_back(result);
    string command = "call " + funcPrototype->name + " " + result->name + " ";
    for(auto arg : args) {
        command += arg->name + " ";
    }
    writeToFile(command);
    return result;
}

void QuadHandler::cleanUp() {
    for(auto tempVar : tempVars) {
        if(tempVar) delete tempVar;
    }
}