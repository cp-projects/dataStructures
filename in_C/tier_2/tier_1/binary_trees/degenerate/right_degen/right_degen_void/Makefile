out: test.o right_degen_void.o
	gcc -g -o test.out test.o right_degen_void.o

test: test.c
	gcc -g -c test.c

right_degen_void: right_degen_void.c right_degen_void.h
	gcc -g -c right_degen_void.c


clean:
	rm ./*.o ./*.out
