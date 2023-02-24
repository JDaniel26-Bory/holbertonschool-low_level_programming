#include "main.h"

/**
 * _isdigit - Write a function that checks for a digit (0 through 9).
 *
 * @c: - check between 0 until 9.
 *
 * Return: 0;
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
else
{
return (0);
}
_putchar('\n');
}
