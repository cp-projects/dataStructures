#include <stdio.h>
#include "singly_dbl.h"

int main(){

singly_t* my_list = create_list();

printf("Testing push\n");

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

printf("Push Success\n\n");



printf("Testing Pop\n");

int onep = pop(my_list);
printf("The Popped Value is %d\n", onep);

int twop = pop(my_list);
printf("The Popped Value is %d\n", twop);

int threep = pop(my_list);
printf("The Popped Value is %d\n", threep);

int fourp = pop(my_list);
printf("The Popped Value is %d\n", fourp);

int fivep = pop(my_list);
printf("The Popped Value is %d\n", fivep);

int sixp = pop(my_list);
printf("The Popped Value is %d\n", sixp);

int sevenp = pop(my_list);
printf("The Popped Value is %d\n", sevenp);

int eightp = pop(my_list);
printf("The Popped Value is %d\n", eightp);

int ninep = pop(my_list);
printf("The Popped Value is %d\n", ninep);

int tenp = pop(my_list);
printf("The Popped Value is %d\n", tenp);

int elevenp = pop(my_list);
printf("The Popped Value is %d\n", elevenp);

int twelvep = pop(my_list);
printf("The Popped Value is %d\n", twelvep);

printf("Pop Success\n\n");


printf("Testing Enqueue\n");
enqueue(my_list, 1);
enqueue(my_list, 2);
enqueue(my_list, 3);
enqueue(my_list, 4);
enqueue(my_list, 5);
enqueue(my_list, 6);
enqueue(my_list, 7);
enqueue(my_list, 8);
enqueue(my_list, 9);
enqueue(my_list, 10);
enqueue(my_list, 11);
enqueue(my_list, 12);
printf("Enqueue Sucess\n\n");


printf("Testing Dequeue\n");

int oneq = dequeue(my_list);
printf("The Dequeued Value is %d\n", oneq);

int twoq = dequeue(my_list);
printf("The Dequeued Value is %d\n", twoq);

int threeq = dequeue(my_list);
printf("The Dequeued Value is %d\n", threeq);

int fourq = dequeue(my_list);
printf("The Dequeued Value is %d\n", fourq);

int fiveq = dequeue(my_list);
printf("The Dequeued Value is %d\n", fiveq);

int sixq = dequeue(my_list);
printf("The Dequeued Value is %d\n", sixq);

int sevenq = dequeue(my_list);
printf("The Dequeued Value is %d\n", sevenq);

int eightq = dequeue(my_list);
printf("The Dequeued Value is %d\n", eightq);

int nineq = dequeue(my_list);
printf("The Dequeued Value is %d\n", nineq);

int tenq = dequeue(my_list);
printf("The Dequeued Value is %d\n", tenq);

int elevenq = dequeue(my_list);
printf("The Dequeued Value is %d\n", elevenq);

int twelveq = dequeue(my_list);
printf("The Dequeued Value is %d\n", twelveq);

printf("Dequeue Sucess\n\n");


printf("filling list to test Mix\n");

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

printf("Testing Mix\n");


onep = pop(my_list);
printf("The Popped Value is %d\n", onep);
oneq = dequeue(my_list);
printf("The Dequeued Value is %d\n", oneq);

twop = pop(my_list);
printf("The Popped Value is %d\n", twop);
twoq = dequeue(my_list);
printf("The Dequeued Value is %d\n", twoq);

threep = pop(my_list);
printf("The Popped Value is %d\n", threep);
threeq = dequeue(my_list);
printf("The Dequeued Value is %d\n", threeq);

fourp = pop(my_list);
printf("The Popped Value is %d\n", fourp);
fourq = dequeue(my_list);
printf("The Dequeued Value is %d\n", fourq);

fivep = pop(my_list);
printf("The Popped Value is %d\n", fivep);
fiveq = dequeue(my_list);
printf("The Dequeued Value is %d\n", fiveq);

sixp = pop(my_list);
printf("The Popped Value is %d\n", sixp);
sixq = dequeue(my_list);
printf("The Dequeued Value is %d\n", sixq);

sevenp = pop(my_list);
printf("The Popped Value is %d\n", sevenp);
sevenq = dequeue(my_list);
printf("The Dequeued Value is %d\n", sevenq);

eightp = pop(my_list);
printf("The Popped Value is %d\n", eightp);
eightq = dequeue(my_list);
printf("The Dequeued Value is %d\n", eightq);

ninep = pop(my_list);
printf("The Popped Value is %d\n", ninep);
nineq = dequeue(my_list);
printf("The Dequeued Value is %d\n", nineq);

tenp = pop(my_list);
printf("The Popped Value is %d\n", tenp);
tenq = dequeue(my_list);
printf("The Dequeued Value is %d\n", tenq);

elevenp = pop(my_list);
printf("The Popped Value is %d\n", elevenp);
elevenq = dequeue(my_list);
printf("The Dequeued Value is %d\n", elevenq);

twelvep = pop(my_list);
printf("The Popped Value is %d\n", twelvep);
twelveq = dequeue(my_list);
printf("The Dequeued Value is %d\n", twelveq);

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

