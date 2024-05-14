#include "symbolTable.hpp"
#include <vector>


symbolTable::symbolTable() {
    this->scope = 0;
}

// direction = true means enter a new scope downward, false means leave the current scope and go to the parent scope
void symbolTable::changeScope(bool direction) {
    cout<< "Changing scope" << endl;
    cout<< "Current scope: " << current->scope << endl;
    if (direction == 1) {
        cout<< "Entering new scope" << endl;
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
    cout<< "New scope: " << current->scope << endl;
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
                    string error = "Error: Symbol " + name + " already exists in this scope.";
                    yyerror(error.c_str());
                    return NULL;
                } 
                else {
                    symbol* newSymbol =  new symbol(name, type, isConst, isInitialization);
                    root->symbols.insert({name, newSymbol});
                    return root->symbols[name];
                }
            }
            // if it is a reference
            else {
                if(foundSymbol->second->isConst) {
                    string error = "Error: Symbol " + name + " is a constant, you can't update it.";
                    yyerror(error.c_str());
                    return NULL;
                }
                else {
                    cout<<"Found symbol in scope "<<numScopes<<endl;
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
        string error = "Error: Symbol " + name + " must be declared first.";
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
    cout<< "Setting symbol " << sym->name << " as used." << endl;
    sym->isUsed = true;
    return sym;
}

symbol* symbolTable::findSymbol(string name) {
    symbolTable *root = current;
    while (root != NULL) {
        auto foundSymbol = root->symbols.find(name);
        if(foundSymbol != root->symbols.end()) {
            if(foundSymbol->second->isInitializated == true) {
                cout << "Symbol " << name << " found in scope " << numScopes << endl;
                return foundSymbol->second;
            }
            else {
                string error = "Error: Symbol " + name + " is not initialized.";
                yyerror(error.c_str());
                return NULL;
            }
        }
        root = root->parent;
    }
    string error = "Error: Symbol " + name + " is not declared.";
    yyerror(error.c_str());
    return NULL;
}

void symbolTable::printSymbolTable(symbolTable* root) {
    cout << "\n---------------\n\nScope " << root->scope << ":" << endl;
    for(auto it2 = root->symbols.begin(); it2 != root->symbols.end(); it2++) {
            cout <<"Symbol: " <<it2->second->name << " ";
            if(it2->second->isUsed == false) {
                string error = "Warning: Symbol " +it2->second->name+ " is declared but not used.";
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

void symbolTable::cleanup() {
    for(int i = 0; i <= numScopes; i++) {
        for(auto i : symbolTableAdj[i]) {
            if(i) delete i;
        }
    }
}