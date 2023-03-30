#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_lists - function that prints all the elements of a list.
 * @h: constant list .
 *
 * Return: no. of nodes.
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	if (h == NULL)
	{
		printf("[0] (nil)");
		return (count);
	}

	const list_t *next = h;

	while (next != NULL)
	{
		printf("[%d] %s\n", next->len, next->str);
		next = next->next;
		count++;
	}
	return (count);
}

