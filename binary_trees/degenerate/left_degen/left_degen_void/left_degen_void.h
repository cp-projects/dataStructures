#ifndef leftDegenVoid_H_
#define leftDegenVoid_H_

typedef struct singly_int singly_int_t;
typedef struct singly singly_t;

singly_t* create_list();
size_t ret_len(singly_t* list);
void clear_list(singly_t* list);

void push(singly_t* list, int val);
int pop(singly_t* list);

void enqueue(singly_t* list, int val);
int dequeue(singly_t* list);


#endif
