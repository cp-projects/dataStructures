out: test.o sin_op_flt.o
	gcc -g -o test.out test.o sin_op_flt.o

test: test.c
	gcc -g -c test.c

singly_int: sin_op_flt.c sin_op_flt.h
	gcc -g -c sin_op_flt.c


clean:
	rm ./*.o ./*.out
