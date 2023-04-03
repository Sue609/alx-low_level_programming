#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - function that frees a listint_t list
 * @head: pointer to the first element of the linked list.
 *
 * Return: nothing.
 */

void free_listint(listint_t *head)
{
	listint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
