#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_skip - function that searches for a value in a sorted skip list
 * of integers.
 * @list: pointer to the head of the skip list to search in.
 * @value: The value to search for.
 * The list will be in ascending order.
 * Return: If value not present in list or head is NULL return NULL
 * or the index of the value.
 */


skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node;
	skiplist_t *jump;

	if (list == NULL)
		return (NULL);

	for (node = jump = list; jump->next != NULL && jump->n < value;)
	{
		node = jump;
		if (jump->express != NULL)
		{
			jump = jump->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jump->index, jump->n);
		}
		else
		{
			while (jump->next != NULL)
				jump = jump->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			node->index, jump->index);

	for (; node->index < jump->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
