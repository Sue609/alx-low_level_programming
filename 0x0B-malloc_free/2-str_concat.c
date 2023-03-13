#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - concantinates two strings s1 and s2
 * @s1: input.
 * @s2: contains contents.
 *
 * Return: NULL or s3
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	size_t len = 0;
	size_t len1 = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len = strlen(s1);
	len1 = strlen(s2);

	s3 = malloc((len + len1 + 1) * sizeof(char));

	if (s3 == NULL)
	{
		return (NULL);
	}
	strcpy(s3, s1);
	strcat(s3, s2);
	return (s3);
}
