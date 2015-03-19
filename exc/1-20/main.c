#include <stdio.h>

#if 0

Write a program detab that replaces tabs in the input
with the proper number of blanks to space to the next
tab stop. Assume a fixed set of tab stops, say every
n columns. Should n be a variable or a symbolic parameter?

#endif

static const int MAXLINE = 1000;
static const int TS = 8;

int
getline(char s[], int lim)
{
    int c = 0;
    int i = 0;

    lim = lim > 0 ? lim - 1 : 0;

    for (i = 0; i < lim && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    s[i] = '\0';

    if ('\n' != c)
        for ( ; (c = getchar()) != EOF && c != '\n'; ++i)
            ;

    if (0 == i && EOF == c)
        return -1;

    return i;
}

int
detab(char s[], char t[])
{
    int i = 0;
    int c = 0;
    int j = 0;
    int x = 0;

    for ( ; s[i]; ++i)
        switch (s[i])
        {
            //
            // Drop tab, proceed to next tabstop.
            //

            case '\t':
                
                x = TS - (c % TS);

                for (j = 0; j < x; ++j)
                    t[c++] = ' ';

                break;

            //
            // Copy.
            //

            default:
                t[c++] = s[i];
        }

    t[c] = '\0';

    return c;
}

int
main(int argc, char* argv[])
{
    int len = 0;
    char line0[MAXLINE];
    char line1[MAXLINE];

    while ((len = getline(line0, MAXLINE)) > -1)
    {
        detab(line0, line1);
        printf("%s\n", line1);
    }

    return 0;
}

