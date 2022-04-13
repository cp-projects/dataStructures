out: test.o right_degen_int.o
	gcc -g -o test.out test.o right_degen_int.o

test: test.c
	gcc -g -c test.c

right_degen_int: right_degen_int.c right_degen_int.h
	gcc -g -c right_degen_int.c


clean:
	rm ./*.o ./*.out
