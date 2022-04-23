SUBDIRS = sin_op_dbl/ sin_op_flt/ sin_op_int/

subdirs:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	for dir in $(SUBDIRS); do \
                $(MAKE) -C $$dir clean; \
        done
