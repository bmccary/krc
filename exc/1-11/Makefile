
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -pedantic -std=c99

all: main

clean:
	rm -f main

test:
	for f in test0 test1 test2 main.c Makefile; \
	do \
		m="$$(./main < $$f)"; \
		n="$$(wc < $$f | xargs)"; \
		if [ "$$m" != "$$n" ]; \
		then \
			echo $$f; \
			echo $$m; \
			echo $$n; \
			exit 1; \
		fi; \
	done

