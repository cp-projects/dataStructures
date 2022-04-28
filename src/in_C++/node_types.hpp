#pragma once

#include <string>
/*
 *
 * Literal type Identifier for each list/node
 *
 * */
typedef enum list_type{
   TOT_L,
   DBL_L,
   INT_L,
   FLT_L,
   STR_L,
   VOID_L,
}list_type_t;



/*
 *
 * Basic (single value)
 *
 * */

struct node_dbl{
    double* val;
    node_dbl *next;
    const list_type_t type = DBL_L;
};

struct node_int{
    int* val;
    node_int *next;
    const list_type_t type = INT_L;
};

struct node_flt{
    float* val;
    node_flt *next;
    const list_type_t type = FLT_L;
};

struct node_str{
    std::string* val;
    node_str *next;
    const list_type_t type = STR_L;
};

struct node_void{
    void** val;
    node_void *next;
    const list_type_t type = VOID_L;
    list_type_t* dereference_type;
};

/*
 *
 * This is where to pust key/value nodes ordered pair nodes, cross type mapping nodes etc
 *
 * */

