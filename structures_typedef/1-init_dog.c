#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - Initializes a dog strcture
 * @d: dog structure
 * @name: the name of dog
 * @age: the age of dog
 * @owner: the owner dog
 *
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}
