#include "main.h"
/**
 * flip_bits - Calculate the number of bit to flip to get from one number to
 * another.
 * @n: first number
 * @m: second number.
 *
 * Return: number of bits necessary to change n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
unsigned int count = 0;
unsigned long int number;
number = n ^ m;
while (number > 0)
{
number = number & ( number - 1);
count++;
}
return (count);
}
