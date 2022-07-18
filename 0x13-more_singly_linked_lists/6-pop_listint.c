#include "lists.h"

/**
 * pop_listint - deletes the hrad node of alist
 * @head: pointer to first element in alist
 *
 * Return: head node data
*/

int pop_listint(listint_t **head)
{
	listint_t *node;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	node = (*head)->next;
	free(*head);
	*head = node;

	return (num);
}
