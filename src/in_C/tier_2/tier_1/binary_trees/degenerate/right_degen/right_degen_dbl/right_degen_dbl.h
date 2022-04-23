#ifndef rightDegenDbl_H_
#define rightDegenDbl_H_

typedef struct right_degen_bst_dbl right_degen_bst_dbl_t;
typedef struct right_degen_bst right_degen_bst_t;

right_degen_bst_t* create_tree_r_dg_bst_dbl();
size_t ret_len_r_dg_bst_dbl(right_degen_bst_t* tree);

void insert_r_dg_bst_dbl(right_degen_bst_t* tree, double val);
void remove_r_dg_bst_dbl(right_degen_bst_t* my_tree, double val);

static void clear_recursive_helper_r_dg_bst_dbl(right_degen_bst_dbl_t* node);
void clear_r_dg_bst_dbl(right_degen_bst_t* tree);
void destroy_r_dg_bst_dbl(right_degen_bst_t* tree);

/*
void clear_list(singly_t* list);

void push(singly_t* list, double val);
double pop(singly_t* list);

void enqueue(singly_t* list, double val);
double dequeue(singly_t* list);
*/

#endif
