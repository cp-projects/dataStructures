#include <iostream>
#include "linked_list.hpp"

int main(){

    singly_linked my_list = singly_linked();

    std::cout << "Len is " << my_list.get_len_total() << std::endl;
    my_list.set_len(2);
    std::cout << "Len is " << my_list.get_len_total() << std::endl;

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << std::endl;

    node_int* head = new node_int;
    head->val = new int;
    *(head->val) = 17;

    my_list.set_head(head);
    my_list.set_flag_int(1);

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << std::endl;

    std::cout << *(my_list.get_head_int()->val) << std::endl;


    node_dbl* head2 = new node_dbl;
    head2->val = new double;
    *(head2->val) = 2.2222;

    my_list.set_head(head2);

    std::cout << *(my_list.get_head_dbl()->val) << std::endl;

    delete head->val;
    delete head;

    delete head2->val;
    delete head2;
}


