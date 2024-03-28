#include "main.h"

/*
 * _memset.c - Description of the file
 *
 * Description of each file individually.
 */
char *_memset(char *s, char b, unsigned int n)
{
    char *start = s;
    while (n--)
        *s++ = b;
    return start;
}
