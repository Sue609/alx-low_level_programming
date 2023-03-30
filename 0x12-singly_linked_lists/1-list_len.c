#include "lists.h"
#include <stddef.h>

/**
 * list_len - function that returns number of elements in a linked list_t list.
 * @h: pointer to list h.
 *
 * Return: integer.
 */

size_t list_len(const list_t *h)
{
	int count = 0;
	const list_t *str = NULL;

	str = h;
	while (str != NULL)
	{
		count++;
		str = str->next;
	}
	return (count);
}
