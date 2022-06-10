#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Description: prints numbers 1 - 100 w/
 * Fizz for multiples of 3, Buzz for multiples of 5
 * FizzBuzz for multiples of both
 * Return: 0
*/

int main(void)

{

	int i;

	for (i = 1; i <= 100; i++)
	{

		if (i % 3 == 0 && i % 5 != 0)
		{
			printf(" Fizz");

		} else if (i % 5 == 0 && i % 3 != 0)
		{
			printf("Buzz");

		} else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");

		} else if (i == 1)
		{
			printf("%d", i);

		} else
		{
			printf("%d", i);

		}
	}
	printf("\n");
	return (0);
}
