out: test.o dbl_op_dbl.o
	gcc -g -o test.out test.o dbl_op_dbl.o

test.o: test.c
	gcc -g -c test.c

doubly_dbl.o: dbl_op_dbl.c dbl_op_dbl.h
	gcc -g -c dbl_op_dbl.c


clean:
	rm ./*.o ./*.out
