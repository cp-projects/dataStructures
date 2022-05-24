#include <iostream>
#include "linked_list.hpp"


void test_flags(){

    singly_linked my_list = singly_linked();

    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;

    my_list.flag_on_dbl();

    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;

    my_list.flag_on_int();

    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;

    my_list.flag_on_flt();

    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;

    my_list.flag_on_str();

    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;

    my_list.flag_on_void();

    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;


    std::cout << "\n "  << " ON " << "\n"<< std::endl;


    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;

    my_list.flag_off_dbl();

    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;

    my_list.flag_off_int();

    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;

    my_list.flag_off_flt();

    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;

    my_list.flag_off_str();

    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;

    my_list.flag_off_void();

    std::cout << "Double Flag: " << my_list.check_flag_dbl() << "  Int Flag: " << my_list.check_flag_int() << " FLT FLAG: " << my_list.check_flag_flt() << " STR FLAG: " << my_list.check_flag_str() << " VOID FLAG: " << my_list.check_flag_void() << std::endl;

    std::cout << "\n "  << " OFF " << "\n"<< std::endl;


}


void test_flags_two(){

    singly_linked my_list = singly_linked();

    std::cout << "Print Flag: " << my_list.check_flag_print() << "  Break on Val Flag: " << my_list.check_flag_val() << " Break on Index FLAG: " << my_list.check_flag_index() << std::endl;
    my_list.flag_on_print();
    std::cout << "Print Flag: " << my_list.check_flag_print() << "  Break on Val Flag: " << my_list.check_flag_val() << " Break on Index FLAG: " << my_list.check_flag_index() << std::endl;
    my_list.flag_on_val();
    std::cout << "Print Flag: " << my_list.check_flag_print() << "  Break on Val Flag: " << my_list.check_flag_val() << " Break on Index FLAG: " << my_list.check_flag_index() << std::endl;
    my_list.flag_on_index();
    std::cout << "Print Flag: " << my_list.check_flag_print() << "  Break on Val Flag: " << my_list.check_flag_val() << " Break on Index FLAG: " << my_list.check_flag_index() << std::endl;

    std::cout << "\n "  << " ON " << "\n"<< std::endl;

    std::cout << "Print Flag: " << my_list.check_flag_print() << "  Break on Val Flag: " << my_list.check_flag_val() << " Break on Index FLAG: " << my_list.check_flag_index() << std::endl;
    my_list.flag_off_print();
    std::cout << "Print Flag: " << my_list.check_flag_print() << "  Break on Val Flag: " << my_list.check_flag_val() << " Break on Index FLAG: " << my_list.check_flag_index() << std::endl;
    my_list.flag_off_val();
    std::cout << "Print Flag: " << my_list.check_flag_print() << "  Break on Val Flag: " << my_list.check_flag_val() << " Break on Index FLAG: " << my_list.check_flag_index() << std::endl;
    my_list.flag_off_index();
    std::cout << "Print Flag: " << my_list.check_flag_print() << "  Break on Val Flag: " << my_list.check_flag_val() << " Break on Index FLAG: " << my_list.check_flag_index() << std::endl;

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


void test_heads(){


    singly_linked my_list = singly_linked();

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

    node_void* head5 = my_list.insert_at_head(11.61, DBL_L);
    std::cout << *((double*)(my_list.get_head_void()->val)) << std::endl;

    node_void* next_void = my_list.insert_at_head(25, INT_L);
    std::cout << *((int*)(my_list.get_head_void()->val)) << std::endl;

    node_void* void_three = my_list.insert_at_head(2.2f, FLT_L);
    std::cout << *((float*)(my_list.get_head_void()->val)) << std::endl;

    std::string hola = "Hola Mundo\n";
    node_void* void_four = my_list.insert_at_head(hola, STR_L);
    std::cout << *((std::string*)(my_list.get_head_void()->val)) << std::endl;



    my_list.remove_at_head(next_int);
    my_list.remove_at_head(head);

    my_list.remove_at_head(head2);

    my_list.remove_at_head(head3);

    my_list.remove_at_head(head4);

    void* tmp = my_list.remove_at_head(void_four);
    std::cout << *((std::string*) tmp) << std::endl;

    tmp = my_list.remove_at_head(void_three);
    std::cout << *((float*) tmp) << std::endl;

    tmp = my_list.remove_at_head(next_void);
    std::cout << *((int*) tmp) << std::endl;

    tmp = my_list.remove_at_head(head5);
    std::cout << *((double*) tmp) << std::endl;

}


void test_forward_itrs(){

   std::cout << "Bonjour Monde" << std::endl;

   singly_linked my_list = singly_linked();

   node_dbl* one = my_list.insert_at_head(9.9);
   node_dbl* two = my_list.insert_at_head(8.8);
   node_dbl* three = my_list.insert_at_head(7.7);
   node_dbl* four = my_list.insert_at_head(6.6);
   node_dbl* five = my_list.insert_at_head(5.5);
   node_dbl* six = my_list.insert_at_head(4.4);
   node_dbl* seven = my_list.insert_at_head(3.3);
   node_dbl* eight = my_list.insert_at_head(2.2);
   node_dbl* nine = my_list.insert_at_head(1.1);

   my_list.flag_on_print();
   my_list.flag_on_val();

   node_dbl* begin;
   //my_list.print_list(begin);
   my_list.itr_forward(begin, 6.6, 2);

   my_list.insert_at_head(18);
   my_list.insert_at_head(17);
   my_list.insert_at_head(16);
   my_list.insert_at_head(15);
   my_list.insert_at_head(14);
   my_list.insert_at_head(13);
   my_list.insert_at_head(12);
   my_list.insert_at_head(11);
   my_list.insert_at_head(10);
   
   my_list.flag_off_val();
   my_list.flag_on_index();

   std::cout << "\n\n";
   node_int* begin_int;
   //my_list.print_list(begin_int);
   my_list.itr_forward(begin_int, 15, 6);



   my_list.insert_at_head(27.27f);
   my_list.insert_at_head(26.26f);
   my_list.insert_at_head(25.25f);
   my_list.insert_at_head(24.24f);
   my_list.insert_at_head(23.23f);
   my_list.insert_at_head(22.22f);
   my_list.insert_at_head(21.21f);
   my_list.insert_at_head(20.20f);
   my_list.insert_at_head(19.19f);

   //my_list.flag_on_val();
   //my_list.flag_on_index();
   //my_list.flag_off_val();
   //my_list.flag_off_index();

   std::cout << "\n\n";
   node_flt* begin_flt;
   //my_list.print_list(begin_flt);
   my_list.itr_forward(begin_flt, 25.25, 2);

   std::cout << "\n\n";

   std::string hello = "Hello World\n";
   my_list.insert_at_head(hello);

   std::string hallo = "Hallo Welt\n";
   my_list.insert_at_head(hallo);

   std::string hola = "Hola Mundo\n";
   my_list.insert_at_head(hola);

   std::string bonjour = "Bonjour Monde\n";
   my_list.insert_at_head(bonjour);

   std::string salve = "Salve Mondo\n";
   my_list.insert_at_head(salve);

   std::string ola = "Ola Mundo\n";
   my_list.insert_at_head(ola);

   std::string bonjou = "Bonjou Mond La\n";
   my_list.insert_at_head(bonjou);

   std::string buna = "Buna Oameni Buni\n";
   my_list.insert_at_head(buna);

   std::string sveika = "Sveika Pasaule\n";
   my_list.insert_at_head(sveika);


   node_str* begin_str;
   my_list.print_list(begin_str);






}





int main(){
    
    //test_flags();
    //test_flags_two();
    //test_lengths();
    //test_heads();
    
    test_forward_itrs();


}


