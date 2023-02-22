#include <stdio.h>

/**
 * main - print  natural numbers less than 1024
 * and are multiples of 3 or 5.
 *
 * Return: 0
 */

int main(void)
{
int i, sum = 0;

for (i = 0; i < 1024; i++)
{
if ((i % 3) == 0 || (i % 5) == 0)
sum += i;
}

printf("%d\n", sum);

return (0);
}
