make:
	make subdirs
	make data_structures_t1.a

data_structures_t1.a:
	ar cr data_structures_t1.a binary_trees/lib_binary_trees.a heap_linked_list/lib_linked_list.a 


SUBDIRS = heap_linked_list/ binary_trees/

subdirs:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	rm data_structures_t1.a
	for dir in $(SUBDIRS); do \
                $(MAKE) -C $$dir clean; \
        done

