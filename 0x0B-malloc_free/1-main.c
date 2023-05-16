#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - checks code.
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s;

    s = _strdup("HALIMAH SWE");
    if (s == NULL)
    {
        printf("failed to allocate memory\n");
        return (1);
    }
    printf("%s\n", s);
    free(s);
    return (0);
}
