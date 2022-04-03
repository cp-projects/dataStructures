out: test.o singly_str.o
	gcc -g -o test.out test.o singly_str.o

test: test.c
	gcc -g -c test.c

singly_int: singly_str.c singly_str.h
	gcc -g -c singly_str.c


clean:
	rm ./*.o ./*.out
