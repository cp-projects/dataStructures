#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#include "right_degen_dbl.h"


typedef struct right_degen_bst_dbl{
    double* val;
    right_degen_bst_dbl_t *right, *left, *prev;
}right_degen_bst_dbl_t;


typedef struct right_degen_bst{
    right_degen_bst_dbl_t* root;
    size_t len;
} right_degen_bst_t;


right_degen_bst_t* create_tree_r_dg_bst_dbl(){
    right_degen_bst_t* tree = (right_degen_bst_t*) malloc(sizeof(right_degen_bst_t));
    tree->len = 0;
    tree->root = NULL;
    return tree;        
}

size_t ret_len_r_dg_bst_dbl(right_degen_bst_t* tree){
        return tree->len;
}


void insert_r_dg_bst_dbl(right_degen_bst_t* tree, double val){

   //create new node
   right_degen_bst_dbl_t* new_node = (right_degen_bst_dbl_t*) malloc(sizeof(right_degen_bst_dbl_t));
   new_node->val = (double*) malloc(sizeof(double));
   *(new_node->val) = val;
   
   new_node->right = NULL;
   new_node->left = NULL;

   //if tree is  empty
   if(!(tree->root)){
       new_node->prev = tree->root;
       tree->root = new_node;
       (tree->len)++;
       return;
      }

   //if not empty, finding where to insert
   right_degen_bst_dbl_t* pos = tree->root;

   //breaking on the node to insert on
   while(pos){
	   
       if(!(pos->right) || !(pos->left))
           break; 

       if(val < *(pos->val)){
	   pos = pos->left;
           continue;
          }

       if(val >= *(pos->val)){
	   pos = pos->right;
           continue;
	  }
       }
   
   //put on the left if value is less
   if(val < *(pos->val)){
       //new_node->prev = pos;
       pos->left = new_node;
       new_node->prev = pos;
       (tree->len)++;
       return;
      }

    //put on the right if value is more
    if(val > *(pos->val)){       
       //new_node->prev = pos;
       pos->right = new_node;
       new_node->prev = pos;
       (tree->len)++;
       return;
      }

}



void remove_r_dg_bst_dbl(right_degen_bst_t* tree, double val){

    //don't try to remove an empty list
    if(!(tree->root))
       return;

    //defining a position, trace, and parent_trace
    right_degen_bst_dbl_t* pos = tree->root;
    right_degen_bst_dbl_t* trace = tree->root;
    right_degen_bst_dbl_t** parent_trace = &(tree->root);

    //find the node to remove
    while(pos){
       
       if(*(pos->val) == val)
	   break;

       else if(val < *(pos->val)){
           trace = pos;
	   parent_trace = &(pos->left);
	   pos = pos->left;
	   continue;
          }

       else if(val >= *(pos->val)){
	   trace = pos;
           parent_trace = &(pos->right);
           pos = pos->right;
	   continue;
          }
    }

    //freeing that value
    (tree->len)--;
    free(pos->val);

    //remove from right most node
    if(pos->left == NULL){
        *(parent_trace) = pos->right;
	free(pos);
	return;
      }

    //remove from left most node
    if(pos->right == NULL){
        *(parent_trace) = pos->left;
	 free(pos);
	 return;
       }

    //remove in the general case (this will degenerate to the right)
    *parent_trace = pos->right;
    right_degen_bst_dbl_t* leftIter = pos->right;

    while(leftIter->left)
	    leftIter = leftIter->left;

    leftIter->left = pos->left;
    *parent_trace = pos->right;
    free(pos);

    return;
}


static void clear_recursive_helper_r_dg_bst_dbl(right_degen_bst_dbl_t* node){
    if(!node)
        return;
    clear_recursive_helper_r_dg_bst_dbl(node->right);
    clear_recursive_helper_r_dg_bst_dbl(node->left);
    free(node->val);
    free(node);
}

void clear_r_dg_bst_dbl(right_degen_bst_t* tree){
    right_degen_bst_dbl_t* pos = tree->root;
    clear_recursive_helper_r_dg_bst_dbl(pos);
    tree->root = NULL;
    tree->len = 0;
}


void destroy_r_dg_bst_dbl(right_degen_bst_t* tree){
    clear_r_dg_bst_dbl(tree);
    free(tree); 
}


//  FOR DEBUGGING
int main(){

    right_degen_bst_t* my_tree = create_tree_r_dg_bst_dbl();

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

    size_t len = ret_len_r_dg_bst_dbl(my_tree);
    printf("The Length is %ld\n", len);

    destroy_r_dg_bst_dbl(my_tree);


return 0;
}

