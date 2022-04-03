out: test.o singly_dbl.o
	gcc -g -o test.out test.o singly_dbl.o

test: test.c
	gcc -g -c test.c

singly_int: singly_dbl.c singly_dbl.h
	gcc -g -c singly_dbl.c


clean:
	rm ./*.o ./*.out
