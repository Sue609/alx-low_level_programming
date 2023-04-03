#include "lists.h"
#include <stdlib.h>

/**
 * fre_listint2 - function that frees a listint_t list.
 * @head: pointer to the first node.
 *
 * Return: nothing.
 */

void free_listint2(listint_t **head)
{
	listint_t *current, *next;

	if (head == NULL)
	{
		return;
	}

	current = *head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}
