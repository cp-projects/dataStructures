#include <iostream>
#include "linked_list.hpp"


void test_flags(){

    singly_linked my_list = singly_linked();

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " << my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;

    my_list.flag_on_dbl();

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " << my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;

    my_list.flag_on_int();

     std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " << my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;

    my_list.flag_on_flt();

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " << my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;

    my_list.flag_on_str();

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " <<
my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;

    my_list.flag_on_void();

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " <<
my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;


    std::cout << "\n "  << " ON " << "\n"<< std::endl;


    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " << my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;

    my_list.flag_off_dbl();

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " << my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;

    my_list.flag_off_int();

     std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " << my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;

    my_list.flag_off_flt();

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " << my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;

    my_list.flag_off_str();

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " <<
my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;

    my_list.flag_off_void();

    std::cout << "Double Flag: " << my_list.get_flag_dbl() << "  Int Flag: " << my_list.get_flag_int() << " FLT FLAG: " << my_list.get_flag_flt() << " STR FLAG: " <<
my_list.get_flag_str() << " VOID FLAG: " << my_list.get_flag_void() << std::endl;

    std::cout << "\n "  << " OFF " << "\n"<< std::endl;


}




void test_lengths(){

    singly_linked my_list = singly_linked();
  
    std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;

    for(int i = 0; i < 7; i++)
        my_list.len_increment(INT_L);

    std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;
  
     for(int i = 0; i < 2; i++)
        my_list.len_increment(DBL_L);

     std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;

     for(int i = 0; i < 11; i++)
        my_list.len_increment(FLT_L);

     std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;

     for(int i = 0; i < 23; i++)
        my_list.len_increment(STR_L);

     std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;

     for(int i = 0; i < 4; i++)
        my_list.len_increment(VOID_L);

     std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;


      std::cout << "\n "  << " ADDED LENS " << "\n"<< std::endl;


      std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;

    for(int i = 0; i < 7; i++)
        my_list.len_decrement(INT_L);

    std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;

     for(int i = 0; i < 2; i++)
        my_list.len_decrement(DBL_L);

     std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;

     for(int i = 0; i < 11; i++)
        my_list.len_decrement(FLT_L);

     std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;

     for(int i = 0; i < 23; i++)
        my_list.len_decrement(STR_L);

     std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;

     for(int i = 0; i < 4; i++)
        my_list.len_decrement(VOID_L);

     std::cout << "int_len is " << my_list.get_len_int() << " double_len is " << my_list.get_len_dbl() << " float_len is " << my_list.get_len_flt() << " string_list_len is " << my_list.get_len_str() << " void_len is " << my_list.get_len_void() << " total_len is " << my_list.get_len_total() << std::endl;


     std::cout << "\n "  << " DELETED LENS " << "\n"<< std::endl;


}





int main(){

   singly_linked my_list = singly_linked();

   //test_flags();
   //test_lengths();

    node_int* head = my_list.insert_at_head(17); 
    std::cout << *(my_list.get_head_int()->val) << std::endl;

    node_int* next_int = my_list.insert_at_head(16);
    std::cout << *(my_list.get_head_int()->val) << std::endl;

    node_dbl* head2 = my_list.insert_at_head(2.2222);
    std::cout << *(my_list.get_head_dbl()->val) << std::endl;


    node_flt* head3 = my_list.insert_at_head(5.5555f);
    std::cout << *(my_list.get_head_flt()->val) << std::endl;

    std::string hello = "Hello World\n";
    node_str* head4 = my_list.insert_at_head(hello);
    std::cout << *(my_list.get_head_str()->val) << std::endl;

    static double void_val = 11.61;
    void* void_addr = (void*) &void_val;
    node_void* head5 = my_list.insert_at_head(11.61, DBL_L);
    //std::cout << **((double**) my_list.get_head_void()->val) << std::endl;


 
    my_list.remove_at_head(next_int);
    my_list.remove_at_head(head);
    
    my_list.remove_at_head(head2);

    my_list.remove_at_head(head3);

    my_list.remove_at_head(head4);

    my_list.remove_at_head(head5);

}


