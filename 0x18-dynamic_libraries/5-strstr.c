#include "main.h"

/**
 * _strstr - finds occurence of the substring.
 * @haystack: This is a string.
 * @needle: substring in the string haystack.
 *
 * Return: NULL
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}

		if (*p == '\0')
			return (haystack);
	}

	return (0);
}

