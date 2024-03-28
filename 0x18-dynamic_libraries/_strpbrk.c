
#include "main.h"

/*
 * _strpbrk.c - Description of the file
 *
 * Description of each file individually.
 */
char *_strpbrk(char *s, char *accept)
{
    while (*s)
    {
        char *temp = accept;
        while (*temp)
        {
            if (*s == *temp)
                return s;
            temp++;
        }
        s++;
    }
    return NULL;
}
