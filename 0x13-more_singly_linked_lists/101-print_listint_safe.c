#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe - prints a linked list
 * @head: pointer to list to print
 *
 * Return: number of nodes
*/

size_t print_listint_safe(const listint_t *head)
{
	size_t list = 0;
	long int dif;

	while (head)
	{
		dif = head - head->next;
		list++;
		printf("[%p] %d\n", (void *)head, head->n);

		if (dif > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (list);
}
