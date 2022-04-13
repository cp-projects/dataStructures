out: test.o left_degen_dbl.o
	gcc -g -o test.out test.o left_degen_dbl.o

test: test.c
	gcc -g -c test.c

left_degen_dbl: left_degen_dbl.c left_degen_dbl.h
	gcc -g -c left_degen_dbl.c


clean:
	rm ./*.o ./*.out
