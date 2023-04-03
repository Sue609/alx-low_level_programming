#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - add a new node at the end of the list.
 * @head: pointer to the beginning of the node.
 * @n: element to be added at the end.
 *
 * Return: new element or NULL.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *new, *end;

new = malloc(sizeof(listint_t));

if (new == NULL)
{
	return (NULL);
}

new->n = n;
new->next = NULL;

if (*head == NULL)
{
	*head = new;
	return (new);
}

end = *head;
while (end->next != NULL)
{
	end = end->next;
}
end->next = new;
return (new);
}
