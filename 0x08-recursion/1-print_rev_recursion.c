#include "main.h"

/**
 * _print_rev_recursion - it takes a single arguement.
 * @s: input.
 * @char *: a pointer to a character.
 * Return: 0 success.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
