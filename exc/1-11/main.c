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
    int c  = 0;
    int nl = 0;
    int nw = 0;
    int nc = 0;

    int state = OUT;

    while ((c = getchar()) != EOF)
    {
        ++nc;

        if ('\n' == c)
            ++nl;

        if (' ' == c || '\n' == c || '\t' == c)
            state = OUT;
        else if (OUT == state)
        {
            state = IN;
            ++nw;
        }
    }

    printf("%d %d %d\n", nl, nw, nc);

    return 0;
}

