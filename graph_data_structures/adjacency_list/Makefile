test.out: testing.o ../../tier_1/data_structures_t1.a
	gcc -o test.out testing.o ../../tier_1/data_structures_t1.a


testing.o: testing.c ../../tier_1/tier_1.h
	gcc -c testing.c

clean:
	rm ./*.o ./*.out
