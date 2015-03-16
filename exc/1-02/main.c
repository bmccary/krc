#include <stdio.h>

#if 0

Experiment to find out what happens when printf's
argument string contains \c, where is some other
character not listed above.

#endif

int
main(int argc, char* argv[])
{
    //
    // These all work (no warnings).
    //

    printf("\\a: '\a'\n");
    printf("\\b: '\b'\n");
    printf("\\e: '\e'\n");
    printf("\\f: '\f'\n");
    printf("\\n: '\n'\n");
    printf("\\t: '\t'\n");
    printf("\\v: '\v'\n");
    printf("\\E: '\E'\n");
    printf("\\1: '\1'\n");
    printf("\\2: '\2'\n");
    printf("\\3: '\3'\n");
    printf("\\4: '\4'\n");
    printf("\\5: '\5'\n");
    printf("\\6: '\6'\n");
    printf("\\7: '\7'\n");

    //
    // These all work (with 'warning: unknown escape sequence: X')
    //

    printf("\\c: '\c'\n");
    printf("\\d: '\d'\n");
    printf("\\g: '\g'\n");
    printf("\\h: '\h'\n");
    printf("\\i: '\i'\n");
    printf("\\j: '\j'\n");
    printf("\\k: '\k'\n");
    printf("\\l: '\l'\n");
    printf("\\m: '\m'\n");
    printf("\\o: '\o'\n");
    printf("\\p: '\p'\n");
    printf("\\q: '\q'\n");
    printf("\\r: '\r'\n");
    printf("\\s: '\s'\n");
    printf("\\w: '\w'\n");
    printf("\\y: '\y'\n");
    printf("\\z: '\z'\n");
    printf("\\A: '\A'\n");
    printf("\\B: '\B'\n");
    printf("\\C: '\C'\n");
    printf("\\D: '\D'\n");
    printf("\\F: '\F'\n");
    printf("\\G: '\G'\n");
    printf("\\H: '\H'\n");
    printf("\\I: '\I'\n");
    printf("\\J: '\J'\n");
    printf("\\K: '\K'\n");
    printf("\\L: '\L'\n");
    printf("\\M: '\M'\n");
    printf("\\N: '\N'\n");
    printf("\\O: '\O'\n");
    printf("\\P: '\P'\n");
    printf("\\Q: '\Q'\n");
    printf("\\R: '\R'\n");
    printf("\\S: '\S'\n");
    printf("\\T: '\T'\n");
    printf("\\V: '\V'\n");
    printf("\\W: '\W'\n");
    printf("\\X: '\X'\n");
    printf("\\Y: '\Y'\n");
    printf("\\Z: '\Z'\n");
    printf("\\8: '\8'\n");
    printf("\\9: '\9'\n");

    //
    // This works with string terminated at first '
    // (and 'warning: embedded ‘\0’ in format').
    //

    printf("\\0: '\0'\n");

#if 0
    warning: universal character names are only valid in C++ and C99
    error: incomplete universal character name \u

    printf("\\u: '\u'\n");
    printf("\\U: '\U'\n");
#endif

#if 0
    error: \x used with no following hex digits

    printf("\\x: '\x'\n");
#endif

    printf("\n");

    return 0;
}

