testing.out: testing.o linked_list.hpp linked_list.o
	g++ -std=c++17 -o testing.out testing.o linked_list.o

testing.o: testing.cpp linked_list.hpp
	g++ -std=c++17 -c testing.cpp

linked_list.o: linked_list.cpp
	g++ -std=c++17 -c linked_list.cpp


debug: linked_list.cpp debug.o
	g++ -std=c++17 -g -o debug.out linked_list.cpp debug.o

debug.o: debug.cpp linked_list.hpp
	g++ -std=c++17 -g -c debug.cpp

clean:
	rm ./*.o ./*.out ./*.*~
