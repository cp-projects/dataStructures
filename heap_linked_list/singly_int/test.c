#include <stdio.h>
#include "singly_int.h"

int main(){

singly_t* my_list = create_list();

push(my_list, 1);
push(my_list, 2);
push(my_list, 3);
push(my_list, 4);


int one = pop(my_list);
printf("The Popped Value is %d\n", one);

int two = pop(my_list);
printf("The Popped Value is %d\n", two);

int three = pop(my_list);
printf("The Popped Value is %d\n", three);

int four = pop(my_list);
printf("The Popped Value is %d\n", four);


enqueue(my_list, 5);
enqueue(my_list, 6);
enqueue(my_list, 7);
enqueue(my_list, 8);


int five = dequeue(my_list);
printf("The Dequeued Value is %d\n", five);

int six = dequeue(my_list);
printf("The Dequeued Value is %d\n", six);

int seven = dequeue(my_list);
printf("The Dequeued Value is %d\n", seven);

int eight = dequeue(my_list);
printf("The Dequeued Value is %d\n", eight);



clear_list(my_list);

return 0;
}

