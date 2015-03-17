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
main(int argc, char* argv[])
{
    int len = 0;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > THRESH)
            printf("%s", line);

    return 0;
}

