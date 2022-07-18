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
	listint_t *node = head;


	while (node)
	{
		sum += node->n;
		node = node->next;
	}
	return (sum);
}
