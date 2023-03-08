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
	if (*s == '\0')
	{
		_putchar('\0');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);

}
