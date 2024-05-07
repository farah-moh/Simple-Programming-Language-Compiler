#include "symbolTable.h"
#include <iostream>
#include <string>
#include <vector>
#include <map>

using namespace std;

struct symbol {
    string name;
    typeAndValue value;
    bool isConst;
    bool isInitializated;
};

struct symbolTable {
    map<string, symbol> symbols;
    symbolTable *parent;
};

vector<vector<symbolTable*>> symbolTableAdj;

symbolTable* current;
int numScopes = 0;

// direction = true means enter a new scope downward, false means leave the current scope and go to the parent scope
void leaveCurrentScope(bool direction) {
    if (direction == 1) {
        symbolTable* newTable = new symbolTable();
        newTable->parent = current;
        current = newTable;
        symbolTableAdj[numScopes].push_back(newTable);
        symbolTableAdj.push_back(vector<symbolTable*>());
        numScopes++;
    } else {
        current = current->parent;
    }
}

/*
type: declaration type of the symbol
value: value of the symbol to be updated
*/

symbol* addSymbol(char* name, symbolType type, typeAndValue value, bool isConst, bool isInitialization) {
    std::string str(name);
    symbolTable *root = current;
    bool firstIteration = true;
    while (root != NULL) {
        auto foundSymbol = root->symbols.find(name);
        if(foundSymbol != root->symbols.end()) {
            // if it is a declaration
            if(type != UNKNOWN) {
                if(firstIteration) {
                    cout << "Error: Symbol " << name << " already exists in this scope." << endl;
                    return NULL;
                } 
                else {
                    symbol newSymbol;
                    newSymbol.name = name;
                    newSymbol.value = value;
                    newSymbol.isConst = isConst;
                    newSymbol.isInitializated = isInitialization;
                    root->symbols.insert({name, newSymbol});
                    return &root->symbols[name];
                }
            }
            // if it is a reference
            else {
                if(foundSymbol->second.isConst) {
                    cout << "Error: Symbol " << name << " is a constant, you can't update it." << endl;
                    return NULL;
                }
                else if(foundSymbol->second.value.type != value.type) {
                    cout << "Error: Symbol " << name << " is of type " << foundSymbol->second.value.type << ", you can't update it with a value of type " << value.type << endl;
                    return NULL;
                }
                else {
                    foundSymbol->second.value = value;
                    return &foundSymbol->second;
                }
            }
        }

        root = root->parent;
    } 

    // if the symbol is not found in any of the parent scopes, new symbol
    if(type == UNKNOWN) {
        cout << "Error: Symbol " << name << " must be declared first." << endl;
        return NULL;
    }
    else if (type != value.type && isInitialization) {
        cout << "Error: Symbol " << name << " is of type " << type << ", you can't assign a value of type " << value.type << endl;
        return NULL;
    }
    else {
        symbol newSymbol;
        newSymbol.name = name;
        value.type = type;
        newSymbol.value = value;
        newSymbol.isConst = isConst;
        newSymbol.isInitializated = isInitialization;
        current->symbols.insert({name, newSymbol});
        return &current->symbols[name];
    }
    
}

symbol* findSymbol(char* name) {
    symbolTable *root = current;
    while (root != NULL) {
        auto foundSymbol = root->symbols.find(name);
        if(foundSymbol != root->symbols.end()) {
            if(foundSymbol->second.isInitializated == true) {
                cout << "Symbol " << name << " found in scope " << numScopes - 1 << endl;
                return &foundSymbol->second;
            }
            else {
                cout << "Error: Symbol " << name << " is not initialized." << endl;
                return NULL;
            }
        }
        root = root->parent;
    }
    cout << "Error: Symbol " << name << " not found." << endl;
    return NULL;
}

void printSymbolTable() {
    cout << "Symbol Table:" << endl;
    for(int i = 0; i < numScopes; i++) {
        cout << "Scope " << i << ":" << endl;
        for(auto it = symbolTableAdj[i].begin(); it != symbolTableAdj[i].end(); it++) {
            for(auto it2 = (*it)->symbols.begin(); it2 != (*it)->symbols.end(); it2++) {
                cout << it2->second.name << " ";
            }
            cout << endl;
        }
    }
}