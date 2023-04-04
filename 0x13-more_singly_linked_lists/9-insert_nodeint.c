#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that inserts new node at given position.
 * @head: pointer to the first node.
 * @idx: index where new node should be placed.
 * @n: the index.
 *
 * Return: NULL or address of new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	unsigned int i;

	if (*head == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	current = *head;
	for (i = 0; i < idx - 1 && current != NULL; i++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (NULL);

	new->next = current->next;
	current->next = new;

	return (new);
}
