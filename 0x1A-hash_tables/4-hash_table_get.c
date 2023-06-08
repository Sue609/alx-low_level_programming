#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key.
 * @ht: The hash table that you want to look into.
 * @key: The key you are looking for.
 *
 * Return: associated element of Null if key is not found.
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
			return (node->value);
		
		node = node->next;
	}

	return (NULL);
}



int is_float(const char *str)
{
    char *endptr;
    strtod(str, &endptr);
    return *endptr == '\0';
}
