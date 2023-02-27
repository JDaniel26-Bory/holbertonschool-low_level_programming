#include "main.h"

/**
 * swap_int - name of function
 *
 * @a: - parameters of function
 * @b: - parameters of function
 *
 * Return: 0;
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
