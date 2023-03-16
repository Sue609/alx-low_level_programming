#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
#include <ctype.h>

int main(int argc, char *argv[])
{
	int num1, num2, mul1;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!isdigit(*argv[1]) || !isdigit(*argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	mul1 = num1 * num2;
	printf("%d\n", mul1);

	return (0);
}
