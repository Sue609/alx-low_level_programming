#include "main.h"

/**
 * _strpbrk - this function searches a string for the first
 * occurence of any character.
 * @s: returns pointer to the byte.
 * @accept: if no byte is found.
 *
 * Return: Always 0.
 */

char *_strpbrk(char *s, char *accept)
{
int k;

while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}

return ('\0');
}
