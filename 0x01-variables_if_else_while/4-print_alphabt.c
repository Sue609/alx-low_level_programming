#include <stdio.h>

/* prints alphabet in lower case followed by new lin */

/*don't print q and p */

/* use putchar once */


/**
 * main - Start code
 * Return: 0 (Sucess)
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}

