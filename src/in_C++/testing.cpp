#include <iostream>
#include "linked_list.hpp"


int main(){

   singly_linked my_list = singly_linked();

   std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << std::endl;

    node_int* head = new node_int;
    head->val = new int;
    *(head->val) = 17;

    my_list.set_head(head);
    my_list.set_flag_int(1);
    my_list.len_augment(INT_L);

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << std::endl;

    std::cout << *(my_list.get_head_int()->val) << std::endl;


    node_dbl* head2 = new node_dbl;
    head2->val = new double;
    *(head2->val) = 2.2222;

    my_list.set_head(head2);
    my_list.set_flag_dbl(1);
    my_list.len_augment(DBL_L);

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << std::endl;

    std::cout << *(my_list.get_head_dbl()->val) << std::endl;

    std::cout << "int_len is " << my_list.get_len_int() << std::endl;
    std::cout << "double_len is " << my_list.get_len_dbl() << std::endl;
    std::cout << "total_len is " << my_list.get_len_total() << std::endl;

    delete head->val;
    delete head;
    my_list.set_flag_int(0);
    my_list.len_decrement(INT_L);

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << std::endl;

    std::cout << "int_len is " << my_list.get_len_int() << std::endl;
    std::cout << "double_len is " << my_list.get_len_dbl() << std::endl;
    std::cout << "total_len is " << my_list.get_len_total() << std::endl;

    delete head2->val;
    delete head2;
    my_list.set_flag_dbl(0);
    my_list.len_decrement(DBL_L);

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << std::endl;

    std::cout << "int_len is " << my_list.get_len_int() << std::endl;
    std::cout << "double_len is " << my_list.get_len_dbl() << std::endl;
    std::cout << "total_len is " << my_list.get_len_total() << std::endl;
}


