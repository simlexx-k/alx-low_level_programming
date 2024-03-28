#include "main.h"

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
