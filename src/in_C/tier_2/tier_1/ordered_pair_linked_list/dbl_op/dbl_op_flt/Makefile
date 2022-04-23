out: test.o dbl_op_flt.o
	gcc -g -o test.out test.o dbl_op_flt.o

test.o: test.c
	gcc -g -c test.c

doubly_dbl.o: dbl_op_flt.c dbl_op_flt.h
	gcc -g -c dbl_op_flt.c


clean:
	rm ./*.o ./*.out
