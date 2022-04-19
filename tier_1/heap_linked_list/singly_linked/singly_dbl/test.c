#include <stdio.h>
#include "singly_dbl.h"

int main(){

singly_t* my_list = create_list_sin_dbl();

printf("Testing push\n");

push_sin_dbl(my_list, 1.12);
push_sin_dbl(my_list, 2.12);
push_sin_dbl(my_list, 3.12);
push_sin_dbl(my_list, 4.12);
push_sin_dbl(my_list, 5.12);
push_sin_dbl(my_list, 6.12);
push_sin_dbl(my_list, 7.12);
push_sin_dbl(my_list, 8.12);
push_sin_dbl(my_list, 9.12);
push_sin_dbl(my_list, 10.12);
push_sin_dbl(my_list, 11.12);
push_sin_dbl(my_list, 12.12);

printf("Push Success\n\n");



printf("Testing Pop\n");

double onep = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", onep);

double twop = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", twop);

double threep = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", threep);

double fourp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", fourp);

double fivep = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", fivep);

double sixp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", sixp);

double sevenp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", sevenp);

double eightp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", eightp);

double ninep = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", ninep);

double tenp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", tenp);

double elevenp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", elevenp);

double twelvep = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", twelvep);

printf("Pop Success\n\n");


printf("Testing Enqueue\n");
enqueue_sin_dbl(my_list, 1.15);
enqueue_sin_dbl(my_list, 2.15);
enqueue_sin_dbl(my_list, 3.15);
enqueue_sin_dbl(my_list, 4.15);
enqueue_sin_dbl(my_list, 5.15);
enqueue_sin_dbl(my_list, 6.15);
enqueue_sin_dbl(my_list, 7.15);
enqueue_sin_dbl(my_list, 8.15);
enqueue_sin_dbl(my_list, 9.15);
enqueue_sin_dbl(my_list, 10.15);
enqueue_sin_dbl(my_list, 11.15);
enqueue_sin_dbl(my_list, 12.15);
printf("Enqueue Sucess\n\n");


printf("Testing Dequeue\n");

double oneq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", oneq);

double twoq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", twoq);

double threeq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", threeq);

double fourq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", fourq);

double fiveq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", fiveq);

double sixq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", sixq);

double sevenq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", sevenq);

double eightq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", eightq);

double nineq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", nineq);

double tenq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", tenq);

double elevenq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", elevenq);

double twelveq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", twelveq);

printf("Dequeue Sucess\n\n");


printf("filling list to test Mix\n");

push_sin_dbl(my_list, 1.24);
push_sin_dbl(my_list, 2.24);
push_sin_dbl(my_list, 3.24);
push_sin_dbl(my_list, 4.24);
push_sin_dbl(my_list, 5.24);
push_sin_dbl(my_list, 6.24);
push_sin_dbl(my_list, 7.24);
push_sin_dbl(my_list, 8.24);
push_sin_dbl(my_list, 9.24);
push_sin_dbl(my_list, 10.24);
push_sin_dbl(my_list, 11.24);
push_sin_dbl(my_list, 12.24);

enqueue_sin_dbl(my_list, 13.24);
enqueue_sin_dbl(my_list, 14.24);
enqueue_sin_dbl(my_list, 15.24);
enqueue_sin_dbl(my_list, 16.24);
enqueue_sin_dbl(my_list, 17.24);
enqueue_sin_dbl(my_list, 18.24);
enqueue_sin_dbl(my_list, 19.24);
enqueue_sin_dbl(my_list, 20.24);
enqueue_sin_dbl(my_list, 21.24);
enqueue_sin_dbl(my_list, 22.24);
enqueue_sin_dbl(my_list, 23.24);
enqueue_sin_dbl(my_list, 24.24);

printf("Testing Mix\n");


onep = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", onep);
oneq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", oneq);

twop = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", twop);
twoq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", twoq);

threep = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", threep);
threeq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", threeq);

fourp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", fourp);
fourq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", fourq);

fivep = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", fivep);
fiveq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", fiveq);

sixp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", sixp);
sixq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", sixq);

sevenp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", sevenp);
sevenq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", sevenq);

eightp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", eightp);
eightq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", eightq);

ninep = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", ninep);
nineq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", nineq);

tenp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", tenp);
tenq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", tenq);

elevenp = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", elevenp);
elevenq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", elevenq);

twelvep = pop_sin_dbl(my_list);
printf("The Popped Value is %lf\n", twelvep);
twelveq = dequeue_sin_dbl(my_list);
printf("The Dequeued Value is %lf\n", twelveq);

printf("Success Mix\n");



printf("filling list to test clear\n");

push_sin_dbl(my_list, 1);
push_sin_dbl(my_list, 2);
push_sin_dbl(my_list, 3);
push_sin_dbl(my_list, 4);
push_sin_dbl(my_list, 5);
push_sin_dbl(my_list, 6);
push_sin_dbl(my_list, 7);
push_sin_dbl(my_list, 8);
push_sin_dbl(my_list, 9);
push_sin_dbl(my_list, 10);
push_sin_dbl(my_list, 11);
push_sin_dbl(my_list, 12);

enqueue_sin_dbl(my_list, 13);
enqueue_sin_dbl(my_list, 14);
enqueue_sin_dbl(my_list, 15);
enqueue_sin_dbl(my_list, 16);
enqueue_sin_dbl(my_list, 17);
enqueue_sin_dbl(my_list, 18);
enqueue_sin_dbl(my_list, 19);
enqueue_sin_dbl(my_list, 20);
enqueue_sin_dbl(my_list, 21);
enqueue_sin_dbl(my_list, 22);
enqueue_sin_dbl(my_list, 23);
enqueue_sin_dbl(my_list, 24);

printf("Testing Clear\n");

clear_list_sin_dbl(my_list);

printf("Clear Success\n\n");




return 0;
}

