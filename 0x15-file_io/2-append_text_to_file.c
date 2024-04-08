#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: NULL terminated string to add at the end of the file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
    FILE *file;
    int success;

    if (filename == NULL)
        return (-1);

    file = fopen(filename, "a");
    if (file == NULL)
        return (-1);

    if (text_content != NULL)
    {
        success = fprintf(file, "%s", text_content);
        if (success < 0)
        {
            fclose(file);
            return (-1);
        }
    }

    fclose(file);
    return (1);
}

