#include "main.h"

/**
 * _strlen_recursion - takes a single arguement.
 * @s: input.
 * @char *: pointer to a character.
 *
 * Return: 0 success.
 */

int _strlen_recursion(char *s)
{
	int string = 0;

	if (*s)
	{
		string++;
		string += _strlen_recursion(s + 1);
	}
	return (string);

}
