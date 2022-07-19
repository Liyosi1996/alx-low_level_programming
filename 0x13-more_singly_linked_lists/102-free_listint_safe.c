#include "lists.h"
#include <stdio.h>

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node
 * Return: number of elements
*/

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int diff;
	listint_t *node;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}

	*h = NULL;

	return (len);
}

