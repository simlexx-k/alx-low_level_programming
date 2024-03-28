
#include "main.h"

/*
 * _strchr.c - Description of the file
 *
 * Description of each file individually.
 */
char *_strchr(char *s, char c)
{
    while (*s)
    {
        if (*s == c)
            return s;
        s++;
    }
    if (*s == c)
        return s;
    return NULL;
}
