#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value
 * using interpolation search algorithm.
 * @array: The pointer to the first element of the array.
 * @size: The number of elements in array.
 * @value: The value to search.
 * Return: -1 if value is not present or array is NULL.
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t pos;

	if (array == NULL || size == 0)
		return (-1);

	for (low = 0, high = size - 1; high >= low; )
	{
		pos = low + (((double)(high - low) / (array[high] - array[low])) *
			    (value - array[low]));
		if (pos >= size)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);
		if (array[pos] > value)
			high = pos - 1;
		else
			low = pos + 1;
	}
	return (-1);
}
