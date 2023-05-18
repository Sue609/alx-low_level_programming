#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - function that frees a list.
 * @head: The first node.
 *
 * Return: nothing.
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
