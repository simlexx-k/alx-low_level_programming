#include "main.h"

/*
 * _strncpy.c - Description of the file
 *
 * Description of each file individually.
 */
char *_strncpy(char *dest, char *src, int n)
{
    char *start = dest;
    while (n-- && (*dest++ = *src++))
        ;
    *dest = '\0';
    return start;
}
