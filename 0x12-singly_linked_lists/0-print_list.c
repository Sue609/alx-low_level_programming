#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * print_list - function that prints all the elements of a list.
 * @h: constant list .
 *
 * Return: no. of nodes.
 */

size_t print_list(const list_t *h)
{
	int count = 0;
	const list_t *next = h;

	while (next != NULL)
	{
		if (next->str == NULL)
		{
			printf("[%d] %s\n", 0, "(nil)");
		}
		else
		{
		printf("[%d] %s\n", next->len, next->str);
		}


		next = next->next;
		count++;
	}
	return (count);
}

