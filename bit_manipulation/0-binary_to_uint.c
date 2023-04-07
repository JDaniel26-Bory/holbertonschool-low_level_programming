#include "main.h"

/**
 * binary_to_uint - covert from binary to integer.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: the number converted.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int i = 0;
if (b == NULL)
return (0);
for (; *b != '\0'; b++)
{
if (*b < '0' || *b > '1')
return (0);
i *= 2;
if (*b == '1')
i += 1;
}
return (i);
}
