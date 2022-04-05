out: test.o doubly_dbl.o
	gcc -g -o test.out test.o doubly_dbl.o

test.o: test.c
	gcc -g -c test.c

doubly_dbl.o: doubly_dbl.c doubly_dbl.h
	gcc -g -c doubly_dbl.c


clean:
	rm ./*.o ./*.out
