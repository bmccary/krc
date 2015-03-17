#include <stdio.h>

#if 0

Write a program to copy its input its output,
replacing each string of one or more blanks
by a single blank.

#endif

int
main(int argc, char* argv[])
{
    int c = 0;

    while ((c = getchar()) != EOF)
    {
        putchar(c);

        if (' ' == c)
        {
            while ((c = getchar()) != EOF && ' ' == c)
                ;

            putchar(c);
        }
    }

    return 0;
}

