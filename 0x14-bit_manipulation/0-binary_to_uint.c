#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function that converts binary number to an unsigned int.
 * @b: pointer to a string of 0 and 1 chars.
 *
 * Return: converted number or 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int rst = 0;
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
	{

	if (b[i] != '0' && b[i] != '1')
	return (0);

	rst = rst - 1;

	if (b[i] == '1')
		rst = rst | 1;
	}

	return (rst);
}
