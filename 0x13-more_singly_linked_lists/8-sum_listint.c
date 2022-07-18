#include "lists.h"

/**
 * sum_listint - sums all the data in a linked list
 * @head: firsr node in the list
 *
 * Return: sum
*/

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		list = head->next;
	}
	return (sum);
}
