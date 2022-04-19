lib_linked_list.a:
	ar cr lib_linked_list.a doubly_linked/doubly_dbl/doubly_dbl.o doubly_linked/doubly_flt/doubly_flt.o doubly_linked/doubly_int/doubly_int.o singly_linked/singly_dbl/singly_dbl.o singly_linked/singly_flt/singly_flt.o singly_linked/singly_int/singly_int.o


SUBDIRS = doubly_linked/ singly_linked/

subdirs:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	for dir in $(SUBDIRS); do \
                $(MAKE) -C $$dir clean; \
        done

