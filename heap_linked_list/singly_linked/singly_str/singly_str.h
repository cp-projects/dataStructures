#ifndef singlyLinkedStr_H_
#define signlyLinkedStr_H_

typedef struct singly_str singly_str_t;
typedef struct singly singly_t;

singly_t* create_list();
void clear_list(singly_t* list);

void push(singly_t* list, char* val, int str_len); //should be char* val and int len
const char* pop(singly_t* list);

void enqueue(singly_t* list, char* val, int str_len);
char* dequeue(singly_t* list);


#endif
