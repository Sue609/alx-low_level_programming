#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: pointer to first node.
 *
 * Return: no. of nodes to list.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	while (head != NULL)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		count++;
		if (head <= head->next)
			{
				printf("-> [%p] %d\n", (void *)head->next, head->next->n);
				break;
			}
		head = head->next;
	}

	if (head == NULL)
		return (count);

	exit(98);
}
