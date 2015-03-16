#include <stdio.h>

#if 0

Write a program to copy its input its output,
replacing each tab by \t, each backspace by \b, and
each backslash by \\.  by a single blank. This makes
tabs and backspaces visible in an unambiguous way.

#endif

int
main(int argc, char* argv[])
{
    int c = 0;

    while ((c = getchar()) != EOF)
        switch (c)
        {
            case '\t': putchar('\\'); putchar('t'); break;
            case '\b': putchar('\\'); putchar('b'); break;
            case '\\': putchar('\\'); putchar('\\'); break;
            default: putchar(c);
        }

    return 0;
}

