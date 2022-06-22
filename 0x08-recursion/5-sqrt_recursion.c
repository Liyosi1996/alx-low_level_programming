#include <stdio.h>
#include "main.h"

int sqrt_recursive(int n, int j);

/**
 * _sqrt_recursion - returns sqrt of a number
 * @n: number
 * Return: 0
*/

int _sqrt_recursion(n)
{
	if (n < 0)
		return (-1);
	return (sqrt_recursive(n, 0));
}

/**
 * sqrt_recursive - recurses to find  natural sqr root
 * @n: number to calculate sqrt
 * @j: iterator
 * Return: 0
*/

int sqrt_recursive(int n, int j)
{
	if (j * j > n)
		return (-1);
	if (j * j == n)
		return (j);
	else
		return (sqrt_recursive(n, j + 1));
}
