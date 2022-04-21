out: test.o left_degen_flt.o
	gcc -g -o test.out test.o left_degen_flt.o

test: test.c
	gcc -g -c test.c

singly_int: left_degen_flt.c left_degen_flt.h
	gcc -g -c singly_flt.c


clean:
	rm ./*.o ./*.out
