out: test.o left_degen_void.o
	gcc -g -o test.out test.o left_degen_void.o

test: test.c
	gcc -g -c test.c

singly_int: left_degen_void.c left_degen_void.h
	gcc -g -c left_degen_void.c


clean:
	rm ./*.o ./*.out
