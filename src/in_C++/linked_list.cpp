#include <iostream>
#include "linked_list.hpp"

singly_linked::singly_linked()
	: flags(new flags_t), m_len_total(0), m_len_dbl(0), m_len_int(0), m_head_dbl(nullptr), m_head_int(nullptr) {
	
	flags->dbl_flag = 0;
	flags->int_flag = 0;
	
	}

singly_linked::~singly_linked() {delete flags;}

int singly_linked::get_flag_dbl(){
    return flags->dbl_flag;
        }

int singly_linked::get_flag_int(){
    return flags->int_flag;
        }

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

int singly_linked::get_len_total(){
    return m_len_total;
        }

int singly_linked::get_len_dbl(){
    return m_len_dbl;
	}

int singly_linked::get_len_int(){
    return m_len_int;
        }

void singly_linked::set_len(int len){
    this-> m_len_total = len;
        }

node_dbl* singly_linked::get_head_dbl(){
    return m_head_dbl;
	}
	
void singly_linked::set_head(node_dbl* new_head){
    this->m_head_dbl = new_head;
	}

node_int* singly_linked::get_head_int(){
    return m_head_int;
        }

void singly_linked::set_head(node_int* new_head){
     this->m_head_int = new_head;
        }


	
