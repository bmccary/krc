#include <stdio.h>

#if 0

Write a program that prints its input one word per line.

#endif

static const int IN  = 1;
static const int OUT = 0;

int
main(int argc, char* argv[])
{
    int c  = 0;

    int state = OUT;

    while ((c = getchar()) != EOF)
        switch (c)
        {
            case '\n':
            case '\t':
            case ' ':

                if(IN == state)
                    putchar('\n');

                state = OUT;

                break;
            
            default:

                state = IN;

                putchar(c);
        }

    return 0;
}

