out: test.o singly_flt.o
	gcc -g -o test.out test.o singly_flt.o

test: test.c
	gcc -g -c test.c

singly_int: singly_flt.c singly_flt.h
	gcc -g -c singly_flt.c


clean:
	rm ./*.o ./*.out
