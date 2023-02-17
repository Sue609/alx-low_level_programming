#include <stdio.h>

/**
 * main - Entry
 * Return: 0 (Success)
 */

/* print all numbers of base 16 in lowercase */

int main(void)
{
	int n;
	char ch;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
