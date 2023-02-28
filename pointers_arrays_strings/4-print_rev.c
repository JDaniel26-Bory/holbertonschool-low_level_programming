#include "main.h"
#include <stdio.h>


/**
 * print_rev - Write a function that prints a string
 * @s: function parameters
 */

void print_rev(char *s)
{
int i = 0;
while (i[s] != '\0')
{
i++;
}
for (i -= 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
