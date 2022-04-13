out: test.o right_degen_flt.o
	gcc -g -o test.out test.o right_degen_flt.o

test: test.c
	gcc -g -c test.c

right_degen_flt: right_degen_flt.c right_degen_flt.h
	gcc -g -c righT_degen_flt.c


clean:
	rm ./*.o ./*.out
