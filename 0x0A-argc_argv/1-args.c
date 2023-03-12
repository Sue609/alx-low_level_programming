#include <stdio.h>
#include "main.h"

/**
 * main - prints arguements.
 * @argc: no. of arguements.
 * @argv: array of arguements.
 * Return: 0
 */

int main(int argc, char *argv[])
{
(void) argv;/*Ignore argv*/

printf("%d\n", argc - 1);
return (0);
}
