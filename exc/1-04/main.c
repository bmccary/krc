#include <stdio.h>

#if 0

Write a program to print the corresponding
Celcius to Fahrenheit table.

#endif

int
main(int argc, char* argv[])
{
    float  f = 0.0f;
    float  c = 0.0f;
    float  L = 0.0f;
    float  U = 150.0f;
    float dT = 10.0f;

    printf("%3s %6s\n", "F^o", "C^o");

    for (c = L; c <= U; c += dT)
    {
        f = (9.0f/5.0f)*c + 32.0f;
        printf("%3.0f %6.1f\n", c, f);
    }

    return 0;
}

