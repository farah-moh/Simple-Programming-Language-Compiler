#include "quadHandler.hpp"

void QuadHandler::writeToFile(operation op, symbol* arg1, symbol* arg2, symbol* result) {
    string op_str = operationToString[op];
    cout<< "Writing to file" << endl;
    string arg1_name = !arg1 ? "" : arg1->name;
    string arg2_name = !arg2 ? "" : arg2->name;
    string result_name = !result ? "" : result->name;
    cout<<op_str<<" "<<arg1_name<<" "<<arg2_name<<" "<<result_name<<endl;
    quad_file << op_str << " " << arg1_name << " " << arg2_name << " " << result_name << endl;
}

void QuadHandler::writeToFile(string command) {
    cout<< "Writing to file command" << endl;
    quad_file << command << endl;
}

string QuadHandler::generateLabel() {
    return "L" + to_string(labelCounter++);
}

void QuadHandler::implicitCast(symbol* arg1, symbol* arg2) {

    symbolType type1 = arg1->type;
    symbolType type2 = arg2->type;

    cout<<symbolTypeName[type1]<<" "<<symbolTypeName[type2]<<endl;
    if(type1 != symbolType::INTtype && type1 != symbolType::FLOATtype && type1 != symbolType::BOOLtype)
    {
        yyerror(("Error: Invalid type "+ symbolTypeName[type1] + " for operation.").c_str());
    }
    if(type2 != symbolType::INTtype && type2 != symbolType::FLOATtype && type2 != symbolType::BOOLtype)
    {
        yyerror(("Error: Invalid type "+ symbolTypeName[type2] + " for operation.").c_str());
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
        quad_file << "// CAST " << arg2->name << " to " << symbolTypeName[type1] << endl;
    }
    else {
        arg1->type = type2;
        quad_file << "// CAST " << arg1->name << " to " << symbolTypeName[type2] << endl;
    }
}

void QuadHandler::bitwiseCast(symbol* arg1, symbol* arg2) {

    symbolType type1 = arg1->type;
    symbolType type2 = arg2->type;

    cout<<symbolTypeName[type1]<<" "<<symbolTypeName[type2]<<endl;
    if(type1 != symbolType::INTtype && type1 != symbolType::BOOLtype)
    {
        yyerror(("Error: Invalid type "+ symbolTypeName[type1] + " for operation.").c_str());
    }
    if(type2 != symbolType::INTtype && type2 != symbolType::BOOLtype)
    {
        yyerror(("Error: Invalid type "+ symbolTypeName[type2] + " for operation.").c_str());
    }

    if(type1 == type2) return;
    
    if(type1 < type2) {
        arg2->type = type1;
        quad_file << "// CAST " << arg2->name << " to " << symbolTypeName[type1] << endl;
    }
    else {
        arg1->type = type2;
        quad_file << "// CAST " << arg1->name << " to " << symbolTypeName[type2] << endl;
    }
}

symbol* QuadHandler::math_op(operation op, symbol* arg1, symbol* arg2) {
    implicitCast(arg1, arg2);

    string resultName = "t" + to_string(tempVarCounter++);
    symbol* result = new symbol(resultName, arg1->type, 1, 1);

    // delete arg1;
    // delete arg2;

    writeToFile(op, arg1, arg2, result);
    return result;
}

symbol* QuadHandler::bit_op(operation op, symbol* arg1, symbol* arg2) {
    bitwiseCast(arg1, arg2);

    string resultName = "t" + to_string(tempVarCounter++);
    symbol* result = new symbol(resultName, arg1->type, 1, 1);

    // delete arg1;
    // delete arg2;

    writeToFile(op, arg1, arg2, result);
    return result;
}

symbol* QuadHandler::logic_op(operation op, symbol* arg1, symbol* arg2) {

    if(op == operation::Not) {
        if(arg1->type != symbolType::BOOLtype) {
            yyerror("Error: Invalid type for logical operation.");
        }
    }
    else if(arg1->type != symbolType::BOOLtype || arg2->type != symbolType::BOOLtype) {
        yyerror("Error: Invalid type for logical operation.");
    }

    string resultName = "t" + to_string(tempVarCounter++);
    symbol* result = new symbol(resultName, arg1->type, 1, 1);

    // delete arg1;
    // delete arg2;

    writeToFile(op, arg1, arg2, result);
    return result;
}

symbol* QuadHandler::rel_op(operation op, symbol* arg1, symbol* arg2) {

    implicitCast(arg1, arg2);

    string resultName = "t" + to_string(tempVarCounter++);
    symbol* result = new symbol(resultName, symbolType::BOOLtype, 1, 1);

    // delete arg1;
    // delete arg2;

    writeToFile(op, arg1, arg2, result);
    return result;
}

void QuadHandler::assign_op(operation op, symbol* dest, symbol* src) {
    if(dest->type == symbolType::VOIDtype || dest->type == symbolType::UNKNOWN || dest->type == symbolType::CONSTtype) {
        yyerror("Error: Can't assign to void type.");
    }
    if(src->type == symbolType::VOIDtype || src->type == symbolType::UNKNOWN || src->type == symbolType::CONSTtype) {
        yyerror("Error: Can't assign void type.");
    }
    
    if(src->type == symbolType::STRINGtype && dest->type == symbolType::STRINGtype) {
        writeToFile(op, src, NULL, dest);
    }
    else if(src->type == symbolType::STRINGtype && dest->type != symbolType::STRINGtype) {
        yyerror("Error: Invalid type for assignment.");
    }
    else {
        if(src->type != dest->type) {
            quad_file << "// CAST " << src->name << " to " << symbolTypeName[dest->type] << endl;
        }
        src->type = dest->type;
        writeToFile(op, src, NULL, dest);
    } 
}

symbol* QuadHandler::unary_op(operation op, symbol* arg1) {
    cout<<"------------------ Unary op ------------------"<<endl;
    if(arg1->type != symbolType::INTtype) {
        yyerror("Error: Invalid type for unary operation.");
    }
    string resultName = "t" + to_string(tempVarCounter++);
    symbol* result = new symbol(resultName, arg1->type, 1, 1);

    cout<<arg1->type<<endl;

    writeToFile(op, arg1, NULL, result);
    return result;
}

void QuadHandler::jump_cond_op(symbol* arg1, string label, bool onTrue) {
    if(arg1->type == symbolType::VOIDtype) {
        yyerror("Error: Invalid type for conditional jump.");
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