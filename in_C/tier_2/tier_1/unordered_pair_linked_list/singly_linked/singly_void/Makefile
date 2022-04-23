out: test.o singly_int.o
	gcc -g -o test.out test.o singly_int.o

test: test.c
	gcc -g -c test.c

singly_int: singly_int.c singly_int.h
	gcc -g -c singly_int.c


clean:
	rm ./*.o ./*.out
