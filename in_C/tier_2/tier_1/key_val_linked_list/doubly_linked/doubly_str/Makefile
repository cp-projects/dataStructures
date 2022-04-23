out: test.o singly_str.o
	gcc -g -o test.out test.o singly_str.o

test: test.c
	gcc -c test.c

singly_int: singly_str.c singly_str.h
	gcc -c singly_str.c


clean:
	rm ./*.o ./*.out
