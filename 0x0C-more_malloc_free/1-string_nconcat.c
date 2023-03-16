#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - concantinates two strings.
 * @s1: first string.
 * @s2: second string.
 * @n: number of bytes.
 * Return: s1 or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t s1_len, s2_len, result_len;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	s1_len = strlen(s1);
	s2_len = strlen(s2);
	if (n >= s2_len)
	{
		n = s2_len;
	}
	result_len = s1_len + n + 1;
	result = malloc(result_len * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	strcpy(result, s1);
	strncat(result, s2, n);
	result[result_len - 1] = '\0';
	return (result);
}
