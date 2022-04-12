#include <stdio.h>
#include <stdlib.h>
#include "doubly_flt.h"

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

    float one = remove_at_head(my_list);
    printf("%f\n", one);

    float two = remove_at_tail(my_list);
    printf("%f\n", two);

    float three = remove_at_head(my_list);
    printf("%f\n", three);

    float four = remove_at_tail(my_list);
    printf("%f\n", four);

    float five = remove_at_head(my_list);
    printf("%f\n", five);

    float six = remove_at_tail(my_list);
    printf("%f\n", six);

    float seven = remove_at_tail(my_list);
    printf("%f\n", seven);

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
    
    
    float one = delete_at_index(my_list, 5);
    printf("%f\n", one);

    float two = delete_at_index(my_list, 1);
    printf("%f\n", two);

    float three = delete_at_index(my_list, 3);
    printf("%f\n", three);

    float four = delete_at_index(my_list, 6);
    printf("%f\n", four);

    float five = delete_at_index(my_list, 0);
    printf("%f\n", five);

    float six = delete_at_index(my_list, 5);
    printf("%f\n", six);

    float seven = delete_at_index(my_list, 2);
    printf("%f\n", seven);

    float eight = delete_at_index(my_list, 2);
    printf("%f\n", eight);

    float nine = delete_at_index(my_list, 1);
    printf("%f\n", nine);

    float ten = delete_at_index(my_list, 1);
    printf("%f\n", ten);

    float eleven = delete_at_index(my_list, 0);
    printf("%f\n", eleven);

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

    len = ret_len(my_list);
    printf("The Length of the list is %d\n", len);
    printf("END INSERTS\n");

    printf("Test Delete after Value\n");

    one = delete_by_val(my_list, 11);
    printf("%f\n", one);

    two = delete_by_val(my_list, 12);
    printf("%f\n", two);

    three = delete_by_val(my_list, 10);
    printf("%f\n", three);

    four = delete_by_val(my_list, 13);
    printf("%f\n", four);

    five = delete_by_val(my_list, 14);
    printf("%f\n", five);

    six = delete_by_val(my_list, 27);
    printf("%f\n", six);

    seven = delete_by_val(my_list, 5);
    printf("%f\n", seven);

    eight = delete_by_val(my_list, 4);
    printf("%f\n", eight);

    nine = delete_by_val(my_list, 3);
    printf("%f\n", nine);

    ten = delete_by_val(my_list, 2);
    printf("%f\n", ten);

    eleven = delete_by_val(my_list, 1);
    printf("%f\n", eleven);

    printf("after delete\n");
    itr_forward(my_list, 0, 0, 1, 0, 0);
    printf("END\n");

    destroy_list(my_list);

}



int main(){

test_one();
test_two();
test_three();


return 0;
}

