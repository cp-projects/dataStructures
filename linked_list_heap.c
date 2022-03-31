#include "linked_list_heap.h"
#include <stdio.h>

typedef struct nodeInt{

   int* val;

} nodeInt_t;

typedef struct nodeStr{

   char* val;

} nodeStr_t;



typedef struct singly{

   nodeInt_t* headInt;
   nodeStr_t* headStr;

   nodeInt_t* nextInt;
   nodeStr_t* nextStr;
}singly_t;


typedef struct doubly{

   nodeInt_t* headInt;
   nodeStr_t* headStr;

   nodeInt_t* nextInt;
   nodeStr_t* nextStr;

   nodeInt_t* prevInt;
   nodeStr_t* prevStr;

} doubly_t;


int main(){

  printf("IT WORKS!!!\n");

return 0;}
