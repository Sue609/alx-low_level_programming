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
       	const listint_t *current;
        size_t count;

        if (head == NULL)
                exit(98);

        current = head;
        count = 0;

        while (current != NULL)
        {
                printf("[%p] %d\n", (void *) current, current->n);
                count++;

                if (current <= current->next)
                {
                        printf("-> [%p] %d\n", (void *) current->next, current->next->n);
                        break;
                }
                current = current->next;
        }
        return (count);
}
