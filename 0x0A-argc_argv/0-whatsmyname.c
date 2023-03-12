#include <stdio.h>
#include "main.h"

/**
 * name - prints name of arguements
 *
 * @argc: no. of arguements.
 * @argv: array of arguement.
 * Return: always 0.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
printf("%s\n", *argv);
return (0);
}

