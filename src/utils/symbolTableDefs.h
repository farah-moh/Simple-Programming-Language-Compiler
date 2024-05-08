#pragma once

typedef enum {INTtype, FLOATtype, CHARtype, STRINGtype, BOOLtype, CONSTtype, VOIDtype, UNKNOWN} symbolType;

typedef struct {
    symbolType type;
    union {
        char cval;
        char *sval;
        int ival;
        float fval;
    };
} typeAndValue;