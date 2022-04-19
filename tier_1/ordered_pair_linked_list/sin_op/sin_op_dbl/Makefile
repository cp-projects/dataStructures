out: test.o sin_op_dbl.o
	gcc -g -o test.out test.o sin_op_dbl.o

test: test.c
	gcc -g -c test.c

singly_int: sin_op_dbl.c sin_op_dbl.h
	gcc -g -c sin_op_dbl.c


clean:
	rm ./*.o ./*.out
