#include "main.h"

char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;
    while (n--)
        *s++ = b;
    return start;
}
