#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * count_words - counts number of words in a string.
 * @str: string to count words.
 *
 * Return: no.of words in string.
 */
int count_words(char *str)
{
	int count = 0;
	int in_word = 0;

	while (*str)
	{
		if (isspace(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			count++;
			in_word = 1;
		}
		str++;
	}
	return (count);
}
/**
 * strtow - splits a string into words.
 * @str: string to split.
 *
 * Return: pointer to an array of strings, or NULL on failure.
 */
char **strtow(char *str)
{
	char **words = NULL;
	int i, j, k, n;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	n = count_words(str);
	words = malloc((n + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	i = 0;
	while (*str && i < n)
	{
		while (isspace(*str))
			str++;
		j = 0;
		while (str[j] && !isspace(str[j]))
			j++;
		if (j > 0)
		{
			words[i] = malloc((j + 1) * sizeof(char));
			if (words[i] == NULL)
			{
				for (k = 0; k < i; k++)
				{
					free(words[k]);
					free(words);
				}
				return (NULL);
			}
			strncpy(words[i], str, j);
			words[i][j] = '\0';
			i++;
			str += j;
		}
	}
	words[i] = NULL;
	return (words);
}
