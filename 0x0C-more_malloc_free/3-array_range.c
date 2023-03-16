#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * array_range - This is the created array.
 * @min: range of value.
 * @max: range of value.
 *
 * Return: a pointer.
 */

int *array_range(int min, int max)
{
	int *array;
	int n, size;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;

	array = malloc(size * sizeof(int));
	if (array == NULL)
	{
		return (NULL);
	}

	for (n = 0; n < size; n++)
	{
		array[n] = min++;
	}

	return (array);
}

