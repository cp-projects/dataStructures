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

	flags->print_flag = 0;
	flags->break_on_val_flag = 0;
	flags->break_on_index_flag = 0;
	
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
    std::cout << "Double Flag: " << this -> check_flag_dbl() << "  Int Flag: " << this-> check_flag_int() << " FLT FLAG: " << this->check_flag_flt() << " STR FLAG: " << this->check_flag_str() << " VOID FLAG: " << this -> check_flag_void() << std::endl;
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

//flag checkers
bool singly_linked::check_flag_dbl(){
    return flags->dbl_flag;
        }

bool singly_linked::check_flag_int(){
    return flags->int_flag;
        }

bool singly_linked::check_flag_flt(){
    return flags->flt_flag;
        }

bool singly_linked::check_flag_str(){
    return flags->str_flag;
        }

bool singly_linked::check_flag_void(){
    return flags->void_flag;
        }

//public flag setters
bool singly_linked::flag_on_dbl(){
    return this->set_flag_dbl(1);
        }

bool singly_linked::flag_off_dbl(){
    return this->set_flag_dbl(0);
        }

bool singly_linked::flag_on_int(){
    return this->set_flag_int(1);
        }

bool singly_linked::flag_off_int(){
    return this->set_flag_int(0);
        }

bool singly_linked::flag_on_flt(){
    return this->set_flag_flt(1);
        }

bool singly_linked::flag_off_flt(){
    return this->set_flag_flt(0);
        }

bool singly_linked::flag_on_str(){
    return this->set_flag_str(1);
        }

bool singly_linked::flag_off_str(){
    return this->set_flag_str(0);
        }

bool singly_linked::flag_on_void(){
    return this->set_flag_void(1);
        }

bool singly_linked::flag_off_void(){
    return this->set_flag_void(0);
        }



bool singly_linked::flag_on_print(){
    return this->set_flag_print(1);
        }

bool singly_linked::flag_off_print(){
    return this->set_flag_print(0);
        }

bool singly_linked::flag_on_val(){
    return this->set_flag_val(1);
        }

bool singly_linked::flag_off_val(){
    return this->set_flag_val(0);
        }

bool singly_linked::flag_on_index(){
    return this->set_flag_index(1);
        }

bool singly_linked::flag_off_index(){
    return this->set_flag_index(0);
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


node_void* singly_linked::insert_at_head(double val, list_type_t dereference_val){


   node_void* head = new node_void;

   head->dereference_type = new list_type_t;
   *(head->dereference_type) = dereference_val;
   
   double* value_addr = new double;
   *(value_addr) = val;
   head->val = (void**) value_addr;
	  

   head->next = this->m_head_void;

   this->set_head(head);
   this->flag_on_void();
   this->len_increment(head->type);

   return head;

}


node_void* singly_linked::insert_at_head(int val, list_type_t dereference_val){


   node_void* head = new node_void;

   head->dereference_type = new list_type_t;
   *(head->dereference_type) = dereference_val;

   int* value_addr = new int;
   *(value_addr) = val;
   head->val = (void**) value_addr;


   head->next = this->m_head_void;

   this->set_head(head);
   this->flag_on_void();
   this->len_increment(head->type);

   return head;

}


node_void* singly_linked::insert_at_head(float val, list_type_t dereference_val){


   node_void* head = new node_void;

   head->dereference_type = new list_type_t;
   *(head->dereference_type) = dereference_val;

   float* value_addr = new float;
   *(value_addr) = val;
   head->val = (void**) value_addr;


   head->next = this->m_head_void;

   this->set_head(head);
   this->flag_on_void();
   this->len_increment(head->type);

   return head;

}


node_void* singly_linked::insert_at_head(std::string val, list_type_t dereference_val){


   node_void* head = new node_void;

   head->dereference_type = new list_type_t;
   *(head->dereference_type) = dereference_val;

   std::string* value_addr = new std::string;
   *(value_addr) = val;
   head->val = (void**) value_addr;


   head->next = this->m_head_void;

   this->set_head(head);
   this->flag_on_void();
   this->len_increment(head->type);

   return head;

}


void* singly_linked::remove_at_head(node_void* node){

    list_type_t dereference_type = *(node->dereference_type);
    static void* retval = *(node->val);
    
    switch(dereference_type){
    
        case(DBL_L):
            static double dbl_val = *((double*)node->val);
	    retval = (void*) &dbl_val;
	    break;

        case(INT_L):
            static int int_val = *((int*)node->val);
            retval = (void*) &int_val;
            break;

	case(FLT_L):
            static float flt_val = *((float*)node->val);
            retval = (void*) &flt_val;
            break;

	case(STR_L):
            static std::string str_val = *((std::string*)node->val);
            retval = (void*) &str_val;
            break;
    
    };
    
   
    this -> m_head_void = node->next;

    delete node->dereference_type;
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
bool singly_linked::set_flag_dbl(bool one_or_zero){
    flags->dbl_flag = one_or_zero;
    return flags->dbl_flag;
        }

bool singly_linked::set_flag_int(bool one_or_zero){
    flags->int_flag = one_or_zero;
    return flags->int_flag;
        }

bool singly_linked::set_flag_flt(bool one_or_zero){
    flags->flt_flag = one_or_zero;
    return flags->flt_flag;
        }

bool singly_linked::set_flag_str(bool one_or_zero){
    flags->str_flag = one_or_zero;
    return flags->str_flag;
        }

bool singly_linked::set_flag_void(bool one_or_zero){
    flags->void_flag = one_or_zero;
    return flags->void_flag;
        }




bool singly_linked::set_flag_print(bool one_or_zero){
    flags->print_flag = one_or_zero;
    return flags->print_flag;
        }

bool singly_linked::set_flag_val(bool one_or_zero){
    flags->break_on_val_flag = one_or_zero;
    return flags->break_on_val_flag;
        }

bool singly_linked::set_flag_index(bool one_or_zero){
    flags->break_on_index_flag = one_or_zero;
    return flags->break_on_index_flag;
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

