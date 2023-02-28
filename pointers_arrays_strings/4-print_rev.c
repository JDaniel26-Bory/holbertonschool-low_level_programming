#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - Write a function that prints a string
 * @s: function parameters
 */

void print_rev(char *s)
{
int i, size;
size = strlen(s);
for (i = size - 1; i >= 0; i--)
{
putchar(s[i]);
}
}
