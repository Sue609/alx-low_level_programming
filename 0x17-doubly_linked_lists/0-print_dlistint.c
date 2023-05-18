#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - function that prints all the elements of a slistint_t list.
 * @h: This is the head of the node.
 *
 * Return: elements to be printed.
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr = h;
	size_t numberOfNodes = 0;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		numberOfNodes += 1;
		ptr = ptr->next;
	}

	return (numberOfNodes);
}
