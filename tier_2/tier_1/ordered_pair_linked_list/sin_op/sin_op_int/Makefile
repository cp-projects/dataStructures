out: test.o sin_op_int.o
	gcc -g -o test.out test.o sin_op_int.o

test: test.c
	gcc -g -c test.c

singly_int: sin_op_int.c sin_op_int.h
	gcc -g -c sin_op_int.c


clean:
	rm ./*.o ./*.out
