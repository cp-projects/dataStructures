#pragma once
#include <iostream>
#include "node_types.hpp"


class singly_linked{    
    
    /*
       Private DATA
     
     */
    private: 

	//flags bitvector    
	typedef struct {
            union {
                unsigned DBL : 1;
		unsigned FLT : 1;
		unsigned INT : 1;
                char container_one;
	        unsigned STR : 1;
		unsigned VOID : 1;
              };
           bool dbl_flag = container_one & 1;
	   bool flt_flag = container_one & 1<<1;
	   bool int_flag = container_one & 1<<2;

	   bool str_flag = container_one & 1<<6;
	   bool void_flag = container_one & 1<<7;

        } flags_t;

	//flags bitvector
	flags_t* flags;

	//head options    
	node_dbl* m_head_dbl;
	node_int* m_head_int;
        node_flt* m_head_flt;
	node_str* m_head_str;
        node_void* m_head_void;

	//size options
	int m_len_total;
	int m_len_dbl;
	int m_len_int;
	int m_len_flt;
	int m_len_str;
	int m_len_void;

    /*
     * Public METHODS/FUNCTIONS
     * 
     * */
    public:

	/*
	 *  Constructor and Destructor
	 * */

	//Constructor
        singly_linked();
	//Destructor
	~singly_linked();

	/*
	 * Iterators
	 * */




	/*
	 * Print Methods
	 * */
	void print_flags();
	void print_lengths();
        
	/*
	 * Flags
	 * */
        
	// Flag Getters
	int get_flag_dbl();
	int get_flag_int();
	int get_flag_flt();
	int get_flag_str();
	int get_flag_void();
	
	//Public Length Setters
	short flag_on_dbl();
	short flag_off_dbl();

	short flag_on_int();
	short flag_off_int();

	short flag_on_flt();
        short flag_off_flt();

	short flag_on_str();
        short flag_off_str();

	short flag_on_void();
        short flag_off_void();

	/*
	 * Lengths
	 * */

	//Length Getters
        int get_len_total();
        int get_len_dbl();
	int get_len_int();
	int get_len_flt();
	int get_len_str();
        int get_len_void();

        //Public Length Setters
	void len_increment(list_type_t list_type);
	void len_decrement(list_type_t list_type);


        /*
	 * List Operations
	 *
	 * */

        //Head Getters
	node_dbl* get_head_dbl();
	node_int* get_head_int();
	node_flt* get_head_flt();
	node_str* get_head_str();
        node_void* get_head_void();

	//Public Head Setters
	node_dbl* insert_at_head(double val);
	double remove_at_head(node_dbl* node);

	node_int* insert_at_head(int val);
	int remove_at_head(node_int* node);

	node_flt* insert_at_head(float val);
	float remove_at_head(node_flt* node);

	node_str* insert_at_head(std::string& val);
	std::string remove_at_head(node_str* node);

	node_void* insert_at_head(const void* val, list_type_t dereference_type);
        void* remove_at_head(node_void* node);

    /*
     *  private methods/functions
     *
     * */
    private:

	//Private Flag Setters
	short set_flag_dbl(short one_or_zero);
        short set_flag_int(short one_or_zero);
	short set_flag_flt(short one_or_zero);
	short set_flag_str(short one_or_zero);
	short set_flag_void(short one_or_zero);

	//Private Length Setters
	void set_len_total(int len);
        void set_len_dbl(int len);
        void set_len_int(int len);
	void set_len_flt(int len);
	void set_len_str(int len);
        void set_len_void(int len);


	//Private Node Setters
	void set_head(node_dbl* new_head);
	void set_head(node_int* new_head);
        void set_head(node_flt* new_head);
	void set_head(node_str* new_head);
        void set_head(node_void* new_head);
	
        
	
};


