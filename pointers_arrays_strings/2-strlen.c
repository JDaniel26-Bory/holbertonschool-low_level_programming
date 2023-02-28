#include "main.h"

/**
 * _strlen - returns the length of a string
 *
 * @s: function name
 *
 * Return: 0;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
	len++;
	return (len);
}
