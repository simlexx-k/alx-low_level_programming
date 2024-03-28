#include "main.h"

/*
 * _strcpy.c - Description of the file
 *
 * Description of each file individually.
 */
char *_strcpy(char *dest, char *src)
{
    char *start = dest;
    while ((*dest++ = *src++))
        ;
    return start;
}
