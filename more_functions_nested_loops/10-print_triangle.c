#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle, followed b
 *
 * @size: functions parameters
 *
 * Return: 0;
 */

void print_triangle(int size)
{
	int i, j, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = size - i; j > 1; j--)
			{
				_putchar(32);
			}
			for (z = 0; z <= i; z++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
