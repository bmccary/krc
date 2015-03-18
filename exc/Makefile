
SHELL := /bin/bash
DIRS  := $(shell ls | grep '-')

.PHONY: $(DIRS) clean test

all: $(DIRS)

clean:
	for d in $(DIRS); \
	do \
		$(MAKE) -C $$d clean; \
	done

$(DIRS):
	if [ -r $@/Makefile ]; \
	then \
		$(MAKE) -C $@; \
	fi

test:
	for d in $(DIRS); \
	do \
		$(MAKE) -C $$d test; \
	done
	
