#pragma once
#include <iostream>
#include<optional>
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
	        unsigned STR : 1;
		unsigned VOID : 1;
		char container_one;
		unsigned PRNT : 1;
		unsigned onVal : 1;
		unsigned onIndex : 1;
              };
           bool dbl_flag = container_one & 1;
	   bool flt_flag = container_one & 1<<1;
	   bool int_flag = container_one & 1<<2;
	   bool str_flag = container_one & 1<<3;
	   bool void_flag = container_one & 1<<4;

	   bool print_flag = container_one & 1<<5;
	   bool break_on_val_flag = container_one & 1<<6;
	   bool break_on_index_flag = container_one & 1<<7;

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
	 * Clear
	 * */
       void clear(node_dbl*);
       void clear(node_int*);
       void clear(node_flt*); 
       void clear(node_str*);
       void clear(node_void*);


	/*
	 * Iterators
	 * */
        node_dbl* itr_forward(node_dbl*, double breakVal, int breakIndex);
	node_int* itr_forward(node_int* begin, int breakVal, int breakIndex);
	node_flt* itr_forward(node_flt* begin, float breakVal, int breakIndex);
	node_str* itr_forward(node_str* begin, std::string& breakVal, int breakIndex);
	node_void* itr_forward(node_void* begin, void* breakVal, int breakIndex, list_type_t deref_type);



	/*
	 * Print Methods
	 * */
	void print_flags();
	void print_lengths();

	void print_list(node_dbl* begin);
	void print_list(node_int* begin);
	void print_list(node_flt* begin);
	void print_list(node_str* begin);
        void print_list(node_void* begin);
        
	/*
	 * Flags
	 * */
        
	// Flag Checkers
	bool check_flag_dbl();
	bool check_flag_int();
	bool check_flag_flt();
	bool check_flag_str();
	bool check_flag_void();

	bool check_flag_print();
        bool check_flag_val();
        bool check_flag_index();
	
	//Public Length Setters
	bool flag_on_dbl();
	bool flag_off_dbl();

	bool flag_on_int();
	bool flag_off_int();

	bool flag_on_flt();
        bool flag_off_flt();

	bool flag_on_str();
        bool flag_off_str();

	bool flag_on_void();
        bool flag_off_void();


	bool flag_on_print();
        bool flag_off_print();

        bool flag_on_val();
        bool flag_off_val();

        bool flag_on_index();
        bool flag_off_index();

	/*
	 * Lengths
	 * */

	//Length Getters
        int get_len_total() const;
        int get_len_dbl() const;
	int get_len_int() const;
	int get_len_flt() const;
	int get_len_str() const;
        int get_len_void() const;

        //Public Length Setters
	void len_increment(list_type_t list_type);
	void len_decrement(list_type_t list_type);


        /*
	 * List Operations
	 *
	 * */

        //Head Getters
	node_dbl* get_head_dbl() const;
	node_int* get_head_int() const;
	node_flt* get_head_flt() const;
	node_str* get_head_str() const; 
        node_void* get_head_void() const;

	//Public Head Setters
	node_dbl* insert_at_head(double val);
	double remove_at_head(node_dbl* node);

	node_int* insert_at_head(int val);
	int remove_at_head(node_int* node);

	node_flt* insert_at_head(float val);
	float remove_at_head(node_flt* node);

	node_str* insert_at_head(std::string& val);
	std::string remove_at_head(node_str* node);

	node_void* insert_at_head(double val, list_type_t dereference_val);
        node_void* insert_at_head(int val, list_type_t dereference_val);
	node_void* insert_at_head(float val, list_type_t dereference_val);
        node_void* insert_at_head(std::string val, list_type_t dereference_val);
	void* remove_at_head(node_void* node);

    /*
     *  private methods/functions
     *
     * */
    private:

	//Private Flag Setters
	bool set_flag_dbl(bool one_or_zero);
        bool set_flag_int(bool one_or_zero);
	bool set_flag_flt(bool one_or_zero);
	bool set_flag_str(bool one_or_zero);
	bool set_flag_void(bool one_or_zero);
	
	bool set_flag_print(bool one_or_zero);
	bool set_flag_val(bool one_or_zero);
	bool set_flag_index(bool one_or_zero);

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





