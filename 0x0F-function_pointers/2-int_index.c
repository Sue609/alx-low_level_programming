#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - returns the index of the first element.
 * @array: contains elements of the array.
 * @size: no. of elements in the array.
 * @cmp: pointer to the function used to compare values.
 *
 * Return: 1 or -1 or 0.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL)
	{
		return (-1);
	}

	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
