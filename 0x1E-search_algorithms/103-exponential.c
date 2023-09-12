#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"


/**
 * exponential_search - searches for a value in a sorted algorithm.
 * @array: A pointer to the first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 *
 * Return: -1 if value is 0 or array is NULL;
 * otherwise return the index where the value is located.
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t right;

	if (array == NULL || value == 0)
		return (-1);

	if (array[0] != value)
	{
		for (i = 1; i < size && array[i] <= value; i = i * 2)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
	}

	right = i < size ? i : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (new_binary_search(array, i / 2, right, value));
}


/**
 * new_binary_search - binary search within a given range of an array.
 * @array: Pointer to the first element of the array.
 * @left: The starting index of the range.
 * @right: The ending index of the range.
 * @value: The value to search for.
 *
 * Return: The index where 'value' is located, or -1 if not found.
 */

int new_binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
