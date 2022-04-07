#ifndef doublyLinkedDbl_H_
#define doublyLinkedDbl_H_

//data structures
typedef struct doubly_dbl doubly_dbl_t;
typedef struct doubly doubly_t;

//create
doubly_t* create_list();

//destroy
void clear_list(doubly_t* list);

//information
size_t ret_size(doubly_t* list);

//stack
void push(doubly_t* list, double val); //(1) All one are the same
double pop(doubly_t* list); //(2)

//queue
void enqueue(doubly_t* list, double val); //(1) They are declared seperately
double dequeue(doubly_t* list); //(3)

/*
 * doubly
 *
 */

//iterators
doubly_dbl_t* itr_forward(doubly_t* list, double breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag);
doubly_dbl_t* itr_backward(doubly_t* list, double breakVal, int breakIndex, int printFlag, int break_on_valFlag, int break_on_indexFlag);

//begining of list
void insert_at_head(doubly_t* list, double val); //(1) to seperate use cases
double remove_at_head(doubly_t* list); //(2)

//end of list
void insert_at_tail(doubly_t* list, double val);
double remove_at_tail(doubly_t* list); //(3)

//by index
void insert_at_index(doubly_t* list, double newVal, int index);
double delete_at_index(doubly_t* list, int index);

//by value
void insert_after_val(doubly_t* list, double newVal, double testVal);
double delete_by_val(doubly_t* list, double testVal);


#endif
