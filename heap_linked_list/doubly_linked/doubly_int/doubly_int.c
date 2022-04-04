#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "doubly_int.h"


typedef struct doubly_int{
    int* val;
    doubly_int_t *next, *prev;
}doubly_int_t;


typedef struct doubly{
    doubly_int_t* head;
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

     doubly_int_t* pos;
     pos = list->head;

     //doubly_int_t* trace;
     //trace = list->head;

     while(pos){

         if(pos != list->head){
             pos->prev->next = pos->next;      
	     free(pos->val);
	     free(pos);
	     --(list->len); 
            }

         else{
	     free(pos->val);
             free(pos);
	     pos = NULL;
	     --(list->len);
            }
	 pos = pos->next;
        } //end while
 
    free((void*)list);
    return;
}


void push(doubly_t* list, int val){

    doubly_int_t* new_node = (doubly_int_t*) malloc(sizeof(doubly_int_t));
    doubly_int_t* head_node = list->head;

    new_node -> val = (int*) malloc(sizeof(int));
    *(new_node->val) = val;

    //head_node->prev = new_node;
    new_node->next = head_node;;
    
    list->head = new_node;
    (list->len)++;
    return;
}

int pop(doubly_t* list){

    doubly_int_t* remove_node;
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
void enqueue(doubly_t* list, int val){
    
    doubly_int_t* head_node = list->head;
    doubly_int_t* new_node = (doubly_int_t*) malloc(sizeof(doubly_int_t));
    
    head_node->prev = new_node;

    new_node -> val = (int*) malloc(sizeof(int));
    *(new_node->val) = val;

    new_node->next = list->head;
    head_node->prev = new_node;

    list->head = new_node;
    (list->len)++;
    return;
}


int dequeue(doubly_t* list){

    doubly_int_t* remove_node;
    remove_node = list->head;

    doubly_int_t* trace;
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

