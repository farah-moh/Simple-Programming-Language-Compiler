#include "symbolTable.hpp"
#include <fstream>

class QuadHandler {
    ofstream quad_file;
    int tempVarCounter = 0;
public:
    QuadHandler(string file) {
        quad_file = ofstream(file);
    }

    void writeToFile(operation op, symbol* arg1, symbol* arg2, symbol* result);

    void implicitCast(symbol* arg1, symbol* arg2);

    symbol* math_op(operation op, symbol* arg1, symbol* arg2);
    symbol* unary_op(operation op, symbol* arg1);
    void assign_op(operation op, symbol* arg1, symbol* arg2);
    symbol* logic_op(operation op, symbol* arg1, symbol* arg2);
    symbol* bit_op(operation op, symbol* arg1, symbol* arg2);
    symbol* rel_op(operation op, symbol* arg1, symbol* arg2);
};