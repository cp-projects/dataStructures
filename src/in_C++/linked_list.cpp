#include <iostream>
#include <string>
#include <cstring>
#include "linked_list.hpp"


/*
 *
 * Constructor and Destructor
 *
 *
 * */

//constructor
singly_linked::singly_linked()
	: flags(new flags_t), m_len_total(0), m_len_dbl(0), m_len_int(0), m_len_flt(0), m_len_str(0), m_len_void(0), m_head_dbl(nullptr), m_head_int(nullptr), m_head_flt(nullptr), m_head_str(nullptr), m_head_void(nullptr) {
	
	flags->dbl_flag = 0;
	flags->int_flag = 0;
	flags->flt_flag = 0;
	flags->str_flag = 0;
	flags->void_flag = 0;
	
	}

//destructor
singly_linked::~singly_linked() {delete flags;}



/*
 *  Iterators
 *
 *
 * */





/*
 *
 *  Print Methods
 *
 * */

void singly_linked::print_flags(){
    std::cout << "Double Flag: " << this -> get_flag_dbl() << "  Int Flag: " << this-> get_flag_int() << " FLT FLAG: " << this->get_flag_flt() << " STR FLAG: " << this->get_flag_str() << " VOID FLAG: " << this -> get_flag_void() << std::endl;
    return;
}

void singly_linked::print_lengths(){
    std::cout << "int_len is " << this -> get_len_int() << " double_len is " << this -> get_len_dbl() << " float_len is " << this -> get_len_flt() << " string_list_len is " << this -> get_len_str() << " void_len is " << this -> get_len_void() << " total_len is " << this -> get_len_total() << std::endl;
    return;
}


/*
 *  
 *  FLAGS
 *
 * */

//flag getters
int singly_linked::get_flag_dbl(){
    return flags->dbl_flag;
        }

int singly_linked::get_flag_int(){
    return flags->int_flag;
        }

int singly_linked::get_flag_flt(){
    return flags->flt_flag;
        }

int singly_linked::get_flag_str(){
    return flags->str_flag;
        }

int singly_linked::get_flag_void(){
    return flags->void_flag;
        }

//public flag setters
short singly_linked::flag_on_dbl(){
    return this->set_flag_dbl(1);
        }

short singly_linked::flag_off_dbl(){
    return this->set_flag_dbl(0);
        }

short singly_linked::flag_on_int(){
    return this->set_flag_int(1);
        }

short singly_linked::flag_off_int(){
    return this->set_flag_int(0);
        }

short singly_linked::flag_on_flt(){
    return this->set_flag_flt(1);
        }

short singly_linked::flag_off_flt(){
    return this->set_flag_flt(0);
        }

short singly_linked::flag_on_str(){
    return this->set_flag_str(1);
        }

short singly_linked::flag_off_str(){
    return this->set_flag_str(0);
        }

short singly_linked::flag_on_void(){
    return this->set_flag_void(1);
        }

short singly_linked::flag_off_void(){
    return this->set_flag_void(0);
        }




/*
 *
 *  LENGTHS
 *
 * */

//Length Getters
int singly_linked::get_len_total(){
    return m_len_total;
        }

int singly_linked::get_len_dbl(){
    return m_len_dbl;
        }

int singly_linked::get_len_int(){
    return m_len_int;
        }

int singly_linked::get_len_flt(){
    return m_len_flt;
        }

int singly_linked::get_len_str(){
    return m_len_str;
        }

int singly_linked::get_len_void(){
    return m_len_void;
        }


//public length setters
void singly_linked::len_increment(list_type_t list_type){

    switch(list_type){
    
        case DBL_L:
		this -> set_len_dbl(get_len_dbl()+1);
		this -> set_len_total(get_len_total()+1);
		return;

	case INT_L:
                this -> set_len_int(get_len_int()+1);
		this -> set_len_total(get_len_total()+1);
                return;

	case FLT_L:
                this -> set_len_flt(get_len_flt()+1);
                this -> set_len_total(get_len_total()+1);
                return;

	case STR_L:
                this -> set_len_str(get_len_str()+1);
                this -> set_len_total(get_len_total()+1);
                return;

	case VOID_L:
                this -> set_len_void(get_len_void()+1);
                this -> set_len_total(get_len_total()+1);
                return;

	case TOT_L:
                this -> set_len_total(get_len_total()+1);
                return; 
    };
};


void singly_linked::len_decrement(list_type_t list_type){

    switch(list_type){

        case DBL_L:
                this -> set_len_dbl(get_len_dbl()-1);
                this -> set_len_total(get_len_total()-1);
                return;

        case INT_L:
                this -> set_len_int(get_len_int()-1);
                this -> set_len_total(get_len_total()-1);
                return;

	case FLT_L:
                this -> set_len_flt(get_len_flt()-1);
                this -> set_len_total(get_len_total()-1);
                return;

	case STR_L:
                this -> set_len_str(get_len_str()-1);
                this -> set_len_total(get_len_total()-1);
                return;

        case VOID_L:
                this -> set_len_void(get_len_void()-1);
                this -> set_len_total(get_len_total()-1);
                return;

        case TOT_L:
                this -> set_len_total(get_len_total()-1);
                return;
    };
};



/*
 *
 *  Head of the List
 *
 * */

//Head Getters
node_dbl* singly_linked::get_head_dbl(){
    return m_head_dbl;
        }

node_int* singly_linked::get_head_int(){
    return m_head_int;
        }

node_flt* singly_linked::get_head_flt(){
    return m_head_flt;
        }

node_str* singly_linked::get_head_str(){
    return m_head_str;
        }

node_void* singly_linked::get_head_void(){
    return m_head_void;
        }


//Public Head Setters

node_dbl* singly_linked::insert_at_head(double val){

   node_dbl* head = new node_dbl;
   head->val = new double;

   *(head->val) = val;
   head->next = this->m_head_dbl;

   this->set_head(head);
   this->flag_on_dbl();
   this->len_increment(head->type);

   return head;

}


double singly_linked::remove_at_head(node_dbl* node){

    list_type_t type = node->type;
    double val = *(node->val);

    this -> m_head_dbl = node->next;

    delete node->val;
    delete node;

    this->flag_off_dbl();
    this->len_decrement(type);
  
    return val;
}


node_int* singly_linked::insert_at_head(int val){
   
   node_int* head = new node_int;
   head->val = new int;
   
   *(head->val) = val;
   head->next = this->m_head_int;

   this->set_head(head);
   this->flag_on_int();
   this->len_increment(head->type);

   return head;

}


int singly_linked::remove_at_head(node_int* node){

    list_type_t type = node->type;
    int val = *(node->val);

    this -> m_head_int = node->next;

    delete node->val;
    delete node;

    this->flag_off_int();
    this->len_decrement(type);

    return val;
}



node_flt* singly_linked::insert_at_head(float val){

   node_flt* head = new node_flt;
   head->val = new float;

   *(head->val) = val;
   head->next = this->m_head_flt;

   this->set_head(head);
   this->flag_on_flt();
   this->len_increment(head->type);

   return head;

}


float singly_linked::remove_at_head(node_flt* node){

    list_type_t type = node->type;
    float val = *(node->val);

    this -> m_head_flt = node->next;

    delete node->val;
    delete node;

    this->flag_off_flt();
    this->len_decrement(type);

    return val;
}


node_str* singly_linked::insert_at_head(std::string& val){

   node_str* head = new node_str;
   head->val = new std::string;

   *(head->val) = val;
   head->next = this->m_head_str;

   this->set_head(head);
   this->flag_on_str();
   this->len_increment(head->type);

   return head;

}


std::string singly_linked::remove_at_head(node_str* node){

    list_type_t type = node->type;
    static std::string val = *(node->val);

    this -> m_head_str = node->next;

    delete node->val;
    delete node;

    this->flag_off_str();
    this->len_decrement(type);

    return val;
}


node_void* singly_linked::insert_at_head(const void* val, list_type_t dereference_type){


   node_void* head = new node_void;
   
   switch(dereference_type){

       case(DBL_L):
           double deref_value = *((double*)val);
	   double* value_addr = new double;
	   head->val = new void*;
	   head->val = (void**) value_addr;
	   *(value_addr) = deref_value;
	   head->dereference_type = dereference_type;



   }; 
   
   head->next = this->m_head_void;

   this->set_head(head);
   this->flag_on_void();
   this->len_increment(head->type);

   return head;

}


void* singly_linked::remove_at_head(node_void* node){

    list_type_t dereference_type = node->dereference_type;
    static void* retval = *(node->val);
    
    switch(dereference_type){
    
        case(DBL_L):
            static double val = *((double*)*node->val);
	    retval = (void*) &val;

    
    };
    
   
    this -> m_head_void = node->next;

    delete node->val;
    delete node;

    this->flag_off_void();
    this->len_decrement(VOID_L);

    return retval;
}



/*
 *  
 *  PRIVATE
 *
 * */

//Private Flag Setters
short singly_linked::set_flag_dbl(short one_or_zero){
    if(one_or_zero != 1 && one_or_zero != 0)
            return -1;
    flags->dbl_flag = one_or_zero;
    return flags->dbl_flag;
        }

short singly_linked::set_flag_int(short one_or_zero){
    if(one_or_zero != 1 && one_or_zero != 0)
            return -1;
    flags->int_flag = one_or_zero;
    return flags->int_flag;
        }

short singly_linked::set_flag_flt(short one_or_zero){
    if(one_or_zero != 1 && one_or_zero != 0)
            return -1;
    flags->flt_flag = one_or_zero;
    return flags->flt_flag;
        }

short singly_linked::set_flag_str(short one_or_zero){
    if(one_or_zero != 1 && one_or_zero != 0)
            return -1;
    flags->str_flag = one_or_zero;
    return flags->str_flag;
        }

short singly_linked::set_flag_void(short one_or_zero){
    if(one_or_zero != 1 && one_or_zero != 0)
            return -1;
    flags->void_flag = one_or_zero;
    return flags->void_flag;
        }




//Private Length Setters
void singly_linked::set_len_total(int len){
    this-> m_len_total = len;
        }
        
void singly_linked::set_len_dbl(int len){
    this-> m_len_dbl = len;
        }

void singly_linked::set_len_int(int len){
    this-> m_len_int = len;
        }

void singly_linked::set_len_flt(int len){
    this-> m_len_flt = len;
        }

void singly_linked::set_len_str(int len){
    this-> m_len_str = len;
        }

void singly_linked::set_len_void(int len){
    this-> m_len_void = len;
        }

//Private Head Setters
void singly_linked::set_head(node_dbl* new_head){
    this->m_head_dbl = new_head;
        }

void singly_linked::set_head(node_int* new_head){
     this->m_head_int = new_head;
        }

void singly_linked::set_head(node_flt* new_head){
     this->m_head_flt = new_head;
        }

void singly_linked::set_head(node_str* new_head){
     this->m_head_str = new_head;
        }

void singly_linked::set_head(node_void* new_head){
     this->m_head_void = new_head;
        }

