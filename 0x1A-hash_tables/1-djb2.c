#include "hash_tables.h"

/**
 * hash_djb2 - This is the hash function that implements the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The computed hash value.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
