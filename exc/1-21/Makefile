
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -pedantic -std=c99

all: main

clean:
	rm -f main

test:
	[[ "$$(echo -e '       ' | ./main)" == "       " ]] || exit 1
	[[ "$$(echo -e '        ' | ./main)" == "$$(echo -e '\t')" ]] || exit 1
	[[ "$$(echo -e '  \t' | ./main)" == "$$(echo -e '\t')" ]] || exit 1
	[[ "$$(echo -e 'abcd \t' | ./main)" == "$$(echo -e 'abcd\t')" ]] || exit 1
	[[ "$$(echo -e '\t ' | ./main)" == "$$(echo -e '\t ')" ]] || exit 1

