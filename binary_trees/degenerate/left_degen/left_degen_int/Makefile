out: test.o left_degen_int.o
	gcc -g -o test.out test.o left_degen_int.o

test: test.c
	gcc -g -c test.c

left_degen_int: left_degen_int.c left_degen_int.h
	gcc -g -c left_degen_int.c


clean:
	rm ./*.o ./*.out
