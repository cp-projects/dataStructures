#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>

#include "doubly_dbl.h"


typedef struct doubly_dbl{
    double* val;
    doubly_dbl_t *next, *prev;
}doubly_dbl_t;


typedef struct doubly{
    doubly_dbl_t* head;
    doubly_dbl_t* tail;
    size_t len;
} doubly_t;


doubly_t* create_list(){
    doubly_t* list = (doubly_t*) malloc(sizeof(doubly_t));
    list->len = 0;
    list->head = NULL;
    list->tail = NULL;
    return list;        
}

doubly_dbl_t* create_node(doubly_dbl_t* new_node, double val){

    new_node = (doubly_dbl_t*) malloc(sizeof(doubly_dbl_t));
    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;

    return new_node;
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

         if(pos->next){  //VALGRIND PROBLEM 1
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

    doubly_dbl_t* New_node;
    doubly_dbl_t* new_node = create_node(New_node, val);

    new_node->next = list->head;
    list->head = new_node;

    if(old_head)
      old_head->prev = new_node;
    
    if(list->tail)
        list->tail = list->tail;
    else
        list->tail = old_head;

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
    
    doubly_dbl_t* New_node;
    doubly_dbl_t* new_node = create_node(New_node, val);

    new_node->next = list->head;
    list->head = new_node;

    if(old_head)
      old_head->prev = new_node;

    if(list->tail)
        list->tail = list->tail;
    else
        list->tail = old_head;

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
	list->tail = NULL;
        list->len = 0;
	free(remove_node->val);
	free(remove_node);
	return val;
    }
    
    remove_node->prev->next = remove_node->next;
    list->tail = remove_node->prev;

    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return val;

}


doubly_dbl_t* itr_forward(doubly_t* list, double breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag){

    if(break_on_valFlag == 1 && break_on_indexFlag == 1)
	    exit(1);

    doubly_dbl_t* itr;

    int i = 0;                     //VALGRIND PROBLEM 3
    for(itr = list->head; itr; itr = itr->next){
        if(printFlag == 1)
            printf("%lf\n", *(itr->val));
	if(break_on_indexFlag == 1 && i == breakIndex)
		break;
	else if(break_on_valFlag == 1 && *(itr->val) == breakVal)
		break;
	i++;
    }
return itr;
}

doubly_dbl_t* itr_backward(doubly_t* list, double breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag){

    if(break_on_valFlag == 1 && break_on_indexFlag == 1)
            exit(1);
    assert(list->tail);

    doubly_dbl_t* itr = list->tail;

    int i = 0;                     //VALGRIND PROBLEM 2
    for(itr = list->tail; itr; itr = itr->prev){
        if(printFlag == 1)
            printf("%lf\n", *(itr->val));
        if(break_on_indexFlag == 1 && i == breakIndex)
                break;
        else if(break_on_valFlag == 1 && *(itr->val) == breakVal)
                break;
        i++;
    }
return itr;
}



void insert_at_head(doubly_t* list, const double val){

    doubly_dbl_t* old_head = list->head;

    doubly_dbl_t* New_node;
    doubly_dbl_t* new_node = create_node(New_node, val);

    new_node->next = list->head;
    list->head = new_node;

    if(old_head)
      old_head->prev = new_node;

    if(list->tail)
        list->tail = list->tail;
    else
        list->tail = old_head;

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
        if(itr->next) //VALGRIND PROBLEM 4
            itr = itr->next;
        else
            break; 
    }

    if(!(itr))
        exit(1);

    doubly_dbl_t* New_node;  //VALGRIND PROBLEM VAL CREATED
    doubly_dbl_t* new_node = create_node(New_node, val);
    
    
    itr->next = new_node;

    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;
 
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


