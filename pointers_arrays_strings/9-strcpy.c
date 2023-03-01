#include "main.h"
#include <stdio.h>

/**
 * _strcpy - Write a function that copies the string pointed
 * @dest: Return value: the pointer
 * @src:  function parameters
 * Return: dest;
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i])
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
return (dest);
}
