
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -pedantic -std=c99

all: main

clean:
	rm -f main

test:
	[[ -z "$$(printf '=%.0s' $$(seq 78) | ./main)" ]] || exit 1
	[[ -z "$$(printf '=%.0s' $$(seq 79) | ./main)" ]] || exit 1
	[[ -z "$$(printf '=%.0s' $$(seq 80) | ./main)" ]] || exit 1
	[[ ! -z "$$(printf '=%.0s' $$(seq 81) | ./main)" ]] || exit 1
	[[ "$$(./main < test0 | wc -l)" == "2" ]] || exit 1

