#include <stdio.h>

#if 0

Write a program entab that replaces strings of blanks by
the minimum number of tabs and blanks to achieve the same
spacing. Use the same tab stops as for detab. When either
a tab or a single blank would suffice to reach a tab stop,
which should be given preference?

#endif

static const int MAXLINE = 1000;
static const int TS = 8;

int
getline(char s[], int lim)
{
    int c = 0;
    int i = 0;
    
    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
        s[i] = c;

    if ('\n' == c)
        s[i++] = c;

    s[i] = '\0';

    if (c != '\n' && lim - 1 == i)
        for ( ; (c = getchar()) != EOF && c != '\n'; ++i)
            ;

    return i;
}

int
entab(char s[], char t[])
{
    int i = 0;
    int j = 0;
    int k = 0;

    int c0 = 0;
    int c1 = 0;

    for ( ; s[i]; ++i)
        switch (s[i])
        {
            //
            // Accumulate WS, advancing column.
            //

            case ' ': 
                ++c1;
                break; 

            case '\t':
                c1 += TS - (c1 % TS);
                break;
                
            //
            // Copy, flushing WS first.
            //

            default:
           
                // Flush WS. 
                while (1)
                {
                    k = TS - (c0 % TS);
                    if (c0 + k > c1)
                        break;

                    t[j++] = '\t';
                    c0 += k;
                }

                for ( ; c0 < c1; ++c0)
                    t[j++] = ' ';

                // Copy.
                c0 = ++c1;

                t[j++] = s[i];
        }

    t[j] = '\0';

    return j;
}

int
main(int argc, char* argv[])
{
    int len = 0;
    char line0[MAXLINE];
    char line1[MAXLINE];

    while ((len = getline(line0, MAXLINE)) > 0)
    {
        entab(line0, line1);
        printf("%s", line1);
    }

    return 0;
}

