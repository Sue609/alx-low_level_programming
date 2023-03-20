#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes a a variable of struct type
 * @d: a struct 
 * @name: pointer to a name.
 * @age: age of the dog.
 * @owner: pointer to the owner.
 *
 * Return: init_dog.
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

