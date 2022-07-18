#include "lists.h"

/**
 * listint_len - returns number of elements in a linked list
 * @h: pointer to linked list to traverse
 *
 * Return: number of nodes
*/


size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}
