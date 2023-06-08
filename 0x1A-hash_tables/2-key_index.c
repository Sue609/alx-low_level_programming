#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"
#include <ctype.h>

/**
 * key_index - function that gives you the index of a key.
 * @key: The key.
 * @size: The size of the array of the hash table.
 *
 * Return: The index at which the key/value should be stored
 * in the array of the hash table.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_value, index;

	if (key == NULL)
		return (0);

	if (isdigit(*key))
	{
		char str[20];
		sprintf(str, "%lu", atol((char *)key));
		hash_value = hash_djb2((unsigned char *)str);
	}

	else
	{
		hash_value = hash_djb2(key);
	}

	index = hash_value % size;

	return (index);
}
