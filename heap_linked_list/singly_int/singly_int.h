#ifndef singlyLinkedInt_H_
#define signlyLinkedInt_H_

typedef struct singly_int singly_int_t;
typedef struct singly singly_t;

singly_t* create_list();

void clear_list(const singly_t* list);

singly_t* push(const singly_t* list, int val);


#endif
