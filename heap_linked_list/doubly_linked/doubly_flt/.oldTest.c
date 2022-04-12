#include <stdio.h>
#include "doubly_flt.h"

int main(){

doubly_t* my_list = create_list();

printf("Testing push\n");

push(my_list, 1.12);
push(my_list, 2.12);
push(my_list, 3.12);
push(my_list, 4.12);
push(my_list, 5.12);
push(my_list, 6.12);
push(my_list, 7.12);
push(my_list, 8.12);
push(my_list, 9.12);
push(my_list, 10.12);
push(my_list, 11.12);
push(my_list, 12.12);

printf("Push Success\n\n");



printf("Testing Pop\n");

float onep = pop(my_list);
printf("The Popped Value is %f\n", onep);

float twop = pop(my_list);
printf("The Popped Value is %f\n", twop);

float threep = pop(my_list);
printf("The Popped Value is %f\n", threep);

float fourp = pop(my_list);
printf("The Popped Value is %f\n", fourp);

float fivep = pop(my_list);
printf("The Popped Value is %f\n", fivep);

float sixp = pop(my_list);
printf("The Popped Value is %f\n", sixp);

float sevenp = pop(my_list);
printf("The Popped Value is %f\n", sevenp);

float eightp = pop(my_list);
printf("The Popped Value is %f\n", eightp);

float ninep = pop(my_list);
printf("The Popped Value is %f\n", ninep);

float tenp = pop(my_list);
printf("The Popped Value is %f\n", tenp);

float elevenp = pop(my_list);
printf("The Popped Value is %f\n", elevenp);

float twelvep = pop(my_list);
printf("The Popped Value is %f\n", twelvep);

printf("Pop Success\n\n");


printf("Testing Enqueue\n");
enqueue(my_list, 1.15);
enqueue(my_list, 2.15);
enqueue(my_list, 3.15);
enqueue(my_list, 4.15);
enqueue(my_list, 5.15);
enqueue(my_list, 6.15);
enqueue(my_list, 7.15);
enqueue(my_list, 8.15);
enqueue(my_list, 9.15);
enqueue(my_list, 10.15);
enqueue(my_list, 11.15);
enqueue(my_list, 12.15);
printf("Enqueue Sucess\n\n");


printf("Testing Dequeue\n");

float oneq = dequeue(my_list);
printf("The Dequeued Value is %f\n", oneq);

float twoq = dequeue(my_list);
printf("The Dequeued Value is %f\n", twoq);

float threeq = dequeue(my_list);
printf("The Dequeued Value is %f\n", threeq);

float fourq = dequeue(my_list);
printf("The Dequeued Value is %f\n", fourq);

float fiveq = dequeue(my_list);
printf("The Dequeued Value is %f\n", fiveq);

float sixq = dequeue(my_list);
printf("The Dequeued Value is %f\n", sixq);

float sevenq = dequeue(my_list);
printf("The Dequeued Value is %f\n", sevenq);

float eightq = dequeue(my_list);
printf("The Dequeued Value is %f\n", eightq);

float nineq = dequeue(my_list);
printf("The Dequeued Value is %f\n", nineq);

float tenq = dequeue(my_list);
printf("The Dequeued Value is %f\n", tenq);

float elevenq = dequeue(my_list);
printf("The Dequeued Value is %f\n", elevenq);

float twelveq = dequeue(my_list);
printf("The Dequeued Value is %f\n", twelveq);

printf("Dequeue Sucess\n\n");


printf("filling list to test Mix\n");

push(my_list, 1.24);
push(my_list, 2.24);
push(my_list, 3.24);
push(my_list, 4.24);
push(my_list, 5.24);
push(my_list, 6.24);
push(my_list, 7.24);
push(my_list, 8.24);
push(my_list, 9.24);
push(my_list, 10.24);
push(my_list, 11.24);
push(my_list, 12.24);

enqueue(my_list, 13.24);
enqueue(my_list, 14.24);
enqueue(my_list, 15.24);
enqueue(my_list, 16.24);
enqueue(my_list, 17.24);
enqueue(my_list, 18.24);
enqueue(my_list, 19.24);
enqueue(my_list, 20.24);
enqueue(my_list, 21.24);
enqueue(my_list, 22.24);
enqueue(my_list, 23.24);
enqueue(my_list, 24.24);

printf("Testing Mix\n");


onep = pop(my_list);
printf("The Popped Value is %f\n", onep);
oneq = dequeue(my_list);
printf("The Dequeued Value is %f\n", oneq);

twop = pop(my_list);
printf("The Popped Value is %f\n", twop);
twoq = dequeue(my_list);
printf("The Dequeued Value is %f\n", twoq);

threep = pop(my_list);
printf("The Popped Value is %f\n", threep);
threeq = dequeue(my_list);
printf("The Dequeued Value is %f\n", threeq);

fourp = pop(my_list);
printf("The Popped Value is %f\n", fourp);
fourq = dequeue(my_list);
printf("The Dequeued Value is %f\n", fourq);

fivep = pop(my_list);
printf("The Popped Value is %f\n", fivep);
fiveq = dequeue(my_list);
printf("The Dequeued Value is %f\n", fiveq);

sixp = pop(my_list);
printf("The Popped Value is %f\n", sixp);
sixq = dequeue(my_list);
printf("The Dequeued Value is %f\n", sixq);

sevenp = pop(my_list);
printf("The Popped Value is %f\n", sevenp);
sevenq = dequeue(my_list);
printf("The Dequeued Value is %f\n", sevenq);

eightp = pop(my_list);
printf("The Popped Value is %f\n", eightp);
eightq = dequeue(my_list);
printf("The Dequeued Value is %f\n", eightq);

ninep = pop(my_list);
printf("The Popped Value is %f\n", ninep);
nineq = dequeue(my_list);
printf("The Dequeued Value is %f\n", nineq);

tenp = pop(my_list);
printf("The Popped Value is %f\n", tenp);
tenq = dequeue(my_list);
printf("The Dequeued Value is %f\n", tenq);

elevenp = pop(my_list);
printf("The Popped Value is %f\n", elevenp);
elevenq = dequeue(my_list);
printf("The Dequeued Value is %f\n", elevenq);

twelvep = pop(my_list);
printf("The Popped Value is %f\n", twelvep);
twelveq = dequeue(my_list);
printf("The Dequeued Value is %f\n", twelveq);

printf("Success Mix\n");



printf("filling list to test clear\n");

push(my_list, 1);
push(my_list, 2);
push(my_list, 3);
push(my_list, 4);
push(my_list, 5);
push(my_list, 6);
push(my_list, 7);
push(my_list, 8);
push(my_list, 9);
push(my_list, 10);
push(my_list, 11);
push(my_list, 12);

enqueue(my_list, 13);
enqueue(my_list, 14);
enqueue(my_list, 15);
enqueue(my_list, 16);
enqueue(my_list, 17);
enqueue(my_list, 18);
enqueue(my_list, 19);
enqueue(my_list, 20);
enqueue(my_list, 21);
enqueue(my_list, 22);
enqueue(my_list, 23);
enqueue(my_list, 24);

printf("Testing Clear\n");

clear_list(my_list);

printf("Clear Success\n\n");




return 0;
}

