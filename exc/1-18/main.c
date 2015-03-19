#include <stdio.h>

#if 0

Write a program to remove trailing blanks and tabs
from each line of input, and to delete entirely blank lines.

#endif

static const int MAXLINE = 1000;

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
trimr(char s[], int len)
{
    for (int i = len - 1; i >= 0; --i)
        switch (s[i])
        {
            case ' ':
            case '\t':
                break;
            default:
                s[++i] = '\0';
                return i;
        }

    s[0] = '\0';

    return 0;
}

int
main(int argc, char* argv[])
{
    int len = 0;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > -1)
        if (len < MAXLINE && (len = trimr(line, len)) > 0)
            printf("%s\n", line);

    return 0;
}

