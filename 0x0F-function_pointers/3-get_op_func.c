#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * get_op_func - function pointer
 * @s: operator
 * Return: 0
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
	int j;

	j = 0;

	while (j < 10)
	{
		if (s[0] == ops->[j])
			break;
		j++;
	}
	return (ops[j / 2].f);
}
