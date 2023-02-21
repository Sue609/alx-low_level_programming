include "main.h"

/**
 * main - check the code.
 *
 * Return: Always 0.
 */


void print_alphabet_x10(void)

/* function that prints 10 times the alphabet, in lowercase */

{
int x = 0;
char ch;

while (x <= 10)
{
while (ch <= 'a')
{
_putchar(ch);
ch++;
}
_putchar('\n');
x++;
}
}
