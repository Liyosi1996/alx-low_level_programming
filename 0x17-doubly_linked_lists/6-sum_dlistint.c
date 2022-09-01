#include "lists.h"

/**
 * sum_dlistint - sum all data of a linked list
 * @head: pointer to the beginnning of linked list
 * Return: 0
*/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
