#include "main.h"
#include <stdio.h>

/**
 * _strcat - Write a function that concatenates two strings.
 * Description: This function appends the src string to the dest string
 * @dest: function parameters
 * @src: function parameters
 * Return: Returns a pointer to the resulting string;
 */

char *_strcat(char *dest, char *src)
{
int i = 0, j;

while (dest[i] != '\0')
{
i++;
}
for (j = 0; src[j] != 0 ; j++)
{
dest[i] = src[j];
i++;
}
dest[i] = '\0';
return (dest);
}
