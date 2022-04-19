make:
	make subdirs
	make lib_binary_trees.a

lib_binary_trees.a:
	ar cr lib_binary_trees.a degenerate/left_degen/left_degen_dbl/left_degen_dbl.o degenerate/left_degen/left_degen_flt/left_degen_flt.o degenerate/left_degen/left_degen_int/left_degen_int.o degenerate/right_degen/right_degen_dbl/right_degen_dbl.o degenerate/right_degen/right_degen_flt/right_degen_flt.o degenerate/right_degen/right_degen_int/right_degen_int.o


SUBDIRS = degenerate/ balanced/

subdirs:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	rm lib_binary_trees.a
	for dir in $(SUBDIRS); do \
                $(MAKE) -C $$dir clean; \
        done

