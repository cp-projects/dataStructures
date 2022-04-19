#include <stdio.h>
#include "singly_int.h"

int main(){

singly_t* my_list = create_list_sin_int();

printf("Testing push\n");

push_sin_int(my_list, 1);
push_sin_int(my_list, 2);
push_sin_int(my_list, 3);
push_sin_int(my_list, 4);
push_sin_int(my_list, 5);
push_sin_int(my_list, 6);
push_sin_int(my_list, 7);
push_sin_int(my_list, 8);
push_sin_int(my_list, 9);
push_sin_int(my_list, 10);
push_sin_int(my_list, 11);
push_sin_int(my_list, 12);

printf("Push Success\n\n");



printf("Testing Pop\n");

int onep = pop_sin_int(my_list);
printf("The Popped Value is %d\n", onep);

int twop = pop_sin_int(my_list);
printf("The Popped Value is %d\n", twop);

int threep = pop_sin_int(my_list);
printf("The Popped Value is %d\n", threep);

int fourp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", fourp);

int fivep = pop_sin_int(my_list);
printf("The Popped Value is %d\n", fivep);

int sixp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", sixp);

int sevenp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", sevenp);

int eightp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", eightp);

int ninep = pop_sin_int(my_list);
printf("The Popped Value is %d\n", ninep);

int tenp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", tenp);

int elevenp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", elevenp);

int twelvep = pop_sin_int(my_list);
printf("The Popped Value is %d\n", twelvep);

printf("Pop Success\n\n");


printf("Testing Enqueue\n");
enqueue_sin_int(my_list, 1);
enqueue_sin_int(my_list, 2);
enqueue_sin_int(my_list, 3);
enqueue_sin_int(my_list, 4);
enqueue_sin_int(my_list, 5);
enqueue_sin_int(my_list, 6);
enqueue_sin_int(my_list, 7);
enqueue_sin_int(my_list, 8);
enqueue_sin_int(my_list, 9);
enqueue_sin_int(my_list, 10);
enqueue_sin_int(my_list, 11);
enqueue_sin_int(my_list, 12);
printf("Enqueue Sucess\n\n");


printf("Testing Dequeue\n");

int oneq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", oneq);

int twoq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", twoq);

int threeq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", threeq);

int fourq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", fourq);

int fiveq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", fiveq);

int sixq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", sixq);

int sevenq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", sevenq);

int eightq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", eightq);

int nineq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", nineq);

int tenq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", tenq);

int elevenq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", elevenq);

int twelveq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", twelveq);

printf("Dequeue Sucess\n\n");


printf("filling list to test Mix\n");

push_sin_int(my_list, 1);
push_sin_int(my_list, 2);
push_sin_int(my_list, 3);
push_sin_int(my_list, 4);
push_sin_int(my_list, 5);
push_sin_int(my_list, 6);
push_sin_int(my_list, 7);
push_sin_int(my_list, 8);
push_sin_int(my_list, 9);
push_sin_int(my_list, 10);
push_sin_int(my_list, 11);
push_sin_int(my_list, 12);

enqueue_sin_int(my_list, 13);
enqueue_sin_int(my_list, 14);
enqueue_sin_int(my_list, 15);
enqueue_sin_int(my_list, 16);
enqueue_sin_int(my_list, 17);
enqueue_sin_int(my_list, 18);
enqueue_sin_int(my_list, 19);
enqueue_sin_int(my_list, 20);
enqueue_sin_int(my_list, 21);
enqueue_sin_int(my_list, 22);
enqueue_sin_int(my_list, 23);
enqueue_sin_int(my_list, 24);

printf("Testing Mix\n");


onep = pop_sin_int(my_list);
printf("The Popped Value is %d\n", onep);
oneq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", oneq);

twop = pop_sin_int(my_list);
printf("The Popped Value is %d\n", twop);
twoq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", twoq);

threep = pop_sin_int(my_list);
printf("The Popped Value is %d\n", threep);
threeq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", threeq);

fourp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", fourp);
fourq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", fourq);

fivep = pop_sin_int(my_list);
printf("The Popped Value is %d\n", fivep);
fiveq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", fiveq);

sixp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", sixp);
sixq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", sixq);

sevenp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", sevenp);
sevenq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", sevenq);

eightp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", eightp);
eightq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", eightq);

ninep = pop_sin_int(my_list);
printf("The Popped Value is %d\n", ninep);
nineq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", nineq);

tenp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", tenp);
tenq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", tenq);

elevenp = pop_sin_int(my_list);
printf("The Popped Value is %d\n", elevenp);
elevenq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", elevenq);

twelvep = pop_sin_int(my_list);
printf("The Popped Value is %d\n", twelvep);
twelveq = dequeue_sin_int(my_list);
printf("The Dequeued Value is %d\n", twelveq);

printf("Success Mix\n");



printf("filling list to test clear\n");

push_sin_int(my_list, 1);
push_sin_int(my_list, 2);
push_sin_int(my_list, 3);
push_sin_int(my_list, 4);
push_sin_int(my_list, 5);
push_sin_int(my_list, 6);
push_sin_int(my_list, 7);
push_sin_int(my_list, 8);
push_sin_int(my_list, 9);
push_sin_int(my_list, 10);
push_sin_int(my_list, 11);
push_sin_int(my_list, 12);

enqueue_sin_int(my_list, 13);
enqueue_sin_int(my_list, 14);
enqueue_sin_int(my_list, 15);
enqueue_sin_int(my_list, 16);
enqueue_sin_int(my_list, 17);
enqueue_sin_int(my_list, 18);
enqueue_sin_int(my_list, 19);
enqueue_sin_int(my_list, 20);
enqueue_sin_int(my_list, 21);
enqueue_sin_int(my_list, 22);
enqueue_sin_int(my_list, 23);
enqueue_sin_int(my_list, 24);

printf("Testing Clear\n");

clear_list_sin_int(my_list);

printf("Clear Success\n\n");




return 0;
}

