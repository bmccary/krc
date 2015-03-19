
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -pedantic -std=c99

all: main

clean:
	rm -f main

test:
	[[ $$(echo -e -n "\t" | ./main) == "\\t" ]] || exit 1
	[[ $$(echo -e -n "\b" | ./main) == "\\b" ]] || exit 1
	[[ $$(echo -e -n "\\" | ./main) == "\\\\" ]] || exit 1
	[[ $$(echo -e -n "a\tb" | ./main) == "a\\tb" ]] || exit 1

