SUBDIRS = right_degen/ left_degen/

subdirs:
	for dir in $(SUBDIRS); do \
		$(MAKE) -C $$dir; \
	done

clean:
	for dir in $(SUBDIRS); do \
                $(MAKE) -C $$dir clean; \
        done
