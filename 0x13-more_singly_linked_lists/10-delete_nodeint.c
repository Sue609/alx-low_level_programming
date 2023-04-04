#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes node at an index.
 * @head: pointer to the first node.
 * @index: index of the node that should be deleted.
 *
 * Return: 1 for success. -1 for failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *crnt, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		crnt = *head;
		*head = (*head)->next;
		free(crnt);
		return (1);
	}

	prev = NULL;
	crnt = *head;
	for (i = 0; i < index && crnt != NULL; i++)
	{
		prev = crnt;
		crnt = crnt->next;
	}

	if (crnt == NULL)
		return (-1);

	prev->next = crnt->next;
	free(crnt);

	return (1);
}
