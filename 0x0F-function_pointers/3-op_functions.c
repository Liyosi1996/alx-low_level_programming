#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum of two integers
 * @a: integer one
 * @b: integer two
 * Return: sum
*/

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtraction of two integers
 * @a: integer one
 * @b: integer two
 * Return: difference
*/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: integer one
 * @b: integer two
 * Return: product
*/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two integers
 * @a: integer one
 * @b: integer two
 * Return: division
*/

int op_div(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a / b);
}

/**
 * op_mod - modulo of two integers
 * @a: integer one
 * @b: integer two
 * Return: modulo
*/

int op_mod(int a, int b)
{
	if (b == 0)
		return (-1);
	return (a % b);
}
