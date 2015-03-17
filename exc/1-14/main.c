#include <stdio.h>

#if 0

Write a program to print a histogram of the frequencies
of different characters in its input.

#endif

static const int PRINTABLE0 = 32;
static const int PRINTABLE1 = 126;
static const int CHAR_MIN_  = 0; 
static const int CHAR_MAX_  = 127; 

static const char MARK = '#';

int
main(int argc, char* argv[])
{
    int c = 0;

    int freq[CHAR_MAX_ + 1];

    for (int i = 0; i < CHAR_MAX_ + 1; ++i)
        freq[i] = 0;

    //
    // Compute frequency table.
    //

    while ((c = getchar()) != EOF)
        if (CHAR_MIN_ <= c && c <= CHAR_MAX_)
            ++(freq[c]);
        else
            ++(freq[CHAR_MAX_]);

    //
    // Horizontally-oriented histogram.
    //

    for (int i = 0; i < CHAR_MAX_ + 1; ++i)
    {
        if (PRINTABLE0 <= i && i <= PRINTABLE1)
            printf("'%c'|", i);
        else
            printf("%3d|", i);

        for (int j = 0; j < freq[i]; ++j)
            printf("%c", MARK);

        printf("\n");
    }

    return 0;
}

