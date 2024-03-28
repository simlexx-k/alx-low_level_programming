
#include "main.h"

/*
 * _strncmp.c - Description of the file
 *
 * Description of each file individually.
 */
int _strcmp(char *s1, char *s2)
{
    while (*s1 && *s2 && *s1 == *s2)
    {
        s1++;
        s2++;
    }
    return (*s1 - *s2);
}
