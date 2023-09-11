#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "search_algos.h"

/**
 * jump_search - fucntion that searches for a value in a sorted array
 using jump search algorithm.
 * @array: Pointer to first element of array.
 * @size: The no. of elelements in the array.
 * @value: The value to be searched.
 * Return: -1 or the index
*/

int jump_search(int *array, size_t size, int value)
{
    int step = sqrt(size);
    int prev = 0;
    int i;

    if (value == 0 || array == NULL)
        return (-1);
    printf("Value checked array[%d] = [%d]\n", prev, array[prev]);

    while (array[prev] < value)
    {
        prev = step;
        step += sqrt(size);

        if (prev >= (int)size)
            break;
        printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
    }
    printf("Value found between indexes [%d] and [%d]\n", prev - step, prev);

    for (i = prev -step; i <= prev && i < (int)size; i++)
    {
        printf("Value checked array[%d] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}

    