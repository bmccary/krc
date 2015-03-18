
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -std=c99

all: main

clean:
	rm -f main

test:
	[[ $$(echo -n " " | ./main) == " " ]] || exit 1
	[[ $$(echo -n "  " | ./main) == " " ]] || exit 1
	[[ $$(echo -n "   " | ./main) == " " ]] || exit 1
	[[ $$(echo -n "    " | ./main) == " " ]] || exit 1
	[[ $$(echo -n "a a" | ./main) == "a a" ]] || exit 1
	[[ $$(echo -n "a  a" | ./main) == "a a" ]] || exit 1
	[[ $$(echo -n "a   a" | ./main) == "a a" ]] || exit 1
	[[ $$(echo -n "a    a" | ./main) == "a a" ]] || exit 1

