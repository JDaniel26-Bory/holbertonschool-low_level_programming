#include "main.h"
#include <stdio.h>

/**
 * _strncat - Write a function that concatenates two strings.
 * @dest: function parameters
 * @src: function parameters
 * @n : function parameters
 * Description: Write a function that concatenates two strings.
 * Return: -  Return a pointer to the resulting string dest.
 */

char *_strncat(char *dest, char *src, int n)
{
int i = 0, j = 0;

while (dest[i++])
{
j++;
}
for (i = 0; src[i] && i < n; i++)
{
dest[j++] = src[i];
}
return (dest);
}
