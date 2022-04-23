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
                unsigned dbl_flag : 1;
                unsigned int_flag : 1;
                size_t size_of_flags;
              };
        } flags_t;

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

        int get_len_total();
        int get_len_dbl();
	int get_len_int();

	void set_len(int len);

	node_dbl* get_head_dbl();
	void set_head(node_dbl* new_head);
	node_int* get_head_int();
        void set_head(node_int* new_head);
	
};


