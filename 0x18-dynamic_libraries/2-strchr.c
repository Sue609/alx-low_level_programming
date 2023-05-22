#include "main.h"

/**
 * _strchr - used to find the first occurence of a character
 * in a string.
 * @s: pointer to a null-terminated string.
 * @c: character to search for.
 * Return: always 0.
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
