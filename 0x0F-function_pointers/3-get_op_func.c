#include "3-calc.h"
#include <string.h>
#include <stddef.h>

/**
 * get_op_func - function that selects the correct function to operate
 * the operation asked by the user.
 * @s: operator passed as argument takes two integers
 *
 * Return: int.
 */

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
};

int i = 0;

while (ops[i].op != NULL && *(ops[i].op) != *s)
{
	i++;
}
return (ops[i].f);
}
