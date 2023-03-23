#include "variadic_functions.h"
#include <stdarg.h>

/**
  * sum_them_all - ...
  * @n: ...
  *
  * Return: ...
  */

int sum_them_all(const unsigned int n, ...)
{
unsigned int i = 0;
va_list p;
int suma = 0;

if (n != 0)
{
va_start(p, n);
while (i < n)
{
suma += va_arg(p, int);
i++;
}
va_end(p);
return (suma);
}
return (0);
}
