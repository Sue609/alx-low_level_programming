#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - function creates an array.
 * @size: an integer array.
 * @c: initialized element.
 *
 * Return: arr or NULL.
 */

char *create_array(unsigned int size, char c)
{
	char *arr = NULL;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	arr = (char *) malloc(size * sizeof(char));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
