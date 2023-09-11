#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers.
 * @array: pointer to the first element of the array.
 * @size: The number of elements in the array.
 * @value: The value to search for.

 * Return: first index where the value is located or -1 if array is NULL.
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i;

    if (array == NULL)
        return (-1);

    for (i = 0; i < size; i++)
    {
        if (array[i] == value)
        {
            printf("Value checked array[%lu] = [%d]\n", (unsigned long)i, array[i]);
            return (i);
        }
    }
    return (-1);
}