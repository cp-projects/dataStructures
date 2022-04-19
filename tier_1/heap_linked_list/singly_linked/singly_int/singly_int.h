#ifndef singlyLinkedInt_H_
#define signlyLinkedInt_H_

typedef struct singly_int singly_int_t;
typedef struct singly singly_t;

singly_t* create_list_sin_int();
size_t ret_len_sin_int(singly_t* list);
void clear_list_sin_int(singly_t* list);

void push_sin_int(singly_t* list, int val);
int pop_sin_int(singly_t* list);

void enqueue_sin_int(singly_t* list, int val);
int dequeue_sin_int(singly_t* list);


#endif
