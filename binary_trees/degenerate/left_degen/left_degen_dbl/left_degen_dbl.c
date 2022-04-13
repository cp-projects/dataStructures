#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "left_degen_dbl.h"


typedef struct singly_dbl{
    double* val;
    singly_dbl_t *next;
}singly_dbl_t;


typedef struct singly{
    singly_dbl_t* head;
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

}
