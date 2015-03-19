
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -pedantic -std=c99

all: main

clean:
	rm -f main

test:
	for f in test0 test1 test2 main.c Makefile; \
	do \
        s="$$(tr -dc ' ' < $$f | wc -c)"; \
        t="$$(tr -dc '\t' < $$f | wc -c)"; \
        n="$$(tr -dc '\n' < $$f | wc -c)"; \
		a="$$(./main < $$f)"; \
		b="$$s $$t $$n"; \
		if [ "$$a" != "$$b" ]; \
		then \
			echo $$f; \
			echo $$a; \
			echo $$b; \
			exit 1; \
		fi; \
	done

