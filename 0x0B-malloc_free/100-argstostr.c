#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concantinates all arguements.
 * @ac: accepts an integer.
 * @av: a pointer to another pointer.
 * Return: pointer or NULL
 */
char *argstostr(int ac, char **av)
{
	char *concat = NULL;
	int i, j;
	int len = 0;
	int pos = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		len++;
		}
	}
	len++;
	concat = malloc(len * sizeof(char));
	if (concat == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			concat[pos] = av[i][j];
			pos++;
		}
		concat[pos] = '\n';
		pos++;
	}
	concat[pos] = '\0';
	return (concat);
}
