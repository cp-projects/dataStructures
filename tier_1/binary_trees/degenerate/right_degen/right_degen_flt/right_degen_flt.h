#ifndef rightDegenFlt_H_
#define rightDegenFlt_H_

typedef struct singly_flt singly_flt_t;
typedef struct singly singly_t;

singly_t* create_list();
size_t ret_len(singly_t* list);
void clear_list(singly_t* list);

void push(singly_t* list, float val);
float pop(singly_t* list);

void enqueue(singly_t* list, float val);
float dequeue(singly_t* list);


#endif
