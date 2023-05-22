#include "main.h"
/**
 * _memset - allows you to set a block of memory to a specific value
 *
 * @s: starting address of memory to be filled.
 * @b: the desired value.
 * @n: number of bytes to be changed.
 *
 * Return: changes array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);

}
