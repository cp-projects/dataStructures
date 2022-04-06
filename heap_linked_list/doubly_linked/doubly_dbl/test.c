#include <stdio.h>
#include "doubly_dbl.h"


void old_test(){

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

double onep = pop(my_list);
printf("The Popped Value is %lf\n", onep);

double twop = pop(my_list);
printf("The Popped Value is %lf\n", twop);

double threep = pop(my_list);
printf("The Popped Value is %lf\n", threep);

double fourp = pop(my_list);
printf("The Popped Value is %lf\n", fourp);

double fivep = pop(my_list);
printf("The Popped Value is %lf\n", fivep);

double sixp = pop(my_list);
printf("The Popped Value is %lf\n", sixp);

double sevenp = pop(my_list);
printf("The Popped Value is %lf\n", sevenp);

double eightp = pop(my_list);
printf("The Popped Value is %lf\n", eightp);

double ninep = pop(my_list);
printf("The Popped Value is %lf\n", ninep);

double tenp = pop(my_list);
printf("The Popped Value is %lf\n", tenp);

double elevenp = pop(my_list);
printf("The Popped Value is %lf\n", elevenp);

double twelvep = pop(my_list);
printf("The Popped Value is %lf\n", twelvep);

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

double oneq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", oneq);

double twoq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", twoq);

double threeq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", threeq);

double fourq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", fourq);

double fiveq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", fiveq);

double sixq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", sixq);

double sevenq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", sevenq);

double eightq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", eightq);

double nineq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", nineq);

double tenq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", tenq);

double elevenq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", elevenq);

double twelveq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", twelveq);

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
printf("The Popped Value is %lf\n", onep);
oneq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", oneq);

twop = pop(my_list);
printf("The Popped Value is %lf\n", twop);
twoq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", twoq);

threep = pop(my_list);
printf("The Popped Value is %lf\n", threep);
threeq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", threeq);

fourp = pop(my_list);
printf("The Popped Value is %lf\n", fourp);
fourq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", fourq);

fivep = pop(my_list);
printf("The Popped Value is %lf\n", fivep);
fiveq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", fiveq);

sixp = pop(my_list);
printf("The Popped Value is %lf\n", sixp);
sixq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", sixq);

sevenp = pop(my_list);
printf("The Popped Value is %lf\n", sevenp);
sevenq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", sevenq);

eightp = pop(my_list);
printf("The Popped Value is %lf\n", eightp);
eightq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", eightq);

ninep = pop(my_list);
printf("The Popped Value is %lf\n", ninep);
nineq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", nineq);

tenp = pop(my_list);
printf("The Popped Value is %lf\n", tenp);
tenq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", tenq);

elevenp = pop(my_list);
printf("The Popped Value is %lf\n", elevenp);
elevenq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", elevenq);

twelvep = pop(my_list);
printf("The Popped Value is %lf\n", twelvep);
twelveq = dequeue(my_list);
printf("The Dequeued Value is %lf\n", twelveq);

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

printf("Clear Success\n");
}


void new_test(){

    doubly_t* my_list = create_list();

    insert_at_head(my_list, 1);
    insert_at_head(my_list, 2);
    insert_at_tail(my_list, 21);
    insert_at_head(my_list, 3);
    insert_at_head(my_list, 4);
    insert_at_head(my_list, 5);
    insert_at_tail(my_list, 22);

    itr_forward(my_list, 0, 0, 0, 0, 0);
    itr_backward(my_list, 0, 0, 1, 0, 0);
    
    
    //double one = remove_at_head(my_list);
    //printf("%lf\n", one);

    //double two = remove_at_tail(my_list);
    //printf("%lf\n", two);


    clear_list(my_list);

}


int main(){

//old_test();
new_test();

return 0;
}

