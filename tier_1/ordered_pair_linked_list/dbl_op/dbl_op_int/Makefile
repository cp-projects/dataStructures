out: test.o dbl_os_int.o
	gcc -g -o test.out test.o dbl_op_int.o

test: test.c
	gcc -g -c test.c

dbl_os_int.o: dbl_op_int.c dbl_op_int.h
	gcc -g -c dbl_op_int.c


clean:
	rm ./*.o ./*.out
