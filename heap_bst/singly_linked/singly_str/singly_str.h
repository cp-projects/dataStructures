#ifndef singlyLinkedStr_H_
#define signlyLinkedStr_H_

typedef struct singly_str singly_str_t;
typedef struct singly singly_t;

singly_t* create_list();
size_t ret_len(singly_t* list);
void clear_list(singly_t* list);

void push(singly_t* list, char* val, int str_len);
//char** pop(singly_t* list, char** val);
char* pop(singly_t* list, singly_t* popped);

void enqueue(singly_t* list, char* val, int str_len);
char* dequeue(singly_t* list);


#endif
