#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * followed by a new line
 */

void more_numbers(void)
{
int i, j;
for (i = 0; i <= 10; i++)
{
for (j = 0; j <= 14; j++)
{
if (j >= 10)
{
break;
}
_putchar(j);
}
_putchar(i);
}
_putchar('\n');
}
