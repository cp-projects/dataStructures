#ifndef doublyLinkedInt_H_
#define doublyLinkedInt_H_

typedef struct doubly_int doubly_int_t;
typedef struct doubly doubly_t;

doubly_t* create_list();
size_t ret_val(doubly_t* list);
void clear_list(doubly_t* list);

void push(doubly_t* list, int val);
int pop(doubly_t* list);

void enqueue(doubly_t* list, int val);
int dequeue(doubly_t* list);


#endif
