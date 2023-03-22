#include "function_pointers.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_name - prints name.
 * @name: name to be printed.
 * @f: name of the pointer
 *
 * Return: nothing.
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	return;

	(*f)(name);
}

