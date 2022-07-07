#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - prints string
 * @separator: separator
 * @n: number of arguments
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int j;
	char *ptr;
	va_list args;

	va_start(args, n);

	for (j = 0; j < n; j++)
	{
		ptr = va_arg(args, char *);
		if (ptr != NULL)
			printf("%s", ptr);
		else
			printf("%p", ptr);
		if (separator != NULL && j < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(args);
}
