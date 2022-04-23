#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "right_degen_void.h"


typedef struct singly_int{
    int* val;
    singly_int_t *next;
}singly_int_t;


typedef struct singly{
    singly_int_t* head;
    size_t len;
} singly_t;


singly_t* create_list(){
    singly_t* list = (singly_t*) malloc(sizeof(singly_t));
    list->len = 0;
    list->head = NULL;
    return list;        
}

size_t ret_len(singly_t* list){
        return list->len;
}

void clear_list(singly_t* list){

     singly_int_t* pos;
     pos = list->head;

     singly_int_t* trace;
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


void push(singly_t* list, const int val){

    singly_int_t* new_node = (singly_int_t*) malloc(sizeof(singly_int_t));
 
    new_node -> val = (int*) malloc(sizeof(int));
    *(new_node->val) = val;
    new_node->next = list->head;
    list->head = new_node;
    (list->len)++;
    return;
}

int pop(singly_t* list){

    singly_int_t* remove_node;
    remove_node = list->head; 

    int val = *(remove_node->val);
    list->head = remove_node->next;   
    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return val;
}

//just an alias of push, because in both lifo and fifo the "in" is the same
//(verify this later, but I can't see why it wouldn't be)
void enqueue(singly_t* list, const int val){
    
    singly_int_t* new_node = (singly_int_t*) malloc(sizeof(singly_int_t));

    new_node -> val = (int*) malloc(sizeof(int));
    *(new_node->val) = val;
    new_node->next = list->head;
    list->head = new_node;
    (list->len)++;
    return;
}


int dequeue(singly_t* list){

    singly_int_t* remove_node;
    remove_node = list->head;

    singly_int_t* trace;
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

    int val = *(remove_node->val);

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
}

