
SHELL := /bin/bash
CC    := /usr/bin/gcc -Wall -pedantic -std=c99

all: main

clean:
	rm -f main

test:
	[[ "$$(echo -n -e 'abc  \tdef' | ./main)" == "abc     def" ]] || exit 1
	[[ "$$(echo -n -e 'abc  \t\tdef' | ./main)" == "abc             def" ]] || exit 1
	[[ "$$(echo -n -e '1234567\t' | ./main)" == "1234567 " ]] || exit 1
	[[ "$$(echo -n -e '12345678\t' | ./main)" == "12345678        " ]] || exit 1
	[[ "$$(echo -n -e 'abc  \t def' | ./main)" == "abc      def" ]] || exit 1

