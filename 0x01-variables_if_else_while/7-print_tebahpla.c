#include <stdio.h>

/**
 * main -Entry
 * Return: 0 (Success)
 */

/* print lowercase alphabets in reverse */

int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

