
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -pedantic -std=c99

all: main

clean:
	rm -f main

test:
	[[ "$$(echo -e -n 'abc' | ./main)" == "abc" ]] || exit 1
	[[ "$$(echo -e -n ' abc' | ./main)" == " abc" ]] || exit 1
	[[ "$$(echo -e -n ' abc ' | ./main)" == " abc" ]] || exit 1
	[[ "$$(echo -e -n ' abc  \t  \t' | ./main)" == " abc" ]] || exit 1

