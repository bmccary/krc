#include <stdio.h>

#if 0

Modify the temperature conversion program (1-3) to
print the table in reverse order, that is, from 300 to 0.

#endif

int
main(int argc, char* argv[])
{
    float  f = 0.0f;
    float  c = 0.0f;
    float  L = 0.0f;
    float  U = 300.0f;
    float dT = 20.0f;

    printf("%3s %6s\n", "F^o", "C^o");

    for (f = U; f >= L; f -= dT)
    {
        c = (5.0f/9.0f)*(f - 32.0f);
        printf("%3.0f %6.1f\n", f, c);
    }

    return 0;
}

