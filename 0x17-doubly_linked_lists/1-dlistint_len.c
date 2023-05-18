#include "lists.h"

/**
 * dlistint_len - function that returns number of elements in alinked list.
 * @h: Head of the linked list.
 *
 * Return: number of elements.
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t numberOfElements = 0;
	const dlistint_t *ptr = h;

	while (ptr != NULL)
	{
		numberOfElements++;
		ptr = ptr->next;
	}

	return (numberOfElements);
}
