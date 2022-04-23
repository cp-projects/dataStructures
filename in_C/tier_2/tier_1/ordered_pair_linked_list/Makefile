make:
	make subdirs
	make lib_op_list.o
	make lib_op_list.a

lib_op_list.a:
	ar cr lib_op_list.a dbl_op/dbl_op_dbl/dbl_op_dbl.o dbl_op/dbl_op_flt/dbl_op_flt.o dbl_op/dbl_op_int/dbl_op_int.o 
	#sin_op/sin_op_dbl/sin_op_dbl.o sin_op/sin_op_flt/sin_op_flt.o sin_op/sin_op_int/sin_op_int.o

lib_op_list.o:
	ld -relocatable dbl_op/dbl_op_dbl/dbl_op_dbl.o dbl_op/dbl_op_flt/dbl_op_flt.o dbl_op/dbl_op_int/dbl_op_int.o -o lib_op_list.o 
	#sin_op/sin_op_dbl/sin_op_dbl.o sin_op/sin_op_flt/sin_op_flt.o sin_op/sin_op_int/sin_op_int.o -o lib_op_list.o

SUBDIRS = dbl_op/ #sin_op/

subdirs:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	rm lib_op_list.o
	rm lib_op_list.a
	for dir in $(SUBDIRS); do \
                $(MAKE) -C $$dir clean; \
        done

