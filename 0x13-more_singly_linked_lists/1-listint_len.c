#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in listint_t list.
 * @h: a pointer to the first node.
 *
 * Return: no of elements.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		current = current->next;
		count++;
	}
	return (count);
}
