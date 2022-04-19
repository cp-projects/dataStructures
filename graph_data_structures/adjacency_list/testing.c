#include <stddef.h>
#include "../../tier_1/tier_1.h"

typedef doubly_dbl_t vertex_t;

typedef struct edge{
    
    double math_edge[2];
    
    double* edge_from;
    double* edge_to;

    edge_t* prev;
    edge_t* next;

}edge_t;


typedef struct edge_list{

    edge_t* head;
    edge_t* tail;
    size_t len;

}edge_list_t;



int main(){

doubly_t* my_list = create_list_dbl_dbl();

destroy_list_dbl_dbl(my_list);

return 0;
}
