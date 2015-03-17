#include <stdio.h>

#if 0

Revise the main routine of the longest-line program
so it will correctly print the length of arbitrarily
long input lines, and as much as possible of the text.

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

    return i;
}

void
copy(char to[], char from[])
{
    int i = 0;

    while ((to[i] = from[i]) != '\0')
        ++i;
}

int
main(int argc, char* argv[])
{
    int len = 0;
    int max = 0;
    char line[MAXLINE];
    char longest[MAXLINE];

    while ((len = getline(line, MAXLINE)) > 0)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }

    if (max > 0)
        printf("%s", longest);

    return 0;
}

