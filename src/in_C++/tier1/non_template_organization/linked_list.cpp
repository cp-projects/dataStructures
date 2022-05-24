#include <iostream>
#include <string>
#include <cstring>
#include <cassert>
#include <optional>
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
singly_linked::~singly_linked() {

	
        if(this->check_flag_dbl())
	    this->clear(get_head_dbl());

	if(this->check_flag_int())
	    this->clear(get_head_int());
        
	if(this->check_flag_flt())
            this->clear(get_head_flt());

        if(this->check_flag_str())
            this->clear(get_head_str());

        if(this->check_flag_void())
	    this->clear(get_head_void());


	delete flags;

        }


/*
 * Clear
 *
 * */
void singly_linked::clear(node_dbl* start){

    if(get_len_dbl() == 0)
        return;
    if(!(start->next)){
        remove_at_head(start);
	return;
    }

    this->clear(start->next);

    remove_at_head(start);
    this->flag_off_dbl();

}


void singly_linked::clear(node_int* start){

    if(get_len_int() == 0)
        return;
    if(!(start->next)){
        remove_at_head(start);
        return;
    }

    this->clear(start->next);

    remove_at_head(start);
    this->flag_off_int();

}


void singly_linked::clear(node_flt* start){

    if(get_len_flt() == 0)
        return;
    if(!(start->next)){
        remove_at_head(start);
        return;
    }

    this->clear(start->next);

    remove_at_head(start);
    this->flag_off_flt();

}

void singly_linked::clear(node_str* start){

    if(get_len_str() == 0)
        return;
    if(!(start->next)){
        remove_at_head(start);
        return;
    }

    this->clear(start->next);

    remove_at_head(start);
    this->flag_off_str();

}


void singly_linked::clear(node_void* start){

    if(get_len_void() == 0)
        return;
    if(!(start->next)){
	if(*(start->dereference_type) == STR_L)
	    remove_at_head(start, STR_L);
	else
            remove_at_head(start);
        return;
    }

    this->clear(start->next);

    if(*(start->dereference_type) == STR_L)
        remove_at_head(start, STR_L);
    else
        remove_at_head(start);
    
    this->flag_off_void();

}

/*
 *  Iterators
 *
 *
 * */

node_dbl* singly_linked::itr_forward(node_dbl* begin, double breakVal, int breakIndex){

    assert(!(this->check_flag_val() && this->check_flag_index()));

    int i = 0;
    node_dbl* end;
    for(end = this->get_head_dbl(); end; end = end->next){
        if(this->check_flag_print())
	    std::cout << *(end->val) << std::endl;
        if(this->check_flag_val() && *(end->val) == breakVal)
	    return end;
	if(this->check_flag_index() && i == breakIndex)
	    return end;
	i++;
     }

    return end;
}


node_int* singly_linked::itr_forward(node_int* begin, int breakVal, int breakIndex){

    assert(!(this->check_flag_val() && this->check_flag_index()));

    int i = 0;
    node_int* end;
    for(end = this->get_head_int(); end; end = end->next){
        if(this->check_flag_print())
            std::cout << *(end->val) << std::endl;
        if(this->check_flag_val() && *(end->val) == breakVal)
            return end;
        if(this->check_flag_index() && i == breakIndex)
            return end;
        i++;
     }

    return end;
}


node_flt* singly_linked::itr_forward(node_flt* begin, float breakVal, int breakIndex){

    assert(!(this->check_flag_val() && this->check_flag_index()));

    int i = 0;
    node_flt* end;
    for(end = this->get_head_flt(); end; end = end->next){
        if(this->check_flag_print())
            std::cout << *(end->val) << std::endl;
        if(this->check_flag_val() && *(end->val) == breakVal)
            return end;
        if(this->check_flag_index() && i == breakIndex)
            return end;
        i++;
     }

    return end;
}


node_str* singly_linked::itr_forward(node_str* begin, std::string& breakVal, int breakIndex){

    assert(!(this->check_flag_val() && this->check_flag_index()));

    int i = 0;
    node_str* end;
    for(end = this->get_head_str(); end; end = end->next){
        if(this->check_flag_print())
            std::cout << *(end->val) << std::endl;
        if(this->check_flag_val() && *(end->val) == breakVal)
            return end;
        if(this->check_flag_index() && i == breakIndex)
            return end;
        i++;
     }

    return end;
}



node_void* singly_linked::itr_forward(node_void* begin, void* breakVal, const std::optional<std::string> breakString, int breakIndex, list_type_t deref_type){

    assert(!(this->check_flag_val() && this->check_flag_index()));

    int i = 0;
    node_void* end;
    for(end = this->get_head_void(); end; end = end->next){
        
	if(this->check_flag_print()){            
	    switch(deref_type){
	    
	        case(DBL_L):
		    std::cout << *((double*)(end->val)) << std::endl;
		    break;

		case(INT_L):
		    std::cout << *((int*)(end->val)) << std::endl;
		    break;

		case(FLT_L):
		    std::cout << *((float*)(end->val)) << std::endl;
		    break;

		    
		case(STR_L):
		    std::cout << *(end->str_val) << std::endl;
		    break;    
	         };
	       }

	
	if(deref_type == STR_L){
	   
                if(this->check_flag_val() && end->str_val == breakString)
	            return end;
	        if(this->check_flag_index() && i == breakIndex)
	             return end;
	         else
		   continue;
	}
	

	if(this->check_flag_val() && *(end->val) == breakVal)
            return end;

	if(this->check_flag_index() && i == breakIndex)
            return end;

        i++;
    }

    return end;
}

/*
node_void* singly_linked::itr_forward(node_void* begin, std::string& breakString, int breakIndex){

    assert(!(this->check_flag_val() && this->check_flag_index()));

    int i = 0;
    node_void* end;
    for(end = this->get_head_void(); end; end = end->next){

      
      if(this->check_flag_val() && !(end->str_val->compare(breakString)))
	    return end;
	if(this->check_flag_index() && i == breakIndex)
	    return end;
     
	std::cout << *(end->str_val) << std::endl;

      }

    return end;

    }*/

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

void singly_linked::print_list(node_dbl* begin){
    
    //checking the flagstate before alterations
    bool p = this -> check_flag_print();
    bool v = this -> check_flag_val();
    bool i = this -> check_flag_index();

    //setting the flags for printing    
    this->flag_on_print();
    this->flag_off_val();
    this->flag_off_index();
    this->itr_forward(begin, 0, 0);


    //resetting if necessary
    if(!p)
        this->flag_off_print();
    if(v)
        this->flag_on_val();
    if(i)
	this->flag_on_index();
}

void singly_linked::print_list(node_int* begin){

    //checking the flagstate before alterations
    bool p = this -> check_flag_print();
    bool v = this -> check_flag_val();
    bool i = this -> check_flag_index();

    //setting the flags for printing
    this->flag_on_print();
    this->flag_off_val();
    this->flag_off_index();
    this->itr_forward(begin, 0, 0);

    //resetting if necessary
    if(!p)
        this->flag_off_print();
    if(v)
        this->flag_on_val();
    if(i)
        this->flag_on_index();
}


void singly_linked::print_list(node_flt* begin){

    //checking the flagstate before alterations
    bool p = this -> check_flag_print();
    bool v = this -> check_flag_val();
    bool i = this -> check_flag_index();

    //setting the flags for printing
    this->flag_on_print();
    this->flag_off_val();
    this->flag_off_index();
    this->itr_forward(begin, 0, 0);

    //resetting if necessary
    if(!p)
        this->flag_off_print();
    if(v)
        this->flag_on_val();
    if(i)
        this->flag_on_index();
}


void singly_linked::print_list(node_str* begin){

    //checking the flagstate before alterations
    bool p = this -> check_flag_print();
    bool v = this -> check_flag_val();
    bool i = this -> check_flag_index();

    //setting the flags for printing
    this->flag_on_print();
    this->flag_off_val();
    this->flag_off_index();

    std::string I_need_a_string_to_make_itr_run = "Hello\n";
    this->itr_forward(begin, I_need_a_string_to_make_itr_run , 0);

    //resetting if necessary
    if(!p)
        this->flag_off_print();
    if(v)
        this->flag_on_val();
    if(i)
        this->flag_on_index();
}


void singly_linked::print_list(node_void* begin){

    //checking the flagstate before alterations
    bool p = this -> check_flag_print();
    bool v = this -> check_flag_val();
    bool i = this -> check_flag_index();

    //setting the flags for printing
    this->flag_on_print();
    this->flag_off_val();
    this->flag_off_index();

    void* test_val;
    std::string test_string = "Hello\n";
    this->itr_forward(begin, test_val, test_string, 0,  *(this->m_head_void->dereference_type));

    //resetting if necessary
    if(!p)
        this->flag_off_print();
    if(v)
        this->flag_on_val();
    if(i)
        this->flag_on_index();
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




bool singly_linked::check_flag_print(){
    return flags->print_flag;
        }

bool singly_linked::check_flag_val(){
    return flags->break_on_val_flag;
        }

bool singly_linked::check_flag_index(){
    return flags->break_on_index_flag;
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
int singly_linked::get_len_total() const{
    return m_len_total;
        }

int singly_linked::get_len_dbl() const{
    return m_len_dbl;
        }

int singly_linked::get_len_int() const{
    return m_len_int;
        }

int singly_linked::get_len_flt() const{
    return m_len_flt;
        }

int singly_linked::get_len_str() const{
    return m_len_str;
        }

int singly_linked::get_len_void() const{
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
node_dbl* singly_linked::get_head_dbl() const{
    return m_head_dbl;
        }

node_int* singly_linked::get_head_int() const{
    return m_head_int;
        }

node_flt* singly_linked::get_head_flt() const{
    return m_head_flt;
        }

node_str* singly_linked::get_head_str() const{
    return m_head_str;
        }

node_void* singly_linked::get_head_void() const{
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


node_void* singly_linked::insert_at_head(std::string& val, list_type_t dereference_val){


   node_void* head = new node_void;

   head->dereference_type = new list_type_t;
   *(head->dereference_type) = dereference_val;

   head->str_val =  new std::string;
   *(head->str_val) = val;

   head->val = nullptr;

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
    
    };
    
   
    this -> m_head_void = node->next;

    delete node->dereference_type;
    delete node->val;
    delete node;

    this->len_decrement(VOID_L);

    return retval;


}



std::string singly_linked::remove_at_head(node_void* node, list_type_t deref_type){

    static std::string Sval = *(node->str_val);
    this -> m_head_void = node->next;
    delete node->dereference_type;
    delete node->str_val;
    delete node;

    this->len_decrement(VOID_L);
    return Sval;

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





