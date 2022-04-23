SUBDIRS = dbl_op_dbl/ dbl_op_flt/ dbl_op_int/

subdirs:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	for dir in $(SUBDIRS); do \
                $(MAKE) -C $$dir clean; \
        done
