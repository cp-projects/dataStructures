#ifndef doublyLinkedDbl_H_
#define doublyLinkedDbl_H_

typedef struct doubly_dbl doubly_dbl_t;
typedef struct doubly doubly_t;

doubly_t* create_list();
size_t ret_size(doubly_t* list);
void clear_list(doubly_t* list);

void push(doubly_t* list, double val);
double pop(doubly_t* list);

void enqueue(doubly_t* list, double val);
double dequeue(doubly_t* list);


#endif
