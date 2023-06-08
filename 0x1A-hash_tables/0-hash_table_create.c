#include "hash_tables.h"
#include <stddef.h>
#include <stdlib.h>


/**
 * hash_table_create - Function that creates a hash table.
 * @size: This is the size of the array.
 *
 * Return: A pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned int i;

	hash_table_t *new_table = malloc(sizeof(hash_table_t));

	new_table->array = malloc(sizeof(hash_node_t *) * size);

	if (new_table == NULL)
	{
		return (NULL);
	}

	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);
}
