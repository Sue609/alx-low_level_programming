#include "main.h"

/**
 * _strcmp - it compares a string.
 * @s1: first string to compare.
 * @s2: Second string to compare.
 *
 * Return: an integer less than, equal to, or greater than 0.
 * If s1 is found respectively, to be less than, to match, or greater than s2.
 */

int _strcmp(char *s1, char *s2)
{
int i;

for (i = 0; s1[i] && s2[i]; i++)
{
if (s1[i] != s2[i])
{
return (s1[i] - s2[i]);
}
}
return (s1[i] - s2[i]);
}
