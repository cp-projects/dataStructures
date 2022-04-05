out: test.o doubly_flt.o
	gcc -g -o test.out test.o doubly_flt.o

test.o: test.c
	gcc -g -c test.c

doubly_dbl.o: doubly_flt.c doubly_flt.h
	gcc -g -c doubly_flt.c


clean:
	rm ./*.o ./*.out
