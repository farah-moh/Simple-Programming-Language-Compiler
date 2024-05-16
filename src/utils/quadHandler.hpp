#include "symbolTable.hpp"
#include <fstream>

class QuadHandler {
    ofstream quad_file;
    int tempVarCounter = 0;
    int labelCounter = 0;
public:
    vector<symbol*> tempVars;
    QuadHandler(string file) {
        quad_file = ofstream(file);
    }

    void writeToFile(operation op, symbol* arg1, symbol* arg2, symbol* result);
    void writeToFile(string command);

    void implicitCast(symbol* arg1, symbol* arg2);
    void bitwiseCast(symbol* arg1, symbol* arg2);
    bool tryCast(symbol* arg1, symbolType type);
    string generateLabel();

    symbol* math_op(operation op, symbol* arg1, symbol* arg2);
    symbol* bit_op(operation op, symbol* arg1, symbol* arg2);
    symbol* unary_op(operation op, symbol* arg1);
    void assign_op(operation op, symbol* arg1, symbol* arg2);
    symbol* logic_op(operation op, symbol* arg1, symbol* arg2);
    symbol* rel_op(operation op, symbol* arg1, symbol* arg2);
    void jump_cond_op(symbol* arg1, string label, bool onTrue);
    void jump_uncond_op(string label);
    void declare_func_op(symbol* funcPrototype, vector<symbol*> args);
    void return_op(symbol* arg1, symbolType returnType);
    symbol* call_func_op(symbol* funcPrototype, vector<symbol*> args);

    void cleanUp();
};