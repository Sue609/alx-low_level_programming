#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * add_node_end - function that adds a new node at the end of the list.
 * @head: a pointer to a pointer to the head of the list_t list
 * @str: the string to be added to the new node
 *
 * Return: the address of the new element, or NULL if it failed.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *ptr, *last;

	if (!head || !str)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(list_t));
	if (!ptr)
	{
		return (NULL);
	}

	ptr->str = strdup(str);

	if (!ptr->str)
	{
		return (NULL);
	}

	ptr->len = strlen(str);
	ptr->next = NULL;

	if (!*head)
	{
		*head = ptr;
		return (ptr);
	}
	last = *head;
	while (last->next)
		last = last->next;

	last->next = ptr;
	return (ptr);
}
