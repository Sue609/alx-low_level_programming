#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - function that searches for a value in a sorted array of integers
 using binary search.
 * @array: Pointer to first element of the array.
 * @size: The number of elements in an array.
 * @value: The value to search for.

 * Return: -1 or index of array.
 */

int binary_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = size - 1;
    int i;

    if (array == NULL)
        return (-1);

    while (left <= right)
    {
        int mid = (left + right) / 2;

        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if  (i < right)
                printf(", ");
            else
                printf("\n");
        }
        if (array[mid] == value)
            return (mid);

        if (array[mid] < value)
            left = mid + 1;

        else
            right = mid - 1;

    }
    return (-1);
}