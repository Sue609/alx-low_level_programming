#include "variadic_functions.h"
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
/**
 * print_all - function that prints anything.
 * @char: a constant character.
 * @format: list of types of arguments passed to the function
 * Return: 0
 */
void print_all(const char * const format, ...)
{
	va_list pa;
	char c, *s;
	int num = 0, i = 0;
	float f;

	va_start(pa, format);
	while (format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(pa, int);
				printf("%c", c);
				break;
			case 'i':
				i = va_arg(pa, int);
				printf("%d", num);
				break;
			case 'f':
				f = va_arg(pa, double);
				printf("%f", f);
				break;
			case 's':
				s = va_arg(pa, char*);
				if (s == NULL)
					printf("(nil)");
				else
					printf("%s", s);
				break;
		}
		if (format[i] != '\0' &&
			(format[i] == 'c' || format[i] == 'i' ||
			 format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(pa);
}
