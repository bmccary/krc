#include <stdio.h>

#if 0

Write a function reverse(s) that reverses
the character string s. Use it to write a program
that reverses its input a line at a time.

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

char*
reverse(char s[])
{
    int i = 0;
    
    for ( ; i < MAXLINE && s[i] != '\0'; ++i)
        ;

    --i; // \0

    int j = 0;

    char c = 0;

    for ( ; j < i; ++j, --i)
    {
        c    = s[j];
        s[j] = s[i];
        s[i] = c;
    }

    return s;
}

int
main(int argc, char* argv[])
{
    int len = 0;
    char line[MAXLINE];

    while ((len = getline(line, MAXLINE)) > -1)
        if (len < MAXLINE)
            printf("%s\n", reverse(line));

    return 0;
}

