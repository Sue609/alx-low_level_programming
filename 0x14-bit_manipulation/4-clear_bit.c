#include "main.h"

/**
 * clear_bit - function that sets the value of a bit 0 at given index.
 * @n: pointer to the unsigned long int.
 * @index: of the bit you want to see starting from 0.
 *
 * Return: 1 or -1.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	int bit;

	if (index > 64)
		return (-1);

	bit = 1 << index;

	*n &= ~bit;

	return (1);
}



