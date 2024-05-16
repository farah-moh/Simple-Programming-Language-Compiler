#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "includes.hpp"

using namespace std;

#ifndef SYMBOLTABLE_HPP
#define SYMBOLTABLE_HPP

enum symbolType {FLOATtype, INTtype, BOOLtype, CHARtype, STRINGtype, CONSTtype, VOIDtype, UNKNOWN};
const vector<string> symbolTypeName = {"FLOAT", "INT", "BOOL", "CHAR", "STRING", "CONST", "VOID", "UNKNOWN"};

class constNode {
public:
    constNode(symbolType type) {
        this->type = type;
    }
    constNode(symbolType type, string value) {
        this->type = type;
        switch (type) {
            case INTtype:
                this->ival = stoi(value);
                break;
            case FLOATtype:
                this->fval = stof(value);
                break;
            case CHARtype:
                this->cval = value[0];
                break;
            case STRINGtype:
                this->sval = value;
                break;
            default:
                break;
        }
    }
    constNode() {
        type = UNKNOWN;
    }
    symbolType type;
    union {
        char cval;
        string sval;
        int ival;
        float fval;
    };
    ~constNode() {}
};

class symbol {
public:
    string name;
    symbolType type;
    bool isConst;
    bool isInitializated;
    bool isUsed;

    symbol() {
        name = "";
        isConst = false;
        isInitializated = false;
        isUsed = false;
    }

    symbol(string name, symbolType type, bool isConst, bool isInitializated, bool isUsed = false) {
        this->name = name;
        this->type = type;
        this->isConst = isConst;
        this->isInitializated = isInitializated;
        this->isUsed = isUsed;
    }
};

struct nonConstNode {
    char *name;
    int noOperands;
    struct myNode *operands[1];
};

struct node {
    bool isConst;
    union {
        struct nonConstNode nonConstNode;
        constNode constNode;
    };
};

class symbolTable {
public:
    static symbolTable* current;
    static vector<vector<symbolTable*>> symbolTableAdj;
    static int numScopes;
    int scope;
    map<string, symbol*> symbols;
    symbolTable *parent;

    symbolTable();

    // direction = true means enter a new scope downward, false means leave the current scope and go to the parent scope
    void changeScope(bool direction);

    struct symbol* addOrUpdateSymbol(string name, symbolType type, symbol* value, bool isConst, bool isInitialization);

    symbol* setUsed(symbol* sym);

    struct symbol* findSymbol(string name);

    void printSymbolTable(symbolTable* table);

    static void cleanUp();

    ~symbolTable();
};

#endif