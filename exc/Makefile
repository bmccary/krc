
SHELL := /bin/bash
DIRS  := $(shell ls | grep '-')

.PHONY: $(DIRS) clean test

all: $(DIRS)

clean:
	for d in $(DIRS); \
	do \
		if [ -f $$d/Makefile ]; \
		then \
			$(MAKE) -C $$d clean; \
		fi; \
	done

$(DIRS):
	if [ -r $@/Makefile ]; \
	then \
		$(MAKE) -C $@; \
	fi

test:
	for d in $(DIRS); \
	do \
		if [ -f $$d/Makefile ]; \
		then \
			$(MAKE) -C $$d test; \
		fi; \
	done
	
