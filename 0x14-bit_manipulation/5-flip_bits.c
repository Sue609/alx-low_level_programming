#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - function that returns number of bits to flip to get from
 * one number to another.
 * @n: the binary to flip.
 * @m: The other number to flip.
 *
 * Return: an integer number of bits to flip.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bit;
	unsigned long int count = 0;
	int i;

	bit = n ^ m;

	for (i = 0; i < 64; i++)
	{
		count += bit & 1;
		bit = bit >> 1;
	}
	return (count);
}
