out: test.o right_degen_dbl.o
	gcc -g -o test.out test.o right_degen_dbl.o

test: test.c
	gcc -g -c test.c

right_degen_dbl.o: right_degen_dbl.c right_degen_dbl.h
	gcc -g -c right_degen_dbl.c

debug: right_degen_dbl.c right_degen_dbl.h
	gcc -g -o debug.out right_degen_dbl.c

clean:
	rm ./*.o ./*.out
