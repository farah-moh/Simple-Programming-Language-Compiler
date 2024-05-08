#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include "includes.hpp"

using namespace std;

enum symbolType {INTtype, FLOATtype, CHARtype, STRINGtype, BOOLtype, CONSTtype, VOIDtype, UNKNOWN};

class constNode {
public:
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
} ;

class symbol {
public:
    string name;
    constNode* value;
    bool isConst;
    bool isInitializated;

    symbol() {
        name = "";
        isConst = false;
        isInitializated = false;
    }

    symbol(string name, constNode* value, bool isConst, bool isInitializated) {
        this->name = name;
        this->value = value;
        this->isConst = isConst;
        this->isInitializated = isInitializated;
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
    map<string, symbol> symbols;
    symbolTable *parent;

    symbolTable();

    // direction = true means enter a new scope downward, false means leave the current scope and go to the parent scope
    void changeScope(bool direction);

    struct symbol* addOrUpdateSymbol(string name, symbolType type, constNode* value, bool isConst, bool isInitialization);

    struct symbol* findSymbol(string name);

    void printSymbolTable(symbolTable* table);

    static void cleanup();

    ~symbolTable();
};

