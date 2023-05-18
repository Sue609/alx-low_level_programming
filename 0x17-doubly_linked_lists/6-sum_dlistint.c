#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all data(n) in a list.
 * @head: The beginning of the node.
 *
 * Return: sum.
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	dlistint_t *ptr = head;

	while (ptr != NULL)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}
