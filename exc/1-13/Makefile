
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -std=c99

all: main

clean:
	rm -f main

main.c.hist: main.c main
	./main < $< > $@

