#include <stddef.h>
#include <stdio.h>

#include "../../../tier_1/tier_1.h"
#include "dbl_adj_list_dbl.h"

typedef doubly_dbl_t struct vertex{
    double* val;
    vertex_t *next, *prev;
}vertex_t;


void add_n_verticies(doubly_t* list, int n){

    for(int i = n; i > 0; i--)
	    push_dbl_dbl(list, i);

}

void add_edge(vertex_t* from_vert, vertex_t* to_vert){

    
    //vertex_t from = *from_vert;
    //double* from_val = from->val;
    
    double to = to_vert->val;

}


int main(){

doubly_t* vertex_list = create_list_dbl_dbl();
doubly_t* edge_list = create_list_dbl_op_dbl();

add_n_verticies(vertex_list, 4);

itr_forward_dbl_dbl(vertex_list, 0,0,1,0,0);

destroy_list_dbl_dbl(vertex_list);
destroy_list_dbl_op_dbl(edge_list);

return 0;
}
