#include "main.h"
#include <stdio.h>

/**
 * print_array - Write a function that prints n elements of an array
 * @a: pointer parameters
 * @n: is the number of elements of the array to be printe
 */

void print_array(int *a, int n)
{
int j;
for (j = 0; j < n; j++)
{
printf("%d", j[a]);
if (j != (n - 1))
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
}
