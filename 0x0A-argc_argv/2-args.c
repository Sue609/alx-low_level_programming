
#include <stdio.h>
#include "main.h"

/**
 * main - prints arguements.
 * @argc: no. of arguements.
 * @argv: pointer to an array.
 * Return: 0
 */

int main(int argc, char *argv[])
{
int x;
{
for (x = 0; x < argc; x++);
printf("%s\n", argv[x]);
}
return (0);
}
