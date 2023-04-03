#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node.
 * @head: pointer to the first node.
 * @index: index of node.
 *
 * Return: NULL or index.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL && i < index)
	{
		current = current->next;
		i++;
	}

	if (i != index || current == NULL)
	{
		return (NULL);
	}
	return (current);
}
