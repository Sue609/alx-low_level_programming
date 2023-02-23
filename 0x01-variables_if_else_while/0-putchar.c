#include <stdio.h>

/**
 * main - prints alphabets in lower and uppercase.
 * Return: 0 (Success)
 */
int main(void)
{
	/* start your code */

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);
}
