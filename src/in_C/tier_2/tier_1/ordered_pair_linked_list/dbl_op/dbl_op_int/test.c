#include <stdio.h>
#include <stdlib.h>

#include "dbl_op_int.h"

void test_one(){

doubly_t* my_list = create_list_dbl_op_int();

printf("Testing push\n");

push_dbl_op_int(my_list, 1.12);
push_dbl_op_int(my_list, 2.12);
push_dbl_op_int(my_list, 3.12);
push_dbl_op_int(my_list, 4.12);
push_dbl_op_int(my_list, 5.12);
push_dbl_op_int(my_list, 6.12);
push_dbl_op_int(my_list, 7.12);
push_dbl_op_int(my_list, 8.12);
push_dbl_op_int(my_list, 9.12);
push_dbl_op_int(my_list, 10.12);
push_dbl_op_int(my_list, 11.12);
push_dbl_op_int(my_list, 12.12);

printf("Push Success\n\n");



printf("Testing Pop\n");

int onep = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", onep);

int twop = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", twop);

int threep = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", threep);

int fourp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", fourp);

int fivep = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", fivep);

int sixp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", sixp);

int sevenp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", sevenp);

int eightp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", eightp);

int ninep = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", ninep);

int tenp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", tenp);

int elevenp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", elevenp);

int twelvep = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", twelvep);

printf("Pop Success\n\n");




printf("Testing Enqueue\n");
enqueue_dbl_op_int(my_list, 1.15);
enqueue_dbl_op_int(my_list, 2.15);
enqueue_dbl_op_int(my_list, 3.15);
enqueue_dbl_op_int(my_list, 4.15);
enqueue_dbl_op_int(my_list, 5.15);
enqueue_dbl_op_int(my_list, 6.15);
enqueue_dbl_op_int(my_list, 7.15);
enqueue_dbl_op_int(my_list, 8.15);
enqueue_dbl_op_int(my_list, 9.15);
enqueue_dbl_op_int(my_list, 10.15);
enqueue_dbl_op_int(my_list, 11.15);
enqueue_dbl_op_int(my_list, 12.15);
printf("Enqueue Sucess\n\n");


printf("Testing Dequeue\n");

int oneq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", oneq);

int twoq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", twoq);

int threeq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", threeq);

int fourq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", fourq);

int fiveq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", fiveq);

int sixq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", sixq);

int sevenq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", sevenq);

int eightq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", eightq);

int nineq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", nineq);

int tenq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", tenq);

int elevenq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", elevenq);

int twelveq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", twelveq);

printf("Dequeue Sucess\n\n");

printf("filling list to test Mix\n");

push_dbl_op_int(my_list, 1.24);
push_dbl_op_int(my_list, 2.24);
push_dbl_op_int(my_list, 3.24);
push_dbl_op_int(my_list, 4.24);
push_dbl_op_int(my_list, 5.24);
push_dbl_op_int(my_list, 6.24);
push_dbl_op_int(my_list, 7.24);
push_dbl_op_int(my_list, 8.24);
push_dbl_op_int(my_list, 9.24);
push_dbl_op_int(my_list, 10.24);
push_dbl_op_int(my_list, 11.24);
push_dbl_op_int(my_list, 12.24);

enqueue_dbl_op_int(my_list, 13.24);
enqueue_dbl_op_int(my_list, 14.24);
enqueue_dbl_op_int(my_list, 15.24);
enqueue_dbl_op_int(my_list, 16.24);
enqueue_dbl_op_int(my_list, 17.24);
enqueue_dbl_op_int(my_list, 18.24);
enqueue_dbl_op_int(my_list, 19.24);
enqueue_dbl_op_int(my_list, 20.24);
enqueue_dbl_op_int(my_list, 21.24);
enqueue_dbl_op_int(my_list, 22.24);
enqueue_dbl_op_int(my_list, 23.24);
enqueue_dbl_op_int(my_list, 24.24);

printf("Testing Mix\n");

onep = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", onep);
oneq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", oneq);

twop = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", twop);
twoq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", twoq);

threep = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", threep);
threeq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", threeq);

fourp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", fourp);
fourq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", fourq);

fivep = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", fivep);
fiveq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", fiveq);

sixp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", sixp);
sixq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", sixq);

sevenp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", sevenp);
sevenq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", sevenq);

eightp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", eightp);
eightq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", eightq);

ninep = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", ninep);
nineq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", nineq);

tenp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", tenp);
tenq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", tenq);

elevenp = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", elevenp);
elevenq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", elevenq);

twelvep = pop_dbl_op_int(my_list);
printf("The Popped Value is %d\n", twelvep);
twelveq = dequeue_dbl_op_int(my_list);
printf("The Dequeued Value is %d\n", twelveq);

printf("Success Mix\n");


printf("filling list to test clear\n");

push_dbl_op_int(my_list, 1);
push_dbl_op_int(my_list, 2);
push_dbl_op_int(my_list, 3);
push_dbl_op_int(my_list, 4);
push_dbl_op_int(my_list, 5);
push_dbl_op_int(my_list, 6);
push_dbl_op_int(my_list, 7);
push_dbl_op_int(my_list, 8);
push_dbl_op_int(my_list, 9);
push_dbl_op_int(my_list, 10);
push_dbl_op_int(my_list, 11);
push_dbl_op_int(my_list, 12);

enqueue_dbl_op_int(my_list, 13);
enqueue_dbl_op_int(my_list, 14);
enqueue_dbl_op_int(my_list, 15);
enqueue_dbl_op_int(my_list, 16);
enqueue_dbl_op_int(my_list, 17);
enqueue_dbl_op_int(my_list, 18);
enqueue_dbl_op_int(my_list, 19);
enqueue_dbl_op_int(my_list, 20);
enqueue_dbl_op_int(my_list, 21);
enqueue_dbl_op_int(my_list, 22);
enqueue_dbl_op_int(my_list, 23);
enqueue_dbl_op_int(my_list, 24);


printf("Testing Clear\n");

destroy_list_dbl_op_int(my_list);

printf("Clear Success\n");
}


void test_two(){

    doubly_t* my_list = create_list_dbl_op_int();

    printf("Testing Inserts\n");

    insert_at_head_dbl_op_int(my_list, 1);
    insert_at_head_dbl_op_int(my_list, 2);
    insert_at_tail_dbl_op_int(my_list, 21);
    insert_at_head_dbl_op_int(my_list, 3);
    insert_at_head_dbl_op_int(my_list, 4);
    insert_at_head_dbl_op_int(my_list, 5);
    insert_at_tail_dbl_op_int(my_list, 22);

    int len = ret_len_dbl_op_int(my_list);
    printf("The Length of the list is %d\n", len);

    printf("Inserts Done\n");

    printf("Testing Forward Iteration\n");
    itr_forward_dbl_op_int(my_list, 0, 0, 1, 0, 0);
    printf("Forward Iteration Done\n");

    printf("Testing Backward Iteration\n");
    itr_backward_dbl_op_int(my_list, 0, 0, 1, 0, 0);
    printf("Forward Backward Done\n");
    
    printf("Testing Removals\n");

    int one = remove_at_head_dbl_op_int(my_list);
    printf("%d\n", one);

    int two = remove_at_tail_dbl_op_int(my_list);
    printf("%d\n", two);

    int three = remove_at_head_dbl_op_int(my_list);
    printf("%d\n", three);

    int four = remove_at_tail_dbl_op_int(my_list);
    printf("%d\n", four);

    int five = remove_at_head_dbl_op_int(my_list);
    printf("%d\n", five);

    int six = remove_at_tail_dbl_op_int(my_list);
    printf("%d\n", six);

    int seven = remove_at_tail_dbl_op_int(my_list);
    printf("%d\n", seven);

    printf("Removal Success\n");

    destroy_list_dbl_op_int(my_list);

}

void test_three(){

    doubly_t* my_list = create_list_dbl_op_int();

    printf("Testing Index Inserts\n");
    insert_after_index_dbl_op_int(my_list, 1, 0);
    insert_after_index_dbl_op_int(my_list, 2, 0);
    insert_after_index_dbl_op_int(my_list, 21, ret_len_dbl_op_int(my_list)-1);
    insert_after_index_dbl_op_int(my_list, 3, 0);
    insert_after_index_dbl_op_int(my_list, 4, 0);
    insert_after_index_dbl_op_int(my_list, 5, 0);
    insert_after_index_dbl_op_int(my_list, 22, ret_len_dbl_op_int(my_list)-1);

    insert_after_index_dbl_op_int(my_list, 10, 2);
    insert_after_index_dbl_op_int(my_list, 11, 0);
    insert_after_index_dbl_op_int(my_list, 12, 7);
    insert_after_index_dbl_op_int(my_list, 13, 4);

    itr_forward_dbl_op_int(my_list, 0, 0, 1, 0, 0);

    int len = ret_len_dbl_op_int(my_list);
    printf("The Length of the list is %d\n", len);
    printf("END INSERTS\n");

    printf("Test Delete at Index\n");
    
    
    int one = delete_at_index_dbl_op_int(my_list, 5);
    printf("%d\n", one);

    int two = delete_at_index_dbl_op_int(my_list, 1);
    printf("%d\n", two);

    int three = delete_at_index_dbl_op_int(my_list, 3);
    printf("%d\n", three);

    int four = delete_at_index_dbl_op_int(my_list, 6);
    printf("%d\n", four);

    int five = delete_at_index_dbl_op_int(my_list, 0);
    printf("%d\n", five);

    int six = delete_at_index_dbl_op_int(my_list, 5);
    printf("%d\n", six);

    int seven = delete_at_index_dbl_op_int(my_list, 2);
    printf("%d\n", seven);

    int eight = delete_at_index_dbl_op_int(my_list, 2);
    printf("%d\n", eight);

    int nine = delete_at_index_dbl_op_int(my_list, 1);
    printf("%d\n", nine);

    int ten = delete_at_index_dbl_op_int(my_list, 1);
    printf("%d\n", ten);

    int eleven = delete_at_index_dbl_op_int(my_list, 0);
    printf("%d\n", eleven);

    printf("after delete\n");
    itr_forward_dbl_op_int(my_list, 0, 0, 1, 0, 0);
    printf("END\n");

    printf("Testing Value Inserts\n");

    insert_after_val_dbl_op_int(my_list, 1, 5);
    insert_after_val_dbl_op_int(my_list, 2, 1);
    insert_after_val_dbl_op_int(my_list, 3, 2);
    insert_after_val_dbl_op_int(my_list, 4, 3);
    insert_after_val_dbl_op_int(my_list, 5, 4);

    insert_after_val_dbl_op_int(my_list, 10, 1);
    insert_after_val_dbl_op_int(my_list, 11, 2);
    insert_after_val_dbl_op_int(my_list, 12, 3);
    insert_after_val_dbl_op_int(my_list, 13, 4);
    insert_after_val_dbl_op_int(my_list, 14, 5);

    insert_after_val_dbl_op_int(my_list, 27, 11);

    itr_forward_dbl_op_int(my_list, 0, 0, 1, 0, 0);

    len = ret_len_dbl_op_int(my_list);
    printf("The Length of the list is %d\n", len);
    printf("END INSERTS\n");

    printf("Test Delete after Value\n");

    one = delete_by_val_dbl_op_int(my_list, 11);
    printf("%d\n", one);

    two = delete_by_val_dbl_op_int(my_list, 12);
    printf("%d\n", two);

    three = delete_by_val_dbl_op_int(my_list, 10);
    printf("%d\n", three);

    four = delete_by_val_dbl_op_int(my_list, 13);
    printf("%d\n", four);

    five = delete_by_val_dbl_op_int(my_list, 14);
    printf("%d\n", five);

    six = delete_by_val_dbl_op_int(my_list, 27);
    printf("%d\n", six);

    seven = delete_by_val_dbl_op_int(my_list, 5);
    printf("%d\n", seven);

    eight = delete_by_val_dbl_op_int(my_list, 4);
    printf("%d\n", eight);

    nine = delete_by_val_dbl_op_int(my_list, 3);
    printf("%d\n", nine);

    ten = delete_by_val_dbl_op_int(my_list, 2);
    printf("%d\n", ten);

    eleven = delete_by_val_dbl_op_int(my_list, 1);
    printf("%d\n", eleven);

    printf("after delete\n");
    itr_forward_dbl_op_int(my_list, 0, 0, 1, 0, 0);
    printf("END\n");

    destroy_list_dbl_op_int(my_list);

}



int main(){

test_one();
test_two();
test_three();


return 0;
}

