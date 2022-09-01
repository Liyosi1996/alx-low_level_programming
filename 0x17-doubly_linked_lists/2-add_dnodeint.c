#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - add a new node of linked list
 * @head: double pointer
 * @n: value to add to the new node
 * Return: pointer to the new node
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	*head = new;
	if (new->next !=NULL)
		(new->next)->prev = new;
	return (new);
}
