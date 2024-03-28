#include "main.h"

/*
 * _strncat.c - Description of the file
 *
 * Description of each file individually.
 */
char *_strncat(char *dest, char *src, int n)
{
    char *start = dest;
    while (*dest)
        dest++;
    while (n-- && (*dest++ = *src++))
        ;
    *dest = '\0';
    return start;
}
