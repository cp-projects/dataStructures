#include <iostream>
#include "my_array.hpp"

int main(){

    std::cout << "Hello World\n";

    my_array<int, 10> test_ar;

    std::cout << test_ar.get_len() << "\n" << test_ar[2] << std::endl;

}
