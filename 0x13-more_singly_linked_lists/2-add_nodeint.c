#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning
 * @head: pointer to first node
 * @n: data to insert in the new node
 *
 * Return: pointer to new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (add);
}
