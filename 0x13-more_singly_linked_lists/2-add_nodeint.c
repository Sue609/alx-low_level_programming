#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - adds a new new node at the beginning.
 * @head: pointer to the first node.
 * @n: value of link.
 *
 * Return: address of new element or NULL.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->n = n;

	new->next = (*head);

	(*head) = new;

	return (new);
}
