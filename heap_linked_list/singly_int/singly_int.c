#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "singly_int.h"


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


void clear_list(const singly_t* list){

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
             pos = trace;
            }

         else{
             free(pos->val);
             pos->val = NULL;
             free(pos);
            }
        } //end while
	
    free((void*)list);
    return;

}


singly_t* push(const singly_t* list, int val){

    singly_int_t* new_node = (singly_int_t*) malloc(sizeof(singly_int_t));
 
    new_node -> val = (int*) malloc(sizeof(int));
    *(new_node->val) = val;
    new_node->next = list->head;
    list->head = new_node;
    return list;
}


int main(){
	
singly_t* my_list = create_list();

push(my_list, 22);
clear_list(my_list);

return 0;
}

