#!/bin/bash
#include "main.h"

/*
 * _strstr.c - Description of the file
 *
 * Description of each file individually.
 */
char *_strstr(char *haystack, char *needle)
{
    while (*haystack)
    {
        char *start = haystack;
        char *sub = needle;
        while (*haystack && *sub && *haystack == *sub)
        {
            haystack++;
            sub++;
        }
        if (!*sub)
            return start;
        haystack = start + 1;
    }
    return NULL;
}
