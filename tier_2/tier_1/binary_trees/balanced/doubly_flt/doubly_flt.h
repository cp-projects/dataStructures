#ifndef doublyLinkedFlt_H_
#define doublyLinkedFlt_H_

typedef struct doubly_flt doubly_flt_t;
typedef struct doubly doubly_t;

doubly_t* create_list();
size_t ret_size(doubly_t* list);
void clear_list(doubly_t* list);

void push(doubly_t* list, float val);
float pop(doubly_t* list);

void enqueue(doubly_t* list, float val);
float dequeue(doubly_t* list);


#endif
