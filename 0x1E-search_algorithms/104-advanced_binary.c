#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * advanced_binary - function that returns the index of the first value in the
 * array if it appears more than once in the array.
 * @array: pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for in the array.
 *
 * Return: The index or -1
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);
	return (advanced_binary_recursive(array, 0, size - 1, value));
}


/**
 * advanced_binary_recursive - function that performs advanced binary
 * search using recurssion.
 * @array: The pointer to the first element of the array.
 * @left: The first value of the array.
 * @right: The last value of the array.
 * @value: The value to be searched for.
 *
 * Return: -1 or index of the value element.
 */

int advanced_binary_recursive(int *array, int left, int right, int value)
{
	int mid;

	if (left > right)
		return (-1);

	printf("Searching in array: ");

	for (mid = left; mid < right; mid++)
		printf("%d, ", array[mid]);

	printf("%d\n", array[mid]);

	mid = left + (right - left) / 2;

	if (array[mid] == value && (mid == left || array[mid - 1] != value))
		return (mid);
	if (array[mid] >= value)
		return (advanced_binary_recursive(array, left, mid, value));
	return (advanced_binary_recursive(array, mid + 1, right, value));
}
