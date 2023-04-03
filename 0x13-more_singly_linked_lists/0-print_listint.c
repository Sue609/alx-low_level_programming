#include "lists.h"
#include <stdio.h>

/**
 * print_listint - function that prints all the elements of a listint_t list.
 * @h: The pointer to the first element of the node.
 *
 * Return: no of nodes.
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *current = h;
	size_t cnt = 0;

	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		cnt++;
	}
	return (cnt);
}
