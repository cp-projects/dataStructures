#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "doubly_dbl.h"


typedef struct doubly_dbl{
    double* val;
    doubly_dbl_t *next, *prev;
}doubly_dbl_t;


typedef struct doubly{
    doubly_dbl_t* head;
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

     doubly_dbl_t* pos;
     pos = list->head;

     doubly_dbl_t* swap;
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


void push(doubly_t* list, const double val){

    doubly_dbl_t* old_head = list->head;	
	
    doubly_dbl_t* new_node = (doubly_dbl_t*) malloc(sizeof(doubly_dbl_t));
    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;

    new_node->next = list->head;
    list->head = new_node;
    if(old_head)
      old_head->prev = new_node;
    
    (list->len)++;
    return;
}

double pop(doubly_t* list){

    doubly_dbl_t* remove_node;
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
void enqueue(doubly_t* list, const double val){
    
    doubly_dbl_t* old_head = list->head;
    
    doubly_dbl_t* new_node = (doubly_dbl_t*) malloc(sizeof(doubly_dbl_t));
    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;

    new_node->next = list->head;
    list->head = new_node;
    if(old_head)
      old_head->prev = new_node;

    (list->len)++;
    return;
}


double dequeue(doubly_t* list){

    doubly_dbl_t* remove_node;
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





void insert_at_head(doubly_t* list, const double val){

    doubly_dbl_t* old_head = list->head;

    doubly_dbl_t* new_node = (doubly_dbl_t*) malloc(sizeof(doubly_dbl_t));
    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;

    new_node->next = list->head;
    list->head = new_node;
    if(old_head)
      old_head->prev = new_node;

    (list->len)++;
    return;
}


double remove_at_head(doubly_t* list){

    doubly_dbl_t* remove_node;
    remove_node = list->head;

    double val = *(remove_node->val);
    list->head = remove_node->next;
    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return val;
}


void insert_at_tail(doubly_t* list, const double val){

    doubly_dbl_t* itr;
    itr = list->head;

    while(itr){
    if(itr->next)
        itr = itr->next;
    else
        break;
    }

    if(!(itr))
        exit(1);

    doubly_dbl_t* new_node; 
    itr->next = (doubly_dbl_t*) malloc(sizeof(doubly_dbl_t));
    new_node = itr->next;

    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;
 
    //itr->next = new_node;
    new_node->prev = itr;
    if(itr->next)
        itr->next = new_node;

    (list->len)++;
    return;
}



double remove_at_tail(doubly_t* list){

    doubly_dbl_t* remove_node;
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


