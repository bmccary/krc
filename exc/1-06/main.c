#include <stdio.h>

#if 0

Verify that the expression getchar() != EOF is 0 or 1.

#endif

int
main(int argc, char* argv[])
{
    char c = 0;

    do
    {
        c = (getchar() != EOF);
        printf("%d\n", c);
    } 
    while (c)
        ;

    return 0;
}

