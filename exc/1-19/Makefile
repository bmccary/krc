
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -pedantic -std=c99

all: main

clean:
	rm -f main

test:
	[[ "$$(echo '' | ./main)" == "" ]] || exit 1
	[[ "$$(echo 'a' | ./main)" == "a" ]] || exit 1
	[[ "$$(echo 'abc' | ./main)" == "cba" ]] || exit 1
	[[ "$$(echo ' abc' | ./main)" == "cba " ]] || exit 1

