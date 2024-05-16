#include "symbolTable.hpp"
#include <vector>


symbolTable::symbolTable() {
    this->scope = 0;
}

// direction = true means enter a new scope downward, false means leave the current scope and go to the parent scope
void symbolTable::changeScope(bool direction) {
    if (direction == 1) {
        symbolTable* newTable = new symbolTable();
        newTable->parent = current;
        symbolTableAdj[current->scope].push_back(newTable);
        current = newTable;
        symbolTableAdj.push_back(vector<symbolTable*>());
        numScopes++;
        newTable->scope = numScopes;
    } else {
        current = current->parent;
    }
    cout<< "Entered new scope: " << current->scope << endl;
}

/*
type: declaration type of the symbol
value: value of the symbol to be updated
*/
symbol* symbolTable::addOrUpdateSymbol(string name, symbolType type, symbol* value, bool isConst, bool isInitialization) {
    symbolTable *root = current;
    bool firstIteration = true;
    while (root != NULL) {
        auto foundSymbol = root->symbols.find(name);
        if(foundSymbol != root->symbols.end()) {
            // if it is a declaration
            if(type != UNKNOWN) {
                if(firstIteration) {
                    string error = "Symbol " + name + " already exists in this scope.";
                    yyerror(error.c_str());
                    return NULL;
                } 
                else {
                    symbol* newSymbol =  new symbol(name, type, isConst, isInitialization);
                    current->symbols.insert({name, newSymbol});
                    return current->symbols[name];
                }
            }
            // if it is a reference
            else {
                if(foundSymbol->second->isConst) {
                    string error = "Symbol " + name + " is a constant, you can't update it.";
                    yyerror(error.c_str());
                    return NULL;
                }
                else {
                    foundSymbol->second->isInitializated = isInitialization;
                    return foundSymbol->second;
                }
            }
        }

        root = root->parent;
        firstIteration = false;
    } 
    delete root;

    // if the symbol is not found in any of the parent scopes, new symbol
    if(type == UNKNOWN) {
        string error = "Symbol " + name + " must be declared first.";
        yyerror(error.c_str());
        return NULL;
    }
    else {
        symbol* newSymbol =  new symbol(name, type, isConst, isInitialization);
        current->symbols.insert({name, newSymbol});
        return current->symbols[name];
    }
    
}

symbol* symbolTable::setUsed(symbol* sym) {
    sym->isUsed = true;
    return sym;
}

symbol* symbolTable::findSymbol(string name) {
    symbolTable *root = current;
    while (root != NULL) {
        auto foundSymbol = root->symbols.find(name);
        if(foundSymbol != root->symbols.end()) {
            if(foundSymbol->second->isInitializated == true) {
                return foundSymbol->second;
            }
            else {
                string error = "Symbol " + name + " is not initialized.";
                yyerror(error.c_str());
                return NULL;
            }
        }
        root = root->parent;
    }
    string error = "Symbol " + name + " is not declared.";
    yyerror(error.c_str());
    return NULL;
}

void symbolTable::printSymbolTable(symbolTable* root) {
    cout << "\n---------------\n\nScope " << root->scope << ":" << endl;
    for(auto it2 = root->symbols.begin(); it2 != root->symbols.end(); it2++) {
            if(it2->second->isConst) cout<<"const ";
            cout<<symbolTypeName[it2->second->type] << " " << it2->second->name << endl;
            if(it2->second->isUsed == false) {
                string error = "Symbol ** " +it2->second->name+ " ** is declared but not used.";
                yywarn(error.c_str());
            }
    }
    cout<<endl<<endl;
    for(auto it = symbolTableAdj[root->scope].begin(); it != symbolTableAdj[root->scope].end(); it++) {
        printSymbolTable(*it);
    }
}

symbolTable::~symbolTable() {
    
}

void symbolTable::cleanUp() {
    for(int i = 0; i <= numScopes; i++) {
        for(auto i : symbolTableAdj[i]) {
            if(i) delete i;
        }
    }
}