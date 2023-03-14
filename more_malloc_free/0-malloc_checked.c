#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_ checked - function pointer
 * @b: parameters function
 * return: pointer
 */

void *malloc_checked(unsigned int b)
{
    void *p;

    p = malloc(b);

    if (p == NULL)
        exit(98);

    return (p);
}
