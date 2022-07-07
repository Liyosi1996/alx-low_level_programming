#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of arguments
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int j;
	int sum = 0;
	va_list args;

	va_start(args, n);

	for (j = 0; j < n; j++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}
