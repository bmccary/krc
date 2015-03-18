
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -std=c99

all: main

clean:
	rm -f main

test:
	for f in test0 test1 test2 main.c Makefile; \
	do \
		tr ' \t' '\n' < main.c | tr -s '\n' > tmp0; \
		./main < main.c > tmp1; \
		diff tmp0 tmp1; \
		if [ "$$?" != "0" ]; \
		then \
			echo $$f; \
			exit 1; \
		fi; \
	done;
	rm -f tmp0 tmp1

