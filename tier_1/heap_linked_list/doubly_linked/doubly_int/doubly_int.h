#ifndef doublyLinkedInt_H_
#define doublyLinkedInt_H_


//data structures
typedef struct doubly_int doubly_int_t;
typedef struct doubly doubly_t;

//create
doubly_t* create_list_dbl_int();

//destroy
void clear_list_dbl_int(doubly_t* list);
void destroy_list_dbl_int(doubly_t* list);

//information
size_t ret_len_dbl_int(doubly_t* list);

//stack
void push_dbl_int(doubly_t* list, int val); //(1) All one are the same
int pop_dbl_int(doubly_t* list); //(2)

//queue
void enqueue_dbl_int(doubly_t* list, int val); //(1) They are declared seperately
int dequeue_dbl_int(doubly_t* list); //(3)

/*
 * doubly
 *
 */

//iterators
doubly_int_t* itr_forward_dbl_int(doubly_t* list, int breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag);
doubly_int_t* itr_backward_dbl_int(doubly_t* list, int breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag);

//begining of list
void insert_at_head_dbl_int(doubly_t* list, int val); //(1) to seperate use cases
int remove_at_head_dbl_int(doubly_t* list); //(2)

//end of list
void insert_at_tail_dbl_int(doubly_t* list, int val);
int remove_at_tail_dbl_int(doubly_t* list); //(3)

//by index
void insert_after_index_dbl_int(doubly_t* list, int newVal, int index);
int delete_at_index_dbl_int(doubly_t* list, int index);

//by value
void insert_after_val_dbl_int(doubly_t* list, int newVal, int testVal);
int delete_by_val_dbl_int(doubly_t* list, int testVal);


#endif
