#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - function that adds a node at the end of the list.
 * @head: head os the node.
 * @n: data to be added to the node.
 * Return: the address of the new element or NULL if failed.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));
	dlistint_t *tp;

	if (temp == NULL)
		return (NULL);

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		temp->prev = NULL;
		*head = temp;
		return (temp);
	}

	tp = *head;
	while (tp->next != NULL)
	{
		tp = tp->next;
	}

	tp->next = temp;
	temp->prev = tp;

	return (temp);
}
