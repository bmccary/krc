#include <stdio.h>

#if 0

Write a program to print a histogram of the lenghts
of words in its input. It is easy to draw the histogram
with the bars horizontal; a vertical orientation is
more challenging.

#endif

static const int MAXSZ = 24;
static const char MARK = '#';

int
main(int argc, char* argv[])
{
    int c = 0;

    int freq[MAXSZ];

    for (int i = 1; i < MAXSZ; ++i)
        freq[i] = 0;

    int n = 0;

    //
    // Calculate frequency table.
    // NOTE: freq[0] is undefined.
    //

    while ((c = getchar()) != EOF)
        switch (c)
        {
            //
            // Not part of a word.
            //
            case ' ':
            case '\n':
            case '\t':

                //
                // The right boundary of a word.
                //
                if (n > 0)
                {
                    n = (n < MAXSZ) ? n : MAXSZ - 1;
                    ++(freq[n]);
                }

                n = 0;

                break;

            //
            // Part of a word.
            //
            default:
                ++n;
        }

    //
    // Horizontally-oriented histogram.
    //

    for (int i = 1; i < MAXSZ; ++i)
    {
        printf("%2d|", i);
        for(int j = 0; j < freq[i]; ++j)
            printf("%c", MARK);
        printf("\n");
    }

    printf("\n\n");

    //
    // Vertically-oriented histogram.
    //

    int maxfreq = 0;
    for (int i = 1; i < MAXSZ; ++i)
        maxfreq = maxfreq < freq[i] ? freq[i] : maxfreq;

    for (int i = maxfreq; i > 0; --i)
    {
        for (int j = 1; j < MAXSZ; ++j)
            if (freq[j] < i)
                printf("%3s", " ");
            else
                printf("%3c", MARK);
        printf("\n");
    }

    for (int i = 1; i < MAXSZ; ++i)
        printf("---");
    printf("\n");

    for (int i = 1; i < MAXSZ; ++i)
        printf("%3d", i);
    printf("\n");

    return 0;
}

