#include <stdio.h>
#include "main.h"

/**
 * main - prints a name
 * @argc: number of argument
 * @argv: array of argument
 * Return: 0
*/
int main(int argc __attribute__((unused)), char **argv)
{
	printf("%s\n", *argv);
	return (0);
}
