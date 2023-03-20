#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a dog´s basic info
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner of dog
 * Description - description large
 */

struct dog
{
char *name;
float age;
char *owner;
};

/**
 * dog_t - Typedef dog dog_t;
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
