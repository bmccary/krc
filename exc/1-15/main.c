#include <stdio.h>

#if 0

Rewrite the temperature conversion program of
Section 1.2 to use a function conversion.

#endif

float
f2c(float f)
{
    return (5.0f/9.0f)*(f - 32.0f);
}

int
main(int argc, char* argv[])
{
    float  f = 0.0f;
    float  L = 0.0f;
    float  U = 300.0f;
    float dT = 20.0f;

    printf("%3s %6s\n", "F^o", "C^o");

    for (f = L; f <= U; f += dT)
        printf("%3.0f %6.1f\n", f, f2c(f));

    return 0;
}

