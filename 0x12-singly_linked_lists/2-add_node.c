#include <stdlib.h>
#include <string.h>
#include "lists.h"
#include <stddef.h>

/**
 * add_node - function that adds node at the beginning of the list_t.
 * @head: beginning of the node.
 * @str: what needs to be duplicated.
 *
 * Return: new element or NULL.
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *ptr;

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

	ptr->next = *head;

	*head = ptr;
	return (ptr);
}
