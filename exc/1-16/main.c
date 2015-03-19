#include <stdio.h>

#if 0

Revise the main routine of the longest-line program
so it will correctly print the length of arbitrarily
long input lines, and as much as possible of the text.

NOTES

    1. I have modified the getline function
       in the text. The function in the text
       had an off-by-one error, where it was
       possible overrun the char s[] buffer.

       Furthermore, this modified getline function
       does not include the \n.

       Furthermore, this modified function returns
       -1 when there are no chars left to read.

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

void
copy(char to[], char from[])
{
    for (int i = 0; (to[i] = from[i]) != '\0'; ++i)
        ;
}

int
main(int argc, char* argv[])
{
    int len = 0;
    int max = 0;

    char line[MAXLINE];
    char longest[MAXLINE];

    for (int i = 0; i < MAXLINE; ++i)
        line[i] = longest[i] = '\0';

    while ((len = getline(line, MAXLINE)) > -1)
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }

    printf("%s\n", longest);

    return 0;
}

