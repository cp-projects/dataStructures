#ifndef orderedPairsDbl_H_
#define orderedPairsDbl_H_

//data structures
typedef struct dbl_op_dbl dbl_op_dbl_t;
typedef struct doubly doubly_t;

//create
doubly_t* create_list_dbl_op_dbl();

//destroy
void clear_list_dbl_op_dbl(doubly_t* list);
void destroy_list_dbl_op_dbl(doubly_t* list);

//information
size_t ret_len_dbl_op_dbl(doubly_t* list);

//stack
void push_dbl_op_dbl(doubly_t* list, double X, double Y); //(1) All one are the same
double pop_dbl_op_dbl(doubly_t* list); //(2)

//queue
void enqueue_dbl_op_dbl(doubly_t* list, double val); //(1) They are declared seperately
double dequeue_dbl_op_dbl(doubly_t* list); //(3)

/*
 * doubly
 *
 */

//iterators
dbl_op_dbl_t* itr_forward_dbl_op_dbl(doubly_t* list, double breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag);
dbl_op_dbl_t* itr_backward_dbl_op_dbl(doubly_t* list, double breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag);

//begining of list
void insert_at_head_dbl_op_dbl(doubly_t* list, double val); //(1) to seperate use cases
double remove_at_head_dbl_op_dbl(doubly_t* list); //(2)

//end of list
void insert_at_tail_dbl_op_dbl(doubly_t* list, double val);
double remove_at_tail_dbl_op_dbl(doubly_t* list); //(3)

//by index
void insert_after_index_dbl_op_dbl(doubly_t* list, double newVal, int index);
double delete_at_index_dbl_op_dbl(doubly_t* list, int index);

//by value
void insert_after_val_dbl_op_dbl(doubly_t* list, double newVal, double testVal);
double delete_by_val_dbl_op_dbl(doubly_t* list, double testVal);


#endif
