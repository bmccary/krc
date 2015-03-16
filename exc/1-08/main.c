#include <stdio.h>

#if 0

Write a program to count blanks, tabs, and newlines.

#endif

int
main(int argc, char* argv[])
{
    int N = 0;
    int S = 0;
    int T = 0;
    int c = 0;

    while ((c = getchar()) != EOF)
        switch (c)
        {
            case '\n': ++N; break;
            case  ' ': ++S; break;
            case '\t': ++T; break;
        }

    printf("N: %d\n", N);
    printf("S: %d\n", S);
    printf("T: %d\n", T);

    return 0;
}

