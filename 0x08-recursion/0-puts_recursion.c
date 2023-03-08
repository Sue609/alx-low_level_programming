#include "main.h"

/**
 * _puts_recursion - takes a single arguement.
 * @s: input
 * @char *s: a pointer to a character
 *
 * Return: 0 always success
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
	_puts_recursion(s + 1);
	_putchar(*s);
	}

}
