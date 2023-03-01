#include "main.h"
#include <stdio.h>

/**
 * puts_half - Write a function that prints half of a string, followed.
 * @str: function parameters
 */

void puts_half(char *str)
{
int k = 0;
while (str[k] != '\0')
{
k++;
}
if (!(k % 2))
{
k = k / 2;
}
else
{
k = ((k + 1) / 2);
}
while (*(str + k) != '\0')
{
putchar(*(str + k));
k++;
}
putchar('\n');
}
