#pragma once

#include <iostream>

struct node_dbl{
    double* val;
    node_dbl *next;
};

struct node_int{
    int* val;
    node_int *next;
};

class singly_linked{    
    
    private:
        
	typedef struct {
            union {
                unsigned DBL : 1;
                int container_one;
	        unsigned INT : 1;
              };
           bool dbl_flag = container_one & 1;
	   bool int_flag = container_one & 1<<31;

        } flags_t;

	//flags bitvector
	flags_t* flags;

	//head options    
	node_dbl* m_head_dbl;
	node_int* m_head_int;
	
	//size options
	int m_len_total;
	int m_len_dbl;
	int m_len_int;

    
    public:
        singly_linked();
	~singly_linked();

	int get_flag_dbl();
	int get_flag_int();

	short set_flag_dbl(short one_or_zero);
	short set_flag_int(short one_or_zero);

        int get_len_total();
        int get_len_dbl();
	int get_len_int();

	void set_len(int len);

	node_dbl* get_head_dbl();
	void set_head(node_dbl* new_head);
	node_int* get_head_int();
        void set_head(node_int* new_head);
	
};


