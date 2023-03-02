#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: input value
 * @src: input value
 *
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
int k;
int dest_len = 0;

while (dest[dest_len] != '\0')
{
	dest_len++;
}

k = 0;
while (src[k] != '\0')
{
	dest[dest_len + k] = src[k];
	k++;
}
dest[dest_len + k] = '\0';
return (dest);
}
