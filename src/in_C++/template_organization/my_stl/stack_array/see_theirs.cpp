#include <iostream>
#include <array>

int main(){
        	
	std::array<int,10> test;

        std::cout << test.size() << std::endl;
	
	//comment in and out to test
	test.fill(0);
	test = {1,2,3,4,5,6,7,8,9,10};
	test.fill(21);


	for(int i : test)
            std::cout << i << " ";
	std::cout << std::endl;


	std::array<double, 7> test2({7,6,5,4,3,2,1});

	for(double i: test2)
	    std::cout << i << " ";

        std::cout << std::endl;
	



}
