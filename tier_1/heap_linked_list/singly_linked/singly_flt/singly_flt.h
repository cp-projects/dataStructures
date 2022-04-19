#ifndef singlyLinkedFlt_H_
#define signlyLinkedFlt_H_

typedef struct singly_flt singly_flt_t;
typedef struct singly singly_t;

singly_t* create_list_sin_flt();
size_t ret_len_sin_flt(singly_t* list);
void clear_list_sin_flt(singly_t* list);

void push_sin_flt(singly_t* list, float val);
float pop_sin_flt(singly_t* list);

void enqueue_sin_flt(singly_t* list, float val);
float dequeue_sin_flt(singly_t* list);


#endif
