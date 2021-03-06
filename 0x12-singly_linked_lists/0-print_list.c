#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all elements of list_t
 * @h: list_t list
 * Return: nodes in h
*/

size_t print_list(const list_t *h)
{
	size_t node = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;

		node++;
	}

	return (node);
}
