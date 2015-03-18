#include <stdio.h>

#if 0

Write a program to copy its input its output,
replacing each string of one or more blanks
by a single blank.

#endif

int
main(int argc, char* argv[])
{
    int c0 = 0;
    int c1 = 0;

    for ( ; (c1 = getchar()) != EOF; c0 = c1)
        if (' ' != c0 || ' ' != c1)
            putchar(c1);

    return 0;
}

