#include <stdio.h>
#include "sin_op_flt.h"

int main(){

singly_t* my_list = create_list_sin_flt();

printf("Testing push\n");

push_sin_flt(my_list, 1.12);
push_sin_flt(my_list, 2.12);
push_sin_flt(my_list, 3.12);
push_sin_flt(my_list, 4.12);
push_sin_flt(my_list, 5.12);
push_sin_flt(my_list, 6.12);
push_sin_flt(my_list, 7.12);
push_sin_flt(my_list, 8.12);
push_sin_flt(my_list, 9.12);
push_sin_flt(my_list, 10.12);
push_sin_flt(my_list, 11.12);
push_sin_flt(my_list, 12.12);

printf("Push Success\n\n");



printf("Testing Pop\n");

float onep = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", onep);

float twop = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", twop);

float threep = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", threep);

float fourp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", fourp);

float fivep = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", fivep);

float sixp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", sixp);

float sevenp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", sevenp);

float eightp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", eightp);

float ninep = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", ninep);

float tenp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", tenp);

float elevenp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", elevenp);

float twelvep = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", twelvep);

printf("Pop Success\n\n");


printf("Testing Enqueue\n");
enqueue_sin_flt(my_list, 1.15);
enqueue_sin_flt(my_list, 2.15);
enqueue_sin_flt(my_list, 3.15);
enqueue_sin_flt(my_list, 4.15);
enqueue_sin_flt(my_list, 5.15);
enqueue_sin_flt(my_list, 6.15);
enqueue_sin_flt(my_list, 7.15);
enqueue_sin_flt(my_list, 8.15);
enqueue_sin_flt(my_list, 9.15);
enqueue_sin_flt(my_list, 10.15);
enqueue_sin_flt(my_list, 11.15);
enqueue_sin_flt(my_list, 12.15);
printf("Enqueue Sucess\n\n");


printf("Testing Dequeue\n");

float oneq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", oneq);

float twoq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", twoq);

float threeq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", threeq);

float fourq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", fourq);

float fiveq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", fiveq);

float sixq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", sixq);

float sevenq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", sevenq);

float eightq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", eightq);

float nineq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", nineq);

float tenq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", tenq);

float elevenq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", elevenq);

float twelveq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", twelveq);

printf("Dequeue Sucess\n\n");


printf("filling list to test Mix\n");

push_sin_flt(my_list, 1.24);
push_sin_flt(my_list, 2.24);
push_sin_flt(my_list, 3.24);
push_sin_flt(my_list, 4.24);
push_sin_flt(my_list, 5.24);
push_sin_flt(my_list, 6.24);
push_sin_flt(my_list, 7.24);
push_sin_flt(my_list, 8.24);
push_sin_flt(my_list, 9.24);
push_sin_flt(my_list, 10.24);
push_sin_flt(my_list, 11.24);
push_sin_flt(my_list, 12.24);

enqueue_sin_flt(my_list, 13.24);
enqueue_sin_flt(my_list, 14.24);
enqueue_sin_flt(my_list, 15.24);
enqueue_sin_flt(my_list, 16.24);
enqueue_sin_flt(my_list, 17.24);
enqueue_sin_flt(my_list, 18.24);
enqueue_sin_flt(my_list, 19.24);
enqueue_sin_flt(my_list, 20.24);
enqueue_sin_flt(my_list, 21.24);
enqueue_sin_flt(my_list, 22.24);
enqueue_sin_flt(my_list, 23.24);
enqueue_sin_flt(my_list, 24.24);

printf("Testing Mix\n");


onep = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", onep);
oneq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", oneq);

twop = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", twop);
twoq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", twoq);

threep = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", threep);
threeq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", threeq);

fourp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", fourp);
fourq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", fourq);

fivep = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", fivep);
fiveq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", fiveq);

sixp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", sixp);
sixq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", sixq);

sevenp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", sevenp);
sevenq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", sevenq);

eightp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", eightp);
eightq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", eightq);

ninep = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", ninep);
nineq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", nineq);

tenp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", tenp);
tenq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", tenq);

elevenp = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", elevenp);
elevenq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", elevenq);

twelvep = pop_sin_flt(my_list);
printf("The Popped Value is %f\n", twelvep);
twelveq = dequeue_sin_flt(my_list);
printf("The Dequeued Value is %f\n", twelveq);

printf("Success Mix\n");



printf("filling list to test clear\n");

push_sin_flt(my_list, 1);
push_sin_flt(my_list, 2);
push_sin_flt(my_list, 3);
push_sin_flt(my_list, 4);
push_sin_flt(my_list, 5);
push_sin_flt(my_list, 6);
push_sin_flt(my_list, 7);
push_sin_flt(my_list, 8);
push_sin_flt(my_list, 9);
push_sin_flt(my_list, 10);
push_sin_flt(my_list, 11);
push_sin_flt(my_list, 12);

enqueue_sin_flt(my_list, 13);
enqueue_sin_flt(my_list, 14);
enqueue_sin_flt(my_list, 15);
enqueue_sin_flt(my_list, 16);
enqueue_sin_flt(my_list, 17);
enqueue_sin_flt(my_list, 18);
enqueue_sin_flt(my_list, 19);
enqueue_sin_flt(my_list, 20);
enqueue_sin_flt(my_list, 21);
enqueue_sin_flt(my_list, 22);
enqueue_sin_flt(my_list, 23);
enqueue_sin_flt(my_list, 24);

printf("Testing Clear\n");

clear_list_sin_flt(my_list);

printf("Clear Success\n\n");




return 0;
}

