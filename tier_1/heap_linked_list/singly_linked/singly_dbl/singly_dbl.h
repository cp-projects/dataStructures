#ifndef singlyLinkedDbl_H_
#define signlyLinkedDbl_H_

typedef struct singly_dbl singly_dbl_t;
typedef struct singly singly_t;

singly_t* create_list_sin_dbl();
size_t ret_size_sin_dbl(singly_t* list);
void clear_list_sin_dbl(singly_t* list);

void push_sin_dbl(singly_t* list, double val);
double pop_sin_dbl(singly_t* list);

void enqueue_sin_dbl(singly_t* list, double val);
double dequeue_sin_dbl(singly_t* list);


#endif
