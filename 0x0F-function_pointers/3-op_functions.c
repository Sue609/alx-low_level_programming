#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - adds two integers.
 * @a: first number.
 * @b: second number.
 *
 * Return: int.
 */

int op_add(int a, int b)
{
	int sum;

	sum = a + b;
	return (sum);
}

/**
 * op_sub - adds two integers.
 * @a: first number.
 * @b: second number.
 *
 * Return: int.
 */
int op_sub(int a, int b)
{
	int sub;

	sub = a - b;
	return sub;
}

/**
 * op_mul - adds two integers.
 * @a: first number.
 * @b: second number.
 *
 * Return: int.
 */
int op_mul(int a, int b)
{
	int mul;

	mul = a * b;
	return (mul);
}

/**
 * op_div - adds two integers.
 * @a: first number.
 * @b: second number.
 *
 * Return: int.
 */
int op_div(int a, int b)
{
	int div;

	div = a / b;
	return (div);
}

/**
 * op_mod - adds two integers.
 * @a: first number.
 * @b: second number.
 *
 * Return: int.
 */
int op_mod(int a, int b)
{
	int mod;

	mod = a % b;
	return (mod);
}
