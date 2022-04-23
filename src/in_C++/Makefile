testing.out: testing.o linked_list.hpp linked_list.o
	g++ -o testing.out testing.o linked_list.o

testing.o: testing.cpp linked_list.hpp
	g++ -c testing.cpp

linked_list.o: linked_list.cpp
	g++ -c linked_list.cpp


debug: linked_list.cpp
	g++ -g -o debug.out linked_list.cpp

clean:
	rm ./*.o ./*.out
