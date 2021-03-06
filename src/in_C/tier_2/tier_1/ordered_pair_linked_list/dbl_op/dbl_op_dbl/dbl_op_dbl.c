#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stddef.h>

#include "dbl_op_dbl.h"


typedef struct dbl_op_dbl{
    double *X, *Y;
    dbl_op_dbl_t *next, *prev;
}dbl_op_dbl_t;


typedef struct doubly{
    dbl_op_dbl_t* head;
    dbl_op_dbl_t* tail;
    size_t len;
} doubly_t;


doubly_t* create_list_dbl_op_dbl(){
    doubly_t* list = (doubly_t*) malloc(sizeof(doubly_t));
    list->len = 0;
    list->head = NULL;
    list->tail = NULL;
    return list;        
}


size_t ret_len_dbl_op_dbl(doubly_t* list){
	return list->len;
}

double* ret_val_dbl_op_dbl(dbl_op_dbl_t* node){
    static double retVals[2];
    retVals[0] = *(node->X);
    retVals[1] = *(node->Y);
    return retVals;
}

dbl_op_dbl_t* ret_head_dbl_op_dbl(doubly_t* list){
    return list->head;
}

dbl_op_dbl_t* ret_tail_dbl_op_dbl(doubly_t* list){
    return list->tail;
}


void clear_list_dbl_op_dbl(doubly_t* list){

     int len = list->len;	

     if(len == 0)
	     return;

     dbl_op_dbl_t* pos = list->head->next;
     dbl_op_dbl_t* swap = list->head->next;
     
     dbl_op_dbl_t* head = list->head;
     dbl_op_dbl_t* tail = list->tail;
     
     if(len == 1){

	  list->head = NULL;
	  list->tail = NULL;
	  list->len = 0;
	  free(head->X);
	  free(head->Y);
	  free(head);
	  return;
     }
  
     for(int i = 1; i < len-1; i++){
         
	 swap = pos->next;
	 pos->next->prev = pos->prev;
	 pos->prev->next = pos->next;
	 free(pos->X);
	 free(pos->Y);
	 free(pos);
         pos = swap;

	 (list->len)--;
      }

      list->head = NULL;
      list->tail = NULL;
      list->len = 0;

      free(head->X);
      free(head->Y); 
      free(head);
      free(tail->X);
      free(tail->Y);
      free(tail);
}

void destroy_list_dbl_op_dbl(doubly_t* list){
    clear_list_dbl_op_dbl(list);
    free((void*)list);
}


void push_dbl_op_dbl(doubly_t* list, const double X, const double Y){

    //create node
    dbl_op_dbl_t* new_node = (dbl_op_dbl_t*) malloc(sizeof(dbl_op_dbl_t));
    new_node -> X = (double*) malloc(sizeof(double));
    *(new_node->X) = X;
    new_node -> Y = (double*) malloc(sizeof(double));
    *(new_node->Y) = Y;

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

double* pop_dbl_op_dbl(doubly_t* list){

    dbl_op_dbl_t* remove_node = list->head; 

    double X = *(remove_node->X);
    double Y = *(remove_node->Y);
    list->head = remove_node->next;

    free(remove_node->X);
    free(remove_node->Y);
    free(remove_node);
    (list->len)--;

    static double retVals[2];
    retVals[0] = X;
    retVals[1] = Y;
    return retVals;
}

//just an alias of push, because in both lifo and fifo the "in" is the same
//(verify this later, but I can't see why it wouldn't be)
void enqueue_dbl_op_dbl(doubly_t* list, const double X, const double Y){
    
    //create node
    dbl_op_dbl_t* new_node = (dbl_op_dbl_t*) malloc(sizeof(dbl_op_dbl_t));
    new_node -> X = (double*) malloc(sizeof(double));
    *(new_node->X) = X;
    new_node -> Y = (double*) malloc(sizeof(double));
    *(new_node->Y) = Y;

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


double* dequeue_dbl_op_dbl(doubly_t* list){

    dbl_op_dbl_t* remove_node = list->tail;
    double X = *(remove_node->X);
    double Y = *(remove_node->Y);

    static double retVals[2];
    retVals[0] = X;
    retVals[1] = Y;

    // Last remaining node
    if(list->len == 1){
        list->head = remove_node->next;
        free(remove_node->X);
	free(remove_node->Y);
        free(remove_node);
        (list->len)--;
        return retVals;
    }

    // not the final node
    list->tail = remove_node->prev;
    remove_node->prev->next = remove_node->next;
    free(remove_node->X);
    free(remove_node->Y);
    free(remove_node);
    (list->len)--;

    return retVals;
}

dbl_op_dbl_t* itr_forward_dbl_op_dbl(doubly_t* list, double* breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag){

    if(break_on_valFlag == 1 && break_on_indexFlag == 1)
	    exit(1);

    dbl_op_dbl_t* itr = list->head;

    for(int i = 0; i < list->len; i++){
        if(printFlag == 1)
            printf("(%lf, %lf)\n", *(itr->X), *(itr->Y));
	if(break_on_indexFlag == 1 && i == breakIndex)
		break;
	else if(break_on_valFlag == 1 && *(itr->X) == breakVal[0] && *(itr->Y) == breakVal[1])
		break;

	itr = itr->next;
    }
return itr;
}

dbl_op_dbl_t* itr_backward_dbl_op_dbl(doubly_t* list, double* breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag){

    if(break_on_valFlag == 1 && break_on_indexFlag == 1)
            exit(1);
    
    assert(list->tail);
    dbl_op_dbl_t* itr = list->tail;

    for(int i = list->len; i > 0; i--){
        if(printFlag == 1)
            printf("(%lf, %lf)\n", *(itr->X), *(itr->Y));
        if(break_on_indexFlag == 1 && i == breakIndex)
                break;
        else if(break_on_valFlag == 1 && *(itr->X) == breakVal[0] && *(itr->Y) == breakVal[1])
                break;

        itr = itr->prev;
    }
return itr;
}



void insert_at_head_dbl_op_dbl(doubly_t* list, const double X, const double Y){

    //create node
    dbl_op_dbl_t* new_node = (dbl_op_dbl_t*) malloc(sizeof(dbl_op_dbl_t));
    new_node -> X = (double*) malloc(sizeof(double));
    *(new_node->X) = X;
    new_node -> Y = (double*) malloc(sizeof(double));
    *(new_node->Y) = Y;

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


double* remove_at_head_dbl_op_dbl(doubly_t* list){

    dbl_op_dbl_t* remove_node = list->head;

    double X = *(remove_node->X);
    double Y = *(remove_node->Y);
    list->head = remove_node->next;

    free(remove_node->X);
    free(remove_node->Y);
    free(remove_node);
    (list->len)--;

    static double retVals[2];
    retVals[0] = X;
    retVals[1] = Y;
    return retVals;
}


void insert_at_tail_dbl_op_dbl(doubly_t* list, const double X, const double Y){

    dbl_op_dbl_t* old_tail = list->tail;

    dbl_op_dbl_t* new_node = (dbl_op_dbl_t*) malloc(sizeof(dbl_op_dbl_t));
    new_node -> X = (double*) malloc(sizeof(double));
    *(new_node->X) = X;
    new_node -> Y = (double*) malloc(sizeof(double));
    *(new_node->Y) = Y;
    
    old_tail->next = new_node;
    new_node->prev = old_tail;
    list->tail = new_node;
    (list->len)++;
    return;
}



double* remove_at_tail_dbl_op_dbl(doubly_t* list){

    dbl_op_dbl_t* remove_node = list->tail;
    double X = *(remove_node->X);
    double Y = *(remove_node->Y);

    static double retVals[2];
    retVals[0] = X;
    retVals[1] = Y;

    // Last remaining node
    if(list->len == 1){
        list->head = remove_node->next;
        free(remove_node->X);
        free(remove_node->Y);
        free(remove_node);
        (list->len)--;
        return retVals;
    }

    // not the final node
    list->tail = remove_node->prev;
    remove_node->prev->next = remove_node->next;
    free(remove_node->X);
    free(remove_node->Y);
    free(remove_node);
    (list->len)--;

    return retVals;

}

void insert_after_index_dbl_op_dbl(doubly_t* list, double X, double Y, int index){

    if(index == 0){
        insert_at_head_dbl_op_dbl(list, X, Y);
        return;
       }
	
    else if(index > list->len-1){
        printf("Out of Range\n");
	return;
       }

    else if(index == list->len-1){
        insert_at_tail_dbl_op_dbl(list, X, Y);
	return;
       }

    dbl_op_dbl_t* old_index = itr_forward_dbl_op_dbl(list, 0, index, 0, 0, 1);
    dbl_op_dbl_t* next_index = old_index->next;

    dbl_op_dbl_t* new_node = (dbl_op_dbl_t*) malloc(sizeof(dbl_op_dbl_t));
    new_node -> X = (double*) malloc(sizeof(double));
    *(new_node->X) = X;
    new_node -> Y = (double*) malloc(sizeof(double));
    *(new_node->Y) = Y;

    old_index->next = new_node;
    new_node->prev = old_index;

    next_index->prev = new_node;
    new_node->next = next_index;

    (list->len)++;
}

double* delete_at_index_dbl_op_dbl(doubly_t* list, int index){

    if(index == 0)
        return remove_at_head_dbl_op_dbl(list);

    if(index > list->len-1){
        printf("Out of Range\n");
        return NULL;
       }

    if(index == list->len-1)
        return remove_at_tail_dbl_op_dbl(list);

    dbl_op_dbl_t* old_index = itr_forward_dbl_op_dbl(list, 0, index, 0, 0, 1);

    static double retVals[2];

    retVals[0] = *(old_index->X);
    retVals[1] = *(old_index->Y);
    

    old_index->next->prev = old_index->prev;
    old_index->prev->next = old_index->next;

    free(old_index->X);
    free(old_index->Y);
    free(old_index);
    (list->len)--;
    return retVals;
}


void insert_after_val_dbl_op_dbl(doubly_t* list, double X, double Y, double testX, double testY){
 
    double testVals[2];
    testVals[0] = testX;
    testVals[1] = testY;

    if(list->len == 0){
        insert_at_head_dbl_op_dbl(list, X, Y);
	return;
       }

    else if(list->len == 1){
        if(*(list->head->X) == testX && *(list->head->Y) == testY)
	    insert_at_tail_dbl_op_dbl(list, X, Y);
	return;
       }
    
    dbl_op_dbl_t* old_val = itr_forward_dbl_op_dbl(list, testVals, 0, 0, 1, 0);
    
    if(old_val == list->tail){
        if(*(old_val->X) == testX && *(old_val->Y) == testY)
            insert_at_tail_dbl_op_dbl(list, X, Y);
        return;
       }

    dbl_op_dbl_t* next_index = old_val->next;

    dbl_op_dbl_t* new_node = (dbl_op_dbl_t*) malloc(sizeof(dbl_op_dbl_t));
    new_node -> X = (double*) malloc(sizeof(double));
    *(new_node->X) = X;
    new_node -> Y = (double*) malloc(sizeof(double));
    *(new_node->Y) = Y;

    old_val->next = new_node;
    new_node->prev = old_val;

    next_index->prev = new_node;
    new_node->next = next_index;

    (list->len)++;    
}


double* delete_by_val_dbl_op_dbl(doubly_t* list, double testX, double testY){

     double testVals[2];
     testVals[0] = testX;
     testVals[1] = testY;

     if(list->len == 0)
         return remove_at_head_dbl_op_dbl(list); 

    else if(list->len == 1){
        if(*(list->head->X) == testX && *(list->head->Y) == testY)
            return remove_at_tail_dbl_op_dbl(list);
        return NULL;
       }

    dbl_op_dbl_t* old_val = itr_forward_dbl_op_dbl(list, testVals, 0, 0, 1, 0);
    double X = *(old_val->X);
    double Y = *(old_val->Y);

    static double retVals[2];
    retVals[0] = X;
    retVals[1] = Y;
    
    if(old_val == list->tail)
        if(X == testX && Y == testY)
            return remove_at_tail_dbl_op_dbl(list);

    old_val->next->prev = old_val->prev;
    old_val->prev->next = old_val->next;

    free(old_val->X);
    free(old_val->Y);
    free(old_val);
    (list->len)--;
    return retVals;
}

