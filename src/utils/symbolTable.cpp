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
        cout<<"1"<<endl;
        newTable->parent = current;
        symbolTableAdj[current->scope].push_back(newTable);
        current = newTable;
        cout<< "2"<<endl;
        symbolTableAdj.push_back(vector<symbolTable*>());
        cout<< "3"<<endl;
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
symbol* symbolTable::addOrUpdateSymbol(string name, symbolType type, constNode* value, bool isConst, bool isInitialization) {
    cout<< "Adding or updating symbol" << endl;
    cout<< "Symbol name: " << name << endl;
    cout<< "Symbol type: " << symbolTypeName[type] << endl;
    cout<< "Symbol value: " << value->type << endl;
    cout<< "Symbol isConst: " << isConst << endl;
    cout<< "Symbol isInitialization : " << isInitialization << endl;
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
                    string error = "Error: Symbol " + name + " is a constant, you can't update it.";
                    yyerror(error.c_str());
                    return NULL;
                }
                else if(foundSymbol->second.value->type != value->type) {
                    string error = "Error: Symbol " + name + " is of type " + symbolTypeName[foundSymbol->second.value->type] + ", you can't update it with a value of type " + symbolTypeName[value->type];
                    yyerror(error.c_str());
                    return NULL;
                }
                else {
                    foundSymbol->second.value = value;
                    return &foundSymbol->second;
                }
            }
        }

        root = root->parent;
        firstIteration = false;
    } 

    // if the symbol is not found in any of the parent scopes, new symbol
    if(type == UNKNOWN) {
        string error = "Error: Symbol " + name + " must be declared first.";
        yyerror(error.c_str());
        return NULL;
    }
    else if (type != value->type && isInitialization) {
        string error = "Error: Symbol " + name + " is of type " + symbolTypeName[type] + ", you can't assign a value of type " + symbolTypeName[value->type];
        yyerror(error.c_str());
        return NULL;
    }
    else {
        symbol newSymbol;
        newSymbol.name = name;
        value->type = type;
        newSymbol.value = value;
        newSymbol.isConst = isConst;
        newSymbol.isInitializated = isInitialization;
        current->symbols.insert({name, newSymbol});
        return &current->symbols[name];
    }
    
}

symbol* symbolTable::findSymbol(string name) {
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

void symbolTable::printSymbolTable(symbolTable* root) {
    cout << "\n---------------\n\nScope " << root->scope << ":" << endl;
    for(auto it2 = root->symbols.begin(); it2 != root->symbols.end(); it2++) {
            cout <<"Symbol: " <<it2->second.name << " ";
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
            if(i != NULL) {
                for (auto it = i->symbols.begin(); it != i->symbols.end(); it++) {
                    if(it->second.value != NULL) {
                        delete it->second.value;
                    }
                }
                delete i;
            }
        }
    }
}