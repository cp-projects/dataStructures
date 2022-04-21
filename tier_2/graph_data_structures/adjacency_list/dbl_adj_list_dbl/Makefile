test.out: dbl_adj_list_dbl.o ../../../tier_1/data_structures_t1.a
	gcc -o test.out dbl_adj_list_dbl.o ../../../tier_1/data_structures_t1.a


dbl_adj_list_dbl.o: dbl_adj_list_dbl.c dbl_adj_list_dbl.h ../../../tier_1/tier_1.h
	gcc -c dbl_adj_list_dbl.c

clean:
	rm ./*.o ./*.out
