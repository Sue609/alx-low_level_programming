
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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
