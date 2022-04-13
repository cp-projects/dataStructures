out: test.o left_degen_str.o
	gcc -g -o test.out test.o left_degen_str.o

test: test.c
	gcc -c test.c

left_degen_str: left_degen_str.c left_degen_str.h
	gcc -c left_degen_str.c


clean:
	rm ./*.o ./*.out
