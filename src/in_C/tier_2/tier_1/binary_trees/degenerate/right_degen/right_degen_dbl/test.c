#include <stdio.h>
#include <stdlib.h>
#include "right_degen_dbl.h"

int main(){

right_degen_bst_t* my_tree = create_tree_r_dg_bst_dbl();

size_t len = ret_len_r_dg_bst_dbl(my_tree);
printf("The Length is %ld\n", len);

insert_r_dg_bst_dbl(my_tree, 10);
insert_r_dg_bst_dbl(my_tree, 5);
insert_r_dg_bst_dbl(my_tree, 15);
insert_r_dg_bst_dbl(my_tree, 8);
insert_r_dg_bst_dbl(my_tree, 12);
insert_r_dg_bst_dbl(my_tree, 7);
insert_r_dg_bst_dbl(my_tree, 2);
insert_r_dg_bst_dbl(my_tree, 18);

/*
remove_r_dg_bst_dbl(my_tree, 10);
remove_r_dg_bst_dbl(my_tree, 5);
remove_r_dg_bst_dbl(my_tree, 15);
*/

len = ret_len_r_dg_bst_dbl(my_tree);
printf("The Length is %ld\n", len);

destroy_r_dg_bst_dbl(my_tree);

printf("testing testing 123\n");

return 0;
}

