#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "singly_str.h"


typedef struct singly_str{
    char* val;
    singly_str_t *next;
}singly_str_t;


typedef struct singly{
    singly_str_t* head;
    size_t len;
} singly_t;

/*
typedef struct retvals{
    char* val
    retvals_t *next;
}retvals_t;

typedef struct ret{
    retvals_t* head;
    size_t len;;
}
*/



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

     singly_str_t* pos;
     pos = list->head;

     singly_str_t* trace;
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


void push(singly_t* list, char* val, int str_len){

    singly_str_t* new_node = (singly_str_t*) malloc(sizeof(singly_str_t));
    new_node -> val = (char*) malloc(sizeof(char)*str_len);
    memcpy(new_node->val, &val, str_len);
    new_node->next = list->head;
    list->head = new_node;
    (list->len)++;
    return;
}

/*
void get_str(char* in_val, char* out_val, int str_len){

   if(str_len > 100)
       exit(1);
   
   //char returnVal[str_len];

   for(int i = 0; i < str_len; i++)
       out_val[i] = in_val[i];

   //const char* returnVal = (const char*) &returnVal;
   

   return;
   //return (char**) &returnVal;
}

const char** pop(singly_t* list, char** val){

    singly_str_t* remove_node;
    remove_node = list->head; 

    
    //get_str(remove_node->val, val, sizeof(val)/sizeof(char));
    *val = (char*) malloc(sizeof(remove_node->val));
    memcpy(*val, remove_node->val, (sizeof(*val)/sizeof(char)));

    list->head = remove_node->next;   
    
    free(remove_node->val);
    free(remove_node);

    (list->len)--;
    return (const char**) val;
}
*/

char* pop(singly_t* list, singly_t* popped){

    singly_str_t* remove_node;
    remove_node = list->head;

    singly_str_t* pop_head;
    pop_head = popped->head;

    /*
    char* Val = (char*) malloc(sizeof(remove_node->val));
    memcpy(&Val, remove_node->val, sizeof(remove_node->val)/sizeof(char));
    printf("%s\n", Val);
    free(Val);
    */

    printf("%s\n", (char*) remove_node->val);

    push(popped, remove_node->val, sizeof(remove_node->val)/sizeof(char));

    list->head = remove_node->next;

    free(remove_node->val);
    free(remove_node);
    (list->len)--;

    char* val = popped->head->val;

    return val;
}


//just an alias of push, because in both lifo and fifo the "in" is the same
//(verify this later, but I can't see why it wouldn't be)
void enqueue(singly_t* list, char* val, int str_len){
    
    singly_str_t* new_node = (singly_str_t*) malloc(sizeof(singly_str_t));

    new_node -> val = (char*) malloc(sizeof(char)*str_len);
    memcpy(new_node->val, &val, str_len);
    new_node->next = list->head;
    list->head = new_node;
    (list->len)++;
    return;
}


char* dequeue(singly_t* list){

    singly_str_t* remove_node;
    remove_node = list->head;

    singly_str_t* trace;
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

    char* val = remove_node->val;

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

