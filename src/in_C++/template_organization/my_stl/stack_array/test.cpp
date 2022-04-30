#include <iostream>
#include "my_array.hpp"

int main(){

    //Direct Object Creation and Template Instansiation

    {	
    my_array<int, 10> test_ar;

    std::cout << test_ar.get_len() << std::endl;
    
    for(int i = 0; i < 10; i++)
        std::cout << test_ar[i] << " ";
    std::cout << '\n';

    //std::cout << test_ar.get_len() << std::endl;

    }
    //std::cout << test_ar.get_len() << std::endl;
    

    {
    //double test_two[7];
    ((my_array)double test_two[7]);
    
    
    }


    //Direct Object Creation, Implicit Template Instansiation

}
