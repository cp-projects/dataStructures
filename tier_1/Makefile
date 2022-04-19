make:
	make subdirs
	make data_structures_t1.a

data_structures_t1.a:
	ar cr data_structures_t1.a heap_linked_list/lib_linked_list.o ordered_pair_linked_list/lib_op_list.o  


SUBDIRS = heap_linked_list/ ordered_pair_linked_list/ binary_trees/

subdirs:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	rm data_structures_t1.a
	for dir in $(SUBDIRS); do \
                $(MAKE) -C $$dir clean; \
        done

