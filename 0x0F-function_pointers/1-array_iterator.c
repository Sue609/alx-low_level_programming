#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_iterator - function that executes a function.
 * @array: an array pointer
 * @size: size of the array
 * @action: name of the pointer
 *
 * Return: nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	return;

	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
