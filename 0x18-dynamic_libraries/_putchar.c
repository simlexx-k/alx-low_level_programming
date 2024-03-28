#!/bin/bash
#include "main.h"
#include <unistd.h>
/*
 * _putchar.c - Description of the file
 *
 * Description will be here
 */

int _putchar(char c)
{
    return write(1, &c, 1);
}

