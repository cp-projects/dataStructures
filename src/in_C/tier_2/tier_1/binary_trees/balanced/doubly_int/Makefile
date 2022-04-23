out: test.o doubly_int.o
	gcc -g -o test.out test.o doubly_int.o

test: test.c
	gcc -g -c test.c

doubly_int.o: doubly_int.c doubly_int.h
	gcc -g -c doubly_int.c


clean:
	rm ./*.o ./*.out
