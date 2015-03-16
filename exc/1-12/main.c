#include <stdio.h>

#if 0

How would you test the word count program?
What kinds of input are most likely to uncover bugs,
if there are any?

#endif

static const int IN  = 1;
static const int OUT = 0;

int
main(int argc, char* argv[])
{
    int c = 0;

    int state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (state == IN)
                putchar('\n');

            state = OUT;
        }
        else 
        {
            state = IN;
            putchar(c);
        }
    }

    return 0;
}

