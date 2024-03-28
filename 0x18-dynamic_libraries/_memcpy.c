#!/bin/bash
#include "main.h"

/*
 * _memcpy.c - Description of the file
 *
 * Description of each file individually.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    char *start = dest;
    while (n--)
        *dest++ = *src++;
    return start;
}
