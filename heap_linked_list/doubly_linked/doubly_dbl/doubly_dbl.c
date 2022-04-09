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


size_t ret_len(doubly_t* list){
	return list->len;
}


void clear_list(doubly_t* list){

     doubly_dbl_t* pos = list->head;
     
     doubly_dbl_t* head = list->head;
     doubly_dbl_t* tail = list->tail;

     int len = list->len;
  
     for(int i = 0; i < len-1; i++){
         pos = pos->next;
	 pos->prev->next = pos->next;
	 free(pos->val);
	 free(pos);
	 (list->len)--;
      }

      list->head = NULL;
      list->tail = NULL;
      list->len = 0;

      free(head->val);
      free(head);

      free(tail->val);
      free(tail);
}

         /*
	 if(!pos)
             break;

         if(i < (list->len -1)){
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

      }

    free((void*)list);
    return;
}
*/

void push(doubly_t* list, const double val){

    //create node
    doubly_dbl_t* new_node = (doubly_dbl_t*) malloc(sizeof(doubly_dbl_t));
    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;

    //connect new node to list
    new_node->prev = NULL;
    new_node->next = list->head;

    //update list len
    (list->len)++;

    //prevously empty list
    if(list->len == 1)
        list->tail = new_node;

    //nonempty
    else
        list->head->prev = new_node;
    
    //for both empy and nonempty
    list->head = new_node;
    return;
}

double pop(doubly_t* list){

    doubly_dbl_t* remove_node = list->head; 

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
    
    //create node
    doubly_dbl_t* new_node = (doubly_dbl_t*) malloc(sizeof(doubly_dbl_t));
    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;

    //connect new node to list
    new_node->prev = NULL;
    new_node->next = list->head;

    //update list len
    (list->len)++;

    //prevously empty list
    if(list->len == 1)
        list->tail = new_node;

    //nonempty
    else
        list->head->prev = new_node;

    //for both empy and nonempty
    list->head = new_node;
    return;

}


double dequeue(doubly_t* list){

    doubly_dbl_t* remove_node = list->tail;
    double val = *(remove_node->val);

    // Last remaining node
    if(list->len == 1){
        list->head = remove_node->next;
        free(remove_node->val);
        free(remove_node);
        (list->len)--;
        return val;
    }

    // not the final node
    list->tail = remove_node->prev;
    remove_node->prev->next = remove_node->next;
    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return val;
}

doubly_dbl_t* itr_forward(doubly_t* list, double breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag){

    if(break_on_valFlag == 1 && break_on_indexFlag == 1)
	    exit(1);

    doubly_dbl_t* itr = list->head;

    for(int i = 0; i < list->len; i++){
        if(printFlag == 1)
            printf("%lf\n", *(itr->val));
	if(break_on_indexFlag == 1 && i == breakIndex)
		break;
	else if(break_on_valFlag == 1 && *(itr->val) == breakVal)
		break;

	itr = itr->next;
    }
return itr;
}

doubly_dbl_t* itr_backward(doubly_t* list, double breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag){

    if(break_on_valFlag == 1 && break_on_indexFlag == 1)
            exit(1);
    
    assert(list->tail);
    doubly_dbl_t* itr = list->tail;

    for(int i = list->len; i > 0; i--){
        if(printFlag == 1)
            printf("%lf\n", *(itr->val));
        if(break_on_indexFlag == 1 && i == breakIndex)
                break;
        else if(break_on_valFlag == 1 && *(itr->val) == breakVal)
                break;

        itr = itr->prev;
    }
return itr;
}



void insert_at_head(doubly_t* list, const double val){

    //create node
    doubly_dbl_t* new_node = (doubly_dbl_t*) malloc(sizeof(doubly_dbl_t));
    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;

    //connect new node to list
    new_node->prev = NULL;
    new_node->next = list->head;

    //update list len
    (list->len)++;

    //prevously empty list
    if(list->len == 1)
        list->tail = new_node;

    //nonempty
    else
        list->head->prev = new_node;

    //for both empy and nonempty
    list->head = new_node;
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

    doubly_dbl_t* old_tail = list->tail;

    doubly_dbl_t* new_node = (doubly_dbl_t*) malloc(sizeof(doubly_dbl_t));
    new_node -> val = (double*) malloc(sizeof(double));
    *(new_node->val) = val;
    
    old_tail->next = new_node;
    new_node->prev = old_tail;
    list->tail = new_node;
    (list->len)++;
    return;
}



double remove_at_tail(doubly_t* list){

    doubly_dbl_t* remove_node = list->tail;
    double val = *(remove_node->val);

    // Last remaining node
    if(list->len == 1){
        list->head = remove_node->next;
        free(remove_node->val);
        free(remove_node);
        (list->len)--;
        return val;
    }

    // not the final node
    list->tail = remove_node->prev;
    remove_node->prev->next = remove_node->next;
    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return val;

}


