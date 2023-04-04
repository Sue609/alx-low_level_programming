#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t list.
 * @h: A pointer to the head of the listint_t list.
 *
 * Return: The size of the list that was free'd.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *tmp = NULL;

	while (*h != NULL)
	{
		len++;
		if (*h <= (*h)->next)
		{
			free(*h);
			*h = NULL;
			break;
		}
		tmp = (*h)->next;
		free(*h);
		*h = tmp;
	}
	return (len);
}
