#include "main.h"

/**
 * get_endianness -  function that checks the endianness.
 * @void: does not take any perameters.
 *
 * Return: integer.
 */

int get_endianness(void)
{
	unsigned int number = 1;

	char *c = (char *) &number;

	return (*c == 1);
}
