#include <iostream>
#include "my_array.hpp"

int main(){

    //Direct Object Creation and Template Instansiation

    {	
    my_array<int, 10> test_ar;

    std::cout << test_ar.len() << std::endl;

    test_ar.fill(21);
    
    //for(int i = 0; i < test_ar.len(); i++)
    for(int i : test_ar)
        std::cout << test_ar[i] << " ";
    std::cout << '\n';
    }
 
    

    {
    //double test_two[7] = {1,2,3,4,5,6,7};
    
    my_array<double, 7> test_two({4,2,3,4,5,6,7});
    std::cout << test_two.len() << std::endl;
    
    for(size_t i = 0; i < test_two.len(); i++)
        std::cout << test_two[i] << " ";
    std::cout << '\n';

    }


    //Direct Object Creation, Implicit Template Instansiation

}
