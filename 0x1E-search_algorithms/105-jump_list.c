#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * jump_list - function that searches for a value using jump search.
 * @list: pointer to head of list.
 * @size: No. of nodes in the list.
 * @value: The value to search for.
 *
 * Return: -1 or the index.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step = 0;
	size_t step_size = sqrt(size);
	listint_t *current = NULL;
	listint_t *jump = NULL;

	if (list == NULL || size == 0)
		return (NULL);

	for (current = jump = list; jump->index + 1 < size && jump->n < value;)
	{
		current = jump;
		for (step += step_size; jump->index < step; jump = jump->next)
		{
			if (jump->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jump->index, jump->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
	current->index, jump->index);

	for (; current->index < jump->index && current->n < value; current = current->next)
	{
		printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);
	}
	printf("Value checked at index [%ld] = [%d]\n", current->index, current->n);

	return (current->n == value ? current : NULL);
}
