#include "main.h"

/**
 * _memcpy - function to copy a block of memory from one location
 * to another.
 * @dest: destination where date should be stored.
 * @src: source where date is to be copied.
 * @n: number of bytes to be copied.
 *
 * Return: pointer to thed destination buffer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int r = 0;
	int i = n;

	for (; r < i; r++)
	{
		dest[r] = src[r];
		n--;
	}
	return (dest);
}
