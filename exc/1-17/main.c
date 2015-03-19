#include <stdio.h>

#if 0

Write a program to print all input lines
that are longer than 80 characters.

#endif

static const int MAXLINE = 1000;
static const int THRESH  = 80;

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
main(int argc, char* argv[])
{
    int len = 0;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > -1)
        if (len > THRESH)
            printf("%s\n", line);

    return 0;
}

