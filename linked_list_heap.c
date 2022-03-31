#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "linked_list_heap.h"


/*
 * Enumerating the different types
 * of list elements/values
 *
 * */
typedef enum{

    TYPE_INT,
    TYPE_STR,
    TYPE_FLT,
    TYPE_DBL,
    TYPE_VOID,

} type_t;


/*
 * Singly Linked List
 *
 * Provided options in the 5
 * fundamental types for any casting
 *
 * */

typedef struct singly_int{
    int* val;
    struct singly_int *next;
}singly_int_t;

typedef struct singly_str{
    char* val;
    struct singly_str *next;
}singly_str_t;

typedef struct singly_flt{
    float* val;
    struct singly_flt *next;
}singly_flt_t;

typedef struct singly_dbl{
    double* val;
    struct singly_dbl *next;
}singly_dbl_t;

typedef struct singly_void{
    void* val;
    struct singly_void *next;
}singly_void_t;


/*
 * Doubly Linked List
 *
 * Provided options in the 5
 * fundamental types for any casting
 *
 * */

typedef struct doubly_int{
    int* val;
    struct doubly_int *next, *prev;
}doubly_int_t;

typedef struct doubly_str{
    char* val;
    struct doubly_str *next, *prev;
}doubly_str_t;

typedef struct doubly_flt{
    float* val;
    struct doubly_flt *next, *prev;
}doubly_flt_t;

typedef struct doubly_dbl{
    double* val;
    struct doubly_dbl *next, *prev;
}doubly_dbl_t;

typedef struct doubly_void{
    void* val;
    struct doubly_void *next, *prev;
}doubly_void_t;



/*
 *   List Instance
 *
 *
 * */


typedef struct singly{

    singly_int_t* head_int;
    singly_str_t* head_str;
    singly_flt_t* head_flt;
    singly_dbl_t* head_dbl;
    singly_void_t* head_void;

    type_t type;
    size_t size;

} singly_t;


typedef struct doubly{

    doubly_int_t* head_int;
    doubly_str_t* head_str;
    doubly_flt_t* head_flt;
    doubly_dbl_t* head_dbl;
    doubly_void_t* head_void;

    type_t type;
    size_t size;

}doubly_t;




/*
 *
 * Functions to Create a List
 *
 * */

singly_t* create_singly(const char* type){

    singly_t* list = malloc(sizeof(singly_t));

    if(strncmp(type, "int", 3) == 0){
        list->type = TYPE_INT;
	list->head_int = NULL;
	return list;
    }

    else if(strncmp(type, "str", 3) == 0){
        list->type = TYPE_STR;
        list->head_str = NULL;
	return list;
    }

    else if(strncmp(type, "flt", 3) == 0){
        list->type = TYPE_FLT;
        list->head_flt = NULL;
	return list;
    }

    else if(strncmp(type, "dbl", 3) == 0){
        list->type = TYPE_DBL;
        list->head_dbl = NULL;
	return list;
    }

    else if(strncmp(type, "void", 3) == 0){
        list->type = TYPE_VOID;
        list->head_void = NULL;
	return list;
    }
        

    else{
    
        printf("NOT A VALID TYPE\n");
	return list;
    
    }


   return list;

}


void clear_singly(const singly_t* list){

    void** pos = NULL;	

    if(list->type == TYPE_INT){
        singly_int_t* x = list->head_int;
        x->val = list->head_int->val;	
	*(singly_int_t*)pos = *(singly_int_t*) x;
       }

    else if(list->type == TYPE_STR){
        singly_str_t* x = list->head_str;
	x->val = list->head_str->val;
       	*(singly_str_t*)pos = *(singly_str_t*) x;
       }

    else if(list->type == TYPE_FLT){
        singly_flt_t* x = list->head_flt;
	x->val = list->head_flt->val;
        *(singly_flt_t*)pos = *(singly_flt_t*) x;
       }

    else if(list->type == TYPE_DBL){
	singly_dbl_t* x = list->head_dbl;
	x->val = list->head_dbl->val;
       	*(singly_dbl_t*) pos = *(singly_dbl_t*) x;
       }

    else if(list->type == TYPE_VOID){
        singly_void_t* x = list->head_void;
	x->val = list->head_void->val;
       	*(singly_void_t*) pos = *(singly_void_t*) x;
       }

    else{         
        free((void*)list);
	return;
       }

    int i = 0;
    if(pos)
        for(pos; pos; pos->next){
	
	    printf("THIS IS THE %dth Element THE LIST\n", i);
	    i++;
	}

   

}





int main(){

  printf("IT WORKS!!!\n");

  char* INT = "int";

  singly_t* my_list = create_singly(INT);

  clear_singly(my_list);

return 0;}
