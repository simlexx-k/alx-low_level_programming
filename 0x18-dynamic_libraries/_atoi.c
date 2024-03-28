#include "main.h"

int _atoi(char *s)
{
    int sign = 1, res = 0;
    while (*s == ' ')
        s++;
    if (*s == '-')
    {
        sign = -1;
        s++;
    }
    while (*s >= '0' && *s <= '9')
    {
        res = res * 10 + (*s - '0');
        s++;
    }
    return sign * res;
}
