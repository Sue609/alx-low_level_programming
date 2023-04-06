#include "main.h"

/**
 * get_bit - function that returns value of a git at a certain index.
 * @n: the unsigned integer.
 * @index: the index of the bit.
 *
 * Return: return -1 or index.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index >= 64)
		return (-1);

	bit = (n >> index) & 1;

	return (bit);
}

