
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -pedantic -std=c99

all: main

clean:
	rm -f main

test:
	for f in test0 test1 main.c Makefile; \
	do \
		u="$$(./main < $$f)"; \
		v="$$(echo "$$u" | wc -L)"; \
		w="$$(wc -L < $$f)"; \
		if [ "$$v" != "$$w" ]; \
		then \
			echo "$$f"; \
			echo "$$u"; \
			echo "$$v"; \
			echo "$$w"; \
			exit 1; \
		fi; \
	done
	if [ "$$(./main < test2 | wc -L)" != "999" ]; \
	then \
		echo "EIEIO"; \
		exit 1; \
	fi
