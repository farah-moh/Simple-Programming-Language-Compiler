#include "symbolTableDefs.h"
#include <stdbool.h>
#ifdef __cplusplus
extern "C" {
#endif

void leaveCurrentScope(bool direction);

struct symbol* addSymbol(char* name, symbolType type, typeAndValue value, bool isConst, bool isInitialization);

struct symbol* findSymbol(char* name);

void printSymbolTable();
#ifdef __cplusplus
} //end extern "C"
#endif