#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - new name of the struct
 * @name: name of the dog
 * @age: age of the dog.
 * @owner: dog owner.
 *
 * Return: NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	char *name_copy, *owner_copy;
	int name_len, owner_len;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
	{
		return (NULL);
	}

	name_len = strlen(name);
	name_copy = malloc(name_len + 1);
	if (name_copy == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	owner_len = strlen(owner);
	owner_copy = malloc(owner_len + 1);

	if (owner_copy == NULL)
	{
		free(name_copy);
		free(my_dog);
		return (NULL);
	}
	strcpy(name_copy, name);
	strcpy(owner_copy, owner);
	my_dog->name = name_copy;
	my_dog->age = age;
	my_dog->owner = owner_copy;

	return (my_dog);
}


