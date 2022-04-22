#include <stdio.h>
#include <stdlib.h>
#include "dbl_op_dbl.h"

void test_one(){

doubly_t* my_list = create_list_dbl_op_dbl();

printf("Testing push\n");

push_dbl_op_dbl(my_list, 1.12, 1);
push_dbl_op_dbl(my_list, 2.12, 2);
push_dbl_op_dbl(my_list, 3.12, 3);
push_dbl_op_dbl(my_list, 4.12, 4);
push_dbl_op_dbl(my_list, 5.12, 5);
push_dbl_op_dbl(my_list, 6.12, 6);
push_dbl_op_dbl(my_list, 7.12, 7);
push_dbl_op_dbl(my_list, 8.12, 8);
push_dbl_op_dbl(my_list, 9.12, 9);
push_dbl_op_dbl(my_list, 10.12, 10);
push_dbl_op_dbl(my_list, 11.12, 11);
push_dbl_op_dbl(my_list, 12.12, 12);

printf("Push Success\n\n");



printf("Testing Pop\n");

double* onep = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", onep[0], onep[1]);

double* twop = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", twop[0], onep[1]);

double* threep = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", threep[0], threep[1]);

double* fourp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", fourp[0], fourp[1]);

double* fivep = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", fivep[0], fourp[1]);

double* sixp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", sixp[0], sixp[1]);

double* sevenp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", sevenp[0], sevenp[1]);

double* eightp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", eightp[0], eightp[1]);

double* ninep = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", ninep[0], ninep[1]);

double* tenp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", tenp[0], tenp[1]);

double* elevenp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", elevenp[0], elevenp[1]);

double* twelvep = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", twelvep[0], twelvep[1]);

printf("Pop Success\n\n");



printf("Testing Enqueue\n");
enqueue_dbl_op_dbl(my_list, 1.15, 1);
enqueue_dbl_op_dbl(my_list, 2.15, 2);
enqueue_dbl_op_dbl(my_list, 3.15, 3);
enqueue_dbl_op_dbl(my_list, 4.15, 4);
enqueue_dbl_op_dbl(my_list, 5.15, 5);
enqueue_dbl_op_dbl(my_list, 6.15, 6);
enqueue_dbl_op_dbl(my_list, 7.15, 7);
enqueue_dbl_op_dbl(my_list, 8.15, 8);
enqueue_dbl_op_dbl(my_list, 9.15, 9);
enqueue_dbl_op_dbl(my_list, 10.15, 10);
enqueue_dbl_op_dbl(my_list, 11.15, 11);
enqueue_dbl_op_dbl(my_list, 12.15, 12);
printf("Enqueue Sucess\n\n");



printf("Testing Dequeue\n");

double* oneq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", oneq[0], oneq[1]);

double* twoq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", twoq[0], twoq[1]);

double* threeq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", threeq[0], twoq[1]);

double* fourq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", fourq[0], fourq[1]);

double* fiveq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", fiveq[0], fiveq[1]);

double* sixq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", sixq[0], sixq[1]);

double* sevenq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", sevenq[0], sevenq[1]);

double* eightq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", eightq[0], eightq[1]);

double* nineq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", nineq[0], nineq[1]);

double* tenq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", tenq[0], nineq[1]);

double* elevenq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", elevenq[0], elevenq[1]);

double* twelveq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", twelveq[0], twelveq[1]);

printf("Dequeue Sucess\n\n");

printf("filling list to test Mix\n");

push_dbl_op_dbl(my_list, 1.24, 1);
push_dbl_op_dbl(my_list, 2.24, 2);
push_dbl_op_dbl(my_list, 3.24, 3);
push_dbl_op_dbl(my_list, 4.24, 4);
push_dbl_op_dbl(my_list, 5.24, 5);
push_dbl_op_dbl(my_list, 6.24, 6);
push_dbl_op_dbl(my_list, 7.24, 7);
push_dbl_op_dbl(my_list, 8.24, 8);
push_dbl_op_dbl(my_list, 9.24, 9);
push_dbl_op_dbl(my_list, 10.24, 10);
push_dbl_op_dbl(my_list, 11.24, 11);
push_dbl_op_dbl(my_list, 12.24, 12);

enqueue_dbl_op_dbl(my_list, 13.24, 13);
enqueue_dbl_op_dbl(my_list, 14.24, 14);
enqueue_dbl_op_dbl(my_list, 15.24, 15);
enqueue_dbl_op_dbl(my_list, 16.24, 16);
enqueue_dbl_op_dbl(my_list, 17.24, 17);
enqueue_dbl_op_dbl(my_list, 18.24, 18);
enqueue_dbl_op_dbl(my_list, 19.24, 19);
enqueue_dbl_op_dbl(my_list, 20.24, 20);
enqueue_dbl_op_dbl(my_list, 21.24, 21);
enqueue_dbl_op_dbl(my_list, 22.24, 22);
enqueue_dbl_op_dbl(my_list, 23.24, 23);
enqueue_dbl_op_dbl(my_list, 24.24, 24);

printf("Testing Mix\n");

onep = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", onep[0], onep[1]);
oneq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", oneq[0], oneq[1]);

twop = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", twop[0], twop[1]);
twoq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", twoq[0], twoq[1]);

threep = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", threep[0], threep[1]);
threeq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", threeq[0], threeq[1]);

fourp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", fourp[0], fourp[1]);
fourq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", fourq[0], fourq[1]);

fivep = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", fivep[0], fivep[1]);
fiveq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", fiveq[0], fiveq[1]);

sixp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", sixp[0], sixp[1]);
sixq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", sixq[0], sixq[1]);

sevenp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", sevenp[0], sevenp[1]);
sevenq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", sevenq[0], sevenq[1]);

eightp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", eightp[0], eightp[1]);
eightq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", eightq[0], eightq[1]);

ninep = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", ninep[0], ninep[1]);
nineq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", nineq[0], nineq[1]);

tenp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", tenp[0], tenp[1]);
tenq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", tenq[0], tenq[1]);

elevenp = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", elevenp[0], elevenp[1]);
elevenq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", elevenq[0], elevenq[1]);

twelvep = pop_dbl_op_dbl(my_list);
printf("The Popped Value is (%lf, %lf)\n", twelvep[0], twelvep[1]);
twelveq = dequeue_dbl_op_dbl(my_list);
printf("The Dequeued Value is (%lf, %lf)\n", twelveq[0], twelvep[1]);

printf("Success Mix\n");


printf("filling list to test clear\n");

push_dbl_op_dbl(my_list, 1, 1);
push_dbl_op_dbl(my_list, 2, 2);
push_dbl_op_dbl(my_list, 3, 3);
push_dbl_op_dbl(my_list, 4, 4);
push_dbl_op_dbl(my_list, 5, 5);
push_dbl_op_dbl(my_list, 6, 6);
push_dbl_op_dbl(my_list, 7, 7);
push_dbl_op_dbl(my_list, 8, 8);
push_dbl_op_dbl(my_list, 9, 9);
push_dbl_op_dbl(my_list, 10, 10);
push_dbl_op_dbl(my_list, 11, 11);
push_dbl_op_dbl(my_list, 12, 12);

enqueue_dbl_op_dbl(my_list, 13, 13);
enqueue_dbl_op_dbl(my_list, 14, 14);
enqueue_dbl_op_dbl(my_list, 15, 15);
enqueue_dbl_op_dbl(my_list, 16, 16);
enqueue_dbl_op_dbl(my_list, 17, 17);
enqueue_dbl_op_dbl(my_list, 18, 18);
enqueue_dbl_op_dbl(my_list, 19, 19);
enqueue_dbl_op_dbl(my_list, 20, 20);
enqueue_dbl_op_dbl(my_list, 21, 21);
enqueue_dbl_op_dbl(my_list, 22, 22);
enqueue_dbl_op_dbl(my_list, 23, 23);
enqueue_dbl_op_dbl(my_list, 24, 24);


printf("Testing Clear\n");

destroy_list_dbl_op_dbl(my_list);

printf("Clear Success\n");
}


void test_two(){

    doubly_t* my_list = create_list_dbl_op_dbl();

    printf("Testing Inserts\n");

    insert_at_head_dbl_op_dbl(my_list, 1, 1);
    insert_at_head_dbl_op_dbl(my_list, 2, 2);
    insert_at_tail_dbl_op_dbl(my_list, 21, 21);
    insert_at_head_dbl_op_dbl(my_list, 3, 3);
    insert_at_head_dbl_op_dbl(my_list, 4, 4);
    insert_at_head_dbl_op_dbl(my_list, 5, 5);
    insert_at_tail_dbl_op_dbl(my_list, 22, 22);

    int len = ret_len_dbl_op_dbl(my_list);
    printf("The Length of the list is %d\n", len);

    printf("Inserts Done\n");

    printf("Testing Forward Iteration\n");
    itr_forward_dbl_op_dbl(my_list, 0, 0, 1, 0, 0);
    printf("Forward Iteration Done\n");

    printf("Testing Backward Iteration\n");
    itr_backward_dbl_op_dbl(my_list, 0, 0, 1, 0, 0);
    printf("Forward Backward Done\n");
    
    printf("Testing Removals\n");

    double* one = remove_at_head_dbl_op_dbl(my_list);
    printf("(%lf, %lf)\n", one[0], one[1]);

    double* two = remove_at_tail_dbl_op_dbl(my_list);
    printf("(%lf, %lf)\n", two[0], two[1]);

    double* three = remove_at_head_dbl_op_dbl(my_list);
    printf("(%lf, %lf)\n", three[0], three[1]);

    double* four = remove_at_tail_dbl_op_dbl(my_list);
    printf("(%lf, %lf)\n", four[0], four[1]);

    double* five = remove_at_head_dbl_op_dbl(my_list);
    printf("(%lf, %lf)\n", five[0], five[1]);

    double* six = remove_at_head_dbl_op_dbl(my_list);
    printf("(%lf, %lf)\n", six[0], six[1]);

    double* seven = remove_at_head_dbl_op_dbl(my_list);
    printf("(%lf, %lf)\n", seven[0], seven[1]);

    printf("Removal Success\n");

    destroy_list_dbl_op_dbl(my_list);

}


void test_three(){

    doubly_t* my_list = create_list_dbl_op_dbl();

    printf("Testing Index Inserts\n");
    insert_after_index_dbl_op_dbl(my_list, 1, 1, 0);
    insert_after_index_dbl_op_dbl(my_list, 2, 2, 0);
    insert_after_index_dbl_op_dbl(my_list, 21, 21, ret_len_dbl_op_dbl(my_list)-1);
    insert_after_index_dbl_op_dbl(my_list, 3, 3, 0);
    insert_after_index_dbl_op_dbl(my_list, 4, 4, 0);
    insert_after_index_dbl_op_dbl(my_list, 5, 5, 0);
    insert_after_index_dbl_op_dbl(my_list, 22, 22, ret_len_dbl_op_dbl(my_list)-1);

    insert_after_index_dbl_op_dbl(my_list, 10, 10, 2);
    insert_after_index_dbl_op_dbl(my_list, 11, 11, 0);
    insert_after_index_dbl_op_dbl(my_list, 12, 12, 7);
    insert_after_index_dbl_op_dbl(my_list, 13, 13, 4);

    itr_forward_dbl_op_dbl(my_list, 0, 0, 1, 0, 0);

    int len = ret_len_dbl_op_dbl(my_list);
    printf("The Length of the list is %d\n", len);
    printf("END INSERTS\n");

    printf("Test Delete at Index\n");
    
    
    double* one = delete_at_index_dbl_op_dbl(my_list, 5);
    printf("(%lf, %lf)\n", one[0], one[1]);

    double* two = delete_at_index_dbl_op_dbl(my_list, 1);
    printf("(%lf, %lf)\n", two[0], two[1]);

    double* three = delete_at_index_dbl_op_dbl(my_list, 3);
    printf("(%lf, %lf)\n", three[0], three[1]);

    double* four = delete_at_index_dbl_op_dbl(my_list, 6);
    printf("(%lf, %lf)\n", four[0], four[1]);

    double* five = delete_at_index_dbl_op_dbl(my_list, 0);
    printf("(%lf, %lf)\n", five[0], five[1]);

    double* six = delete_at_index_dbl_op_dbl(my_list, 5);
    printf("(%lf, %lf)\n", six[0], six[1]);

    double* seven = delete_at_index_dbl_op_dbl(my_list, 2);
    printf("(%lf, %lf)\n", seven[0], seven[1]);

    double* eight = delete_at_index_dbl_op_dbl(my_list, 2);
    printf("(%lf, %lf)\n", eight[0], eight[1]);

    double* nine = delete_at_index_dbl_op_dbl(my_list, 1);
    printf("(%lf, %lf)\n", nine[0], nine[1]);

    double* ten = delete_at_index_dbl_op_dbl(my_list, 1);
    printf("(%lf, %lf)\n", ten[0], ten[1]);

    double* eleven = delete_at_index_dbl_op_dbl(my_list, 0);
    printf("(%lf, %lf)\n", eleven[0], eleven[1]);

    printf("after delete\n");
    itr_forward_dbl_op_dbl(my_list, 0, 0, 1, 0, 0);
    printf("END\n");

    printf("Testing Value Inserts\n");

    insert_after_val_dbl_op_dbl(my_list, 1, 1, 5, 5);
    insert_after_val_dbl_op_dbl(my_list, 2, 2, 1, 1);
    insert_after_val_dbl_op_dbl(my_list, 3, 3, 2, 2);
    insert_after_val_dbl_op_dbl(my_list, 4, 4, 3, 3);
    insert_after_val_dbl_op_dbl(my_list, 5, 5, 4, 4);

    insert_after_val_dbl_op_dbl(my_list, 10, 10, 1, 1);
    insert_after_val_dbl_op_dbl(my_list, 11, 11, 2, 2);
    insert_after_val_dbl_op_dbl(my_list, 12, 12, 3, 3);
    insert_after_val_dbl_op_dbl(my_list, 13, 13, 4, 4);
    insert_after_val_dbl_op_dbl(my_list, 14, 14, 5, 5);

    insert_after_val_dbl_op_dbl(my_list, 27, 27, 11, 11);

    itr_forward_dbl_op_dbl(my_list, 0, 0, 1, 0, 0);

    len = ret_len_dbl_op_dbl(my_list);
    printf("The Length of the list is %d\n", len);
    printf("END INSERTS\n");

    printf("Test Delete after Value\n");

    one = delete_by_val_dbl_op_dbl(my_list, 11, 11);
    printf("(%lf, %lf)\n", one[0], one[1]);

    two = delete_by_val_dbl_op_dbl(my_list, 12, 12);
    printf("(%lf, %lf)\n", two[0], two[1]);

    three = delete_by_val_dbl_op_dbl(my_list, 10, 10);
    printf("(%lf, %lf)\n", three[0], three[1]);

    four = delete_by_val_dbl_op_dbl(my_list, 13, 13);
    printf("(%lf, %lf)\n", four[0], four[1]);

    five = delete_by_val_dbl_op_dbl(my_list, 14, 14);
    printf("(%lf, %lf)\n", five[0], five[1]);

    six = delete_by_val_dbl_op_dbl(my_list, 27, 27);
    printf("(%lf, %lf)\n", six[0], six[1]);

    seven = delete_by_val_dbl_op_dbl(my_list, 5, 5);
    printf("(%lf, %lf)\n", seven[0], seven[1]);

    eight = delete_by_val_dbl_op_dbl(my_list, 4, 4);
    printf("(%lf, %lf)\n", eight[0], eight[1]);

    nine = delete_by_val_dbl_op_dbl(my_list, 3, 3);
    printf("(%lf, %lf)\n", nine[0], nine[1]);

    ten = delete_by_val_dbl_op_dbl(my_list, 2, 2);
    printf("(%lf, %lf)\n", ten[0], ten[1]);

    eleven = delete_by_val_dbl_op_dbl(my_list, 1, 1);
    printf("(%lf, %lf)\n", eleven[0], eleven[1]);

    printf("after delete\n");
    itr_forward_dbl_op_dbl(my_list, 0, 0, 1, 0, 0);
    printf("END\n");

    destroy_list_dbl_op_dbl(my_list);

}



int main(){

test_one();
test_two();
test_three();


return 0;
}

