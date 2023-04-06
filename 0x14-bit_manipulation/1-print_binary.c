#include "main.h"
#include <stdlib.h>

/**
 * print_binary - function that prints the binary representation of a number.
 * @n: decimal number to be changed to binary.
 *
 * Return: nothing.
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (mask > 0)
	{
		if ((n & mask) == mask)
			 _putchar('1');
		else
			_putchar('0');

		mask >>= 1;
	}
}
