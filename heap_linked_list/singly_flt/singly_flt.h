#ifndef singlyLinkedFlt_H_
#define signlyLinkedFlt_H_

typedef struct singly_dbl singly_dbl_t;
typedef struct singly singly_t;

singly_t* create_list();
void clear_list(singly_t* list);

void push(singly_t* list, double val);
double pop(singly_t* list);

void enqueue(singly_t* list, double val);
double dequeue(singly_t* list);


#endif
