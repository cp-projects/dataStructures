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


int main(){
	
singly_t* my_list = create_list();

push(my_list, 22);
push(my_list, 15);
push(my_list, 30);
push(my_list, 11);

clear_list(my_list);

return 0;
}

