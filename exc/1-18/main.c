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
trimr(char s[], int len)
{
    int i = len; // \0
    --i;         // \n
    --i;         // ?

    for ( ; i >= 0; --i)
        switch (s[i])
        {
            case ' ':
            case '\t':
                break;
            default:
                s[++i] = '\n';
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

    while ((len = getline(line, MAXLINE)) > 0)
        if (len < MAXLINE && (len = trimr(line, len)) > 0)
            printf("%s", line);

    return 0;
}

