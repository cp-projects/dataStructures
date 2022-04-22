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
       if(val < *(pos->val))
	   pos = pos->left;
       if(val >= *(pos->val))
	   pos = pos->right;
         }
   
   //put on the left if value is less
   if(val < *(pos->val)){
       new_node->prev = pos;
       pos->left = new_node;
       (tree->len)++;
       return;
      }

    //put on the right if value is more
    if(val > *(pos->val)){       
       new_node->prev = pos;
       pos->right = new_node;
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
          }

       else if(val >= *(pos->val)){
	   trace = pos;
           parent_trace = &(pos->right);
           pos = pos->right;
          }
    }

    //freeing that value
    (tree->len)--;
    free(pos->val);

    //remove from right most node
    if(pos->left == NULL){
        *parent_trace = pos->right;
	free(pos);
	return;
      }

    //remove from left most node
    if(pos->right == NULL){
        *parent_trace = pos->left;
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
    clear_recursive_helper_r_dg_bst_dbl(node->left);
    clear_recursive_helper_r_dg_bst_dbl(node->right);
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


/*             FOR DEBUGGING
int main(){

    right_degen_bst_t* my_tree = create_tree_r_dg_bst_dbl();
    insert_r_dg_bst_dbl(my_tree, 10);
    insert_r_dg_bst_dbl(my_tree, 5);

return 0;
}
*/


/*       FOR INSPIRATION
void clear_list(singly_t* list){

     singly_dbl_t* pos;
     pos = list->head;

     singly_dbl_t* trace;
     trace = list->head;

     while(pos){

         if(pos->next){
             trace = pos->next;      
	     free(pos->val);
             pos->val = NULL;
	     free(pos);
             
	     --(list->len);
	     
	     pos = trace;
            }

         else{
	     free(pos->val);
             free(pos);
	     pos = NULL;
            }
        } //end while
 
    free((void*)list);
    return;
}


void push(singly_t* list, const double val){

    singly_dbl_t* new_node = (singly_dbl_t*) malloc(sizeof(singly_dbl_t));
 
    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;
    new_node->next = list->head;
    list->head = new_node;
    (list->len)++;
    return;
}

double pop(singly_t* list){

    singly_dbl_t* remove_node;
    remove_node = list->head; 

    double val = *(remove_node->val);
    list->head = remove_node->next;   
    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return val;
}

//just an alias of push, because in both lifo and fifo the "in" is the same
//(verify this later, but I can't see why it wouldn't be)
void enqueue(singly_t* list, const double val){
    
    singly_dbl_t* new_node = (singly_dbl_t*) malloc(sizeof(singly_dbl_t));

    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;
    new_node->next = list->head;
    list->head = new_node;
    (list->len)++;
    return;
}


double dequeue(singly_t* list){

    singly_dbl_t* remove_node;
    remove_node = list->head;

    singly_dbl_t* trace;
    trace = list->head;

    while(remove_node){
    if(remove_node->next){
	trace = remove_node;    
        remove_node = remove_node->next;
       }
    else
        break;
    }
    
    //maybe make assert statement
    if(!(remove_node->val))
        exit(1);

    double val = *(remove_node->val);

    if(list->len == 1){
        list->head = NULL;
        list->len = 0;
	free(remove_node->val);
	free(remove_node);

	return val;
    }
    
    trace->next = remove_node->next;
    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return val;

}*/
