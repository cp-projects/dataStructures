make:
	make test.out

test.out: test.cpp my_array.hpp
	g++ -std=c++17 -o test.out test.cpp

see_thiers: see_theirs.cpp
	g++ -std=c++17 -o see_thiers.out see_theirs.cpp

debug: debug.cpp my_array.hpp
	g++ -std=c++17 -o debug.out debug.cpp my_array.hpp

clean:
	rm ./*.out ./*.o
