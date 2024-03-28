
#include "main.h"

/*
 * _strcat.c - Description of the file
 *
 * Description of each file individually.
 */
char *_strcat(char *dest, char *src)
{
    char *start = dest;
    while (*dest)
        dest++;
    while ((*dest++ = *src++))
        ;
    return start;
}
