#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <stddef.h>

#include "doubly_flt.h"


typedef struct doubly_flt{
    float* val;
    doubly_flt_t *next, *prev;
}doubly_flt_t;


typedef struct doubly{
    doubly_flt_t* head;
    doubly_flt_t* tail;
    size_t len;
} doubly_t;


doubly_t* create_list_dbl_flt(){
    doubly_t* list = (doubly_t*) malloc(sizeof(doubly_t));
    list->len = 0;
    list->head = NULL;
    list->tail = NULL;
    return list;        
}


size_t ret_len_dbl_flt(doubly_t* list){
	return list->len;
}


void clear_list_dbl_flt(doubly_t* list){

     int len = list->len;	

     if(len == 0)
	     return;

     doubly_flt_t* pos = list->head->next;
     doubly_flt_t* swap = list->head->next;
     
     doubly_flt_t* head = list->head;
     doubly_flt_t* tail = list->tail;
     
     if(len == 1){

	  list->head = NULL;
	  list->tail = NULL;
	  list->len = 0;
	  free(head->val);
	  free(head);
	  return;
     }
  
     for(int i = 1; i < len-1; i++){
         
	 swap = pos->next;
	 pos->next->prev = pos->prev;
	 pos->prev->next = pos->next;
	 free(pos->val);
	 free(pos);
         pos = swap;

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

void destroy_list_dbl_flt(doubly_t* list){
    clear_list_dbl_flt(list);
    free((void*)list);
}


void push_dbl_flt(doubly_t* list, const float val){

    //create node
    doubly_flt_t* new_node = (doubly_flt_t*) malloc(sizeof(doubly_flt_t));
    new_node -> val = (float*) malloc(sizeof(float));
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

float pop_dbl_flt(doubly_t* list){

    doubly_flt_t* remove_node = list->head; 

    float val = *(remove_node->val);
    list->head = remove_node->next;

    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return val;
}

//just an alias of push, because in both lifo and fifo the "in" is the same
//(verify this later, but I can't see why it wouldn't be)
void enqueue_dbl_flt(doubly_t* list, const float val){
    
    //create node
    doubly_flt_t* new_node = (doubly_flt_t*) malloc(sizeof(doubly_flt_t));
    new_node -> val = (float*) malloc(sizeof(float));
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


float dequeue_dbl_flt(doubly_t* list){

    doubly_flt_t* remove_node = list->tail;
    float val = *(remove_node->val);

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

doubly_flt_t* itr_forward_dbl_flt(doubly_t* list, float breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag){

    if(break_on_valFlag == 1 && break_on_indexFlag == 1)
	    exit(1);

    doubly_flt_t* itr = list->head;

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

doubly_flt_t* itr_backward_dbl_flt(doubly_t* list, float breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag){

    if(break_on_valFlag == 1 && break_on_indexFlag == 1)
            exit(1);
    
    assert(list->tail);
    doubly_flt_t* itr = list->tail;

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



void insert_at_head_dbl_flt(doubly_t* list, const float val){

    //create node
    doubly_flt_t* new_node = (doubly_flt_t*) malloc(sizeof(doubly_flt_t));
    new_node -> val = (float*) malloc(sizeof(float));
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


float remove_at_head_dbl_flt(doubly_t* list){

    if(list->len == 0)
        return -1;

    doubly_flt_t* remove_node;
    remove_node = list->head;

    float val = *(remove_node->val);
    list->head = remove_node->next;
    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return val;
}


void insert_at_tail_dbl_flt(doubly_t* list, const float val){

    doubly_flt_t* old_tail = list->tail;

    doubly_flt_t* new_node = (doubly_flt_t*) malloc(sizeof(doubly_flt_t));
    new_node -> val = (float*) malloc(sizeof(float));
    *(new_node->val) = val;
    
    old_tail->next = new_node;
    new_node->prev = old_tail;
    list->tail = new_node;
    (list->len)++;
    return;
}



float remove_at_tail_dbl_flt(doubly_t* list){

    doubly_flt_t* remove_node = list->tail;
    float val = *(remove_node->val);

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

void insert_after_index_dbl_flt(doubly_t* list, float val, int index){

    if(index == 0){
        insert_at_head_dbl_flt(list, val);
        return;
       }
	
    else if(index > list->len-1){
        printf("Out of Range\n");
	return;
       }

    else if(index == list->len-1){
        insert_at_tail_dbl_flt(list, val);
	return;
       }

    doubly_flt_t* old_index = itr_forward_dbl_flt(list, 0, index, 0, 0, 1);
    doubly_flt_t* next_index = old_index->next;

    doubly_flt_t* new_node = (doubly_flt_t*) malloc(sizeof(doubly_flt_t));
    new_node -> val = (float*) malloc(sizeof(float));
    *(new_node->val) = val;

    old_index->next = new_node;
    new_node->prev = old_index;

    next_index->prev = new_node;
    new_node->next = next_index;

    (list->len)++;
}

float delete_at_index_dbl_flt(doubly_t* list, int index){

    if(index == 0)
        return remove_at_head_dbl_flt(list);

    if(index > list->len-1){
        printf("Out of Range\n");
        return -1;
       }

    if(index == list->len-1)
        return remove_at_tail_dbl_flt(list);

    doubly_flt_t* old_index = itr_forward_dbl_flt(list, 0, index, 0, 0, 1);

    float val = *(old_index->val);

    old_index->next->prev = old_index->prev;
    old_index->prev->next = old_index->next;

    free(old_index->val);
    free(old_index);
    (list->len)--;
    return val;
}


void insert_after_val_dbl_flt(doubly_t* list, float newVal, float testVal){
 
    if(list->len == 0){
        insert_at_head_dbl_flt(list, newVal);
	return;
       }

    else if(list->len == 1){
        if(*(list->head->val) == testVal)
	    insert_at_tail_dbl_flt(list, newVal);
	return;
       }
    
    doubly_flt_t* old_val = itr_forward_dbl_flt(list, testVal, 0, 0, 1, 0);
    
    if(old_val == list->tail){
        if(*(old_val->val) == testVal)
            insert_at_tail_dbl_flt(list, newVal);
        return;
       }

    doubly_flt_t* next_index = old_val->next;

    doubly_flt_t* new_node = (doubly_flt_t*) malloc(sizeof(doubly_flt_t));
    new_node -> val = (float*) malloc(sizeof(float));
    *(new_node->val) = newVal;

    old_val->next = new_node;
    new_node->prev = old_val;

    next_index->prev = new_node;
    new_node->next = next_index;

    (list->len)++;    
}


float delete_by_val_dbl_flt(doubly_t* list, float testVal){

     if(list->len == 0)
         return remove_at_head_dbl_flt(list); 

    else if(list->len == 1){
        if(*(list->head->val) == testVal)
            return remove_at_tail_dbl_flt(list);
        return -1;
       }

    doubly_flt_t* old_val = itr_forward_dbl_flt(list, testVal, 0, 0, 1, 0);
    float val = *(old_val->val);
    
    if(old_val == list->tail)
        if(val == testVal)
            return remove_at_tail_dbl_flt(list);

    old_val->next->prev = old_val->prev;
    old_val->prev->next = old_val->next;

    free(old_val->val);
    free(old_val);
    (list->len)--;
    return val;
}

