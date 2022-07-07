#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints number
 * @separator: string to be printed
 * @n: numbner pf integers
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	va_list args;

	va_start(args, n);

	for (j = 0; j < n;)
	{
		if (!separator)
			printf("%d", va_arg(args, int));
		else if (separator && j == 0)
			printf("%d", va_arg(args, int));
		else
			printf("%s%d", separator, va_arg(args, int));
	}

	va_end(args);

	printf("\n");
}
