#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints anything
 * @format: list of types of arguments
*/

void print_all(const char * const format, ...)
{
	int j = 0;
	char *ptr, *sep = "";
	va_list args;

	va_start(args, format);

	if (format)
	{
		while (format[j])
		{
			switch (format[j])
			{
				case 'c':
					printf("%s%c", sep, va_arg(args, int));
					break;
				case 'j':
					printf("%s%d", sep, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(args, double));
					break;
				case 's':
					ptr = va_arg(args, char *);
					if (!ptr)
						ptr = "(nil)";
					printf("%s%s", sep, ptr);
					break;
				default:
					j++;
					continue;
			}
			sep = ", ";
			j++;
		}
	}
	printf("\n");
	va_end(args);
}
