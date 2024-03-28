#include "main.h"

unsigned int _strspn(char *s, char *accept)
{
    unsigned int count = 0;
    int found;
    while (*s)
    {
        found = 0;
        while (*accept)
        {
            if (*s == *accept)
            {
                count++;
                found = 1;
                break;
            }
            accept++;
        }
        if (!found)
            break;
        s++;
    }
    return count;
}
