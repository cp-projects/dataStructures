#include <stddef.h>

#include "../../../tier_1/tier_1.h"
#include "dbl_adj_list_dbl.h" 

int main(){

doubly_t* vertex_list = create_list_dbl_dbl();
doubly_t* edge_list = create_list_dbl_op_dbl();

add_n_verticies(vertex_list, 10);
itr_forward_dbl_dbl(vertex_list, 0,0,1,0,0);
itr_backward_dbl_dbl(vertex_list, 0,0,1,0,0);

//adding edges by head and tail
add_edge(edge_list, ret_head_dbl_dbl(vertex_list), ret_tail_dbl_dbl(vertex_list));

//adding edges by index
add_edge(edge_list, itr_forward_dbl_dbl(vertex_list, 0,2,0,0,1), itr_backward_dbl_dbl(vertex_list, 0,2,0,0,1));
add_edge(edge_list, itr_forward_dbl_dbl(vertex_list, 0,3,0,0,1), itr_backward_dbl_dbl(vertex_list, 0,3,0,0,1));
add_edge(edge_list, itr_forward_dbl_dbl(vertex_list, 0,4,0,0,1), itr_backward_dbl_dbl(vertex_list, 0,4,0,0,1));

//adding edges by value
add_edge(edge_list, itr_forward_dbl_dbl(vertex_list, 1,0,0,1,0), itr_backward_dbl_dbl(vertex_list, 1,0,0,1,0));
add_edge(edge_list, itr_forward_dbl_dbl(vertex_list, 2,0,0,1,0), itr_backward_dbl_dbl(vertex_list, 2,0,0,1,0));
add_edge(edge_list, itr_forward_dbl_dbl(vertex_list, 3,0,0,1,0), itr_backward_dbl_dbl(vertex_list, 3,0,0,1,0));

//adding edges by index or value should be the same because index = value whenever add_n_verticies is used

itr_forward_dbl_op_dbl(edge_list, 0, 0, 1, 0, 0);

destroy_list_dbl_dbl(vertex_list);
destroy_list_dbl_op_dbl(edge_list);

return 0;
}

