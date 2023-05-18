#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - function that adds a new node ata the beginninf of the list.
 * @head: double pointer of the head node which is usually NULL.
 * @n: data to be abbed to the linked list.
 *
 * Return: new node.
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
	{
		return (NULL);
	}

	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;

	if (*head != NULL)
	{
		(*head)->prev = temp;
	}

	*head = temp;
	return (temp);
}
