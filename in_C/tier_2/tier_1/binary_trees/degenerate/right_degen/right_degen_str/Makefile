out: test.o right_degen_str.o
	gcc -g -o test.out test.o right_degen_str.o

test: test.c
	gcc -c test.c

right_degen_str: right_degen_str.c right_degen_str.h
	gcc -c right_degen_str.c


clean:
	rm ./*.o ./*.out
