#include <stdio.h>

#if 0

Write a program to count blanks, tabs, and newlines.

#endif

int
main(int argc, char* argv[])
{
    int S = 0;
    int T = 0;
    int N = 0;
    int c = 0;

    while ((c = getchar()) != EOF)
        switch (c)
        {
            case  ' ': ++S; break;
            case '\t': ++T; break;
            case '\n': ++N; break;
        }

    printf("%d %d %d\n", S, T, N);

    return 0;
}

