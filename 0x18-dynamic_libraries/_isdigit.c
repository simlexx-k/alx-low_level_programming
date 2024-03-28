
#include "main.h"

/*
 * _isdigit.c - Description of the file
 *
 * Description of each file individually.
 */
int _isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

int _strlen(char *s)
{
    int len = 0;
    while (*s++)
        len++;
    return len;
}
