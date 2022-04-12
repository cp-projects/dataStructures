#include <stdio.h>
#include <stdlib.h>
#include "doubly_dbl.h"

void test_one(){

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

destroy_list(my_list);

printf("Clear Success\n");
}


void test_two(){

    doubly_t* my_list = create_list();

    printf("Testing Inserts\n");

    insert_at_head(my_list, 1);
    insert_at_head(my_list, 2);
    insert_at_tail(my_list, 21);
    insert_at_head(my_list, 3);
    insert_at_head(my_list, 4);
    insert_at_head(my_list, 5);
    insert_at_tail(my_list, 22);

    int len = ret_len(my_list);
    printf("The Length of the list is %d\n", len);

    printf("Inserts Done\n");

    printf("Testing Forward Iteration\n");
    itr_forward(my_list, 0, 0, 1, 0, 0);
    printf("Forward Iteration Done\n");

    printf("Testing Backward Iteration\n");
    itr_backward(my_list, 0, 0, 1, 0, 0);
    printf("Forward Backward Done\n");
    
    printf("Testing Removals\n");

    double one = remove_at_head(my_list);
    printf("%lf\n", one);

    double two = remove_at_tail(my_list);
    printf("%lf\n", two);

    double three = remove_at_head(my_list);
    printf("%lf\n", three);

    double four = remove_at_tail(my_list);
    printf("%lf\n", four);

    double five = remove_at_head(my_list);
    printf("%lf\n", five);

    double six = remove_at_tail(my_list);
    printf("%lf\n", six);

    double seven = remove_at_tail(my_list);
    printf("%lf\n", seven);

    printf("Removal Success\n");

    destroy_list(my_list);

}

void test_three(){

    doubly_t* my_list = create_list();

    printf("Testing Index Inserts\n");
    insert_after_index(my_list, 1, 0);
    insert_after_index(my_list, 2, 0);
    insert_after_index(my_list, 21, ret_len(my_list)-1);
    insert_after_index(my_list, 3, 0);
    insert_after_index(my_list, 4, 0);
    insert_after_index(my_list, 5, 0);
    insert_after_index(my_list, 22, ret_len(my_list)-1);

    insert_after_index(my_list, 10, 2);
    insert_after_index(my_list, 11, 0);
    insert_after_index(my_list, 12, 7);
    insert_after_index(my_list, 13, 4);

    itr_forward(my_list, 0, 0, 1, 0, 0);

    int len = ret_len(my_list);
    printf("The Length of the list is %d\n", len);
    printf("END INSERTS\n");

    printf("Test Delete at Index\n");
    
    
    double one = delete_at_index(my_list, 5);
    printf("%lf\n", one);

    double two = delete_at_index(my_list, 1);
    printf("%lf\n", two);

    double three = delete_at_index(my_list, 3);
    printf("%lf\n", three);

    double four = delete_at_index(my_list, 6);
    printf("%lf\n", four);

    double five = delete_at_index(my_list, 0);
    printf("%lf\n", five);

    double six = delete_at_index(my_list, 5);
    printf("%lf\n", six);

    double seven = delete_at_index(my_list, 2);
    printf("%lf\n", seven);

    double eight = delete_at_index(my_list, 2);
    printf("%lf\n", eight);

    double nine = delete_at_index(my_list, 1);
    printf("%lf\n", nine);

    double ten = delete_at_index(my_list, 1);
    printf("%lf\n", ten);

    double eleven = delete_at_index(my_list, 0);
    printf("%lf\n", eleven);

    printf("after delete\n");
    itr_forward(my_list, 0, 0, 1, 0, 0);
    printf("END\n");

    printf("Testing Value Inserts\n");

    insert_after_val(my_list, 1, 5);
    insert_after_val(my_list, 2, 1);
    insert_after_val(my_list, 3, 2);
    insert_after_val(my_list, 4, 3);
    insert_after_val(my_list, 5, 4);

    insert_after_val(my_list, 10, 1);
    insert_after_val(my_list, 11, 2);
    insert_after_val(my_list, 12, 3);
    insert_after_val(my_list, 13, 4);
    insert_after_val(my_list, 14, 5);

    insert_after_val(my_list, 27, 11);

    itr_forward(my_list, 0, 0, 1, 0, 0);


    destroy_list(my_list);

}



int main(){

//test_one();
//test_two();
test_three();


return 0;
}

