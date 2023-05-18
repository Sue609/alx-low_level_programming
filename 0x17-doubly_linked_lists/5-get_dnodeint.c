#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node.
 * @head: the beginning of the node.
 * @index: is the index of the node starting from 0.
 *
 * Return: NULL if nth node does not exist.
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr = head;
	unsigned int node = 0;

	while (ptr != NULL)
	{
		if (node == index)
			return (ptr);
		ptr = ptr->next;
		node++;
	}

	return (NULL);
}
