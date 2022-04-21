#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "doubly_flt.h"


typedef struct doubly_flt{
    float* val;
    doubly_flt_t *next, *prev;
}doubly_flt_t;


typedef struct doubly{
    doubly_flt_t* head;
    size_t len;
} doubly_t;


doubly_t* create_list(){
    doubly_t* list = (doubly_t*) malloc(sizeof(doubly_t));
    list->len = 0;
    list->head = NULL;
    return list;        
}

size_t ret_len(doubly_t* list){
	return list->len;
}

void clear_list(doubly_t* list){

     doubly_flt_t* pos;
     pos = list->head;

     doubly_flt_t* swap;
     swap = list->head;

     while(pos){

         if(pos->next){
             swap = pos->next;      
	     free(pos->val);
             pos->val = NULL;
	     free(pos);
             
	     --(list->len);
	     
	     pos = swap;
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


void push(doubly_t* list, const float val){

    doubly_flt_t* old_head = list->head;	
	
    doubly_flt_t* new_node = (doubly_flt_t*) malloc(sizeof(doubly_flt_t));
    new_node -> val = (float*) malloc(sizeof(float));
    *(new_node->val) = val;

    new_node->next = list->head;
    list->head = new_node;
    if(old_head)
      old_head->prev = new_node;
    
    (list->len)++;
    return;
}

float pop(doubly_t* list){

    doubly_flt_t* remove_node;
    remove_node = list->head; 

    float val = *(remove_node->val);
    list->head = remove_node->next;   
    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return val;
}

//just an alias of push, because in both lifo and fifo the "in" is the same
//(verify this later, but I can't see why it wouldn't be)
void enqueue(doubly_t* list, const float val){
    
    doubly_flt_t* old_head = list->head;
    
    doubly_flt_t* new_node = (doubly_flt_t*) malloc(sizeof(doubly_flt_t));
    new_node -> val = (float*) malloc(sizeof(float));
    *(new_node->val) = val;

    new_node->next = list->head;
    list->head = new_node;
    if(old_head)
      old_head->prev = new_node;

    (list->len)++;
    return;
}


float dequeue(doubly_t* list){

    doubly_flt_t* remove_node;
    remove_node = list->head;

    while(remove_node){
    if(remove_node->next)    
        remove_node = remove_node->next;
    else
        break;
    }
    
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
    
    remove_node->prev->next = remove_node->next;
    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return val;

}
