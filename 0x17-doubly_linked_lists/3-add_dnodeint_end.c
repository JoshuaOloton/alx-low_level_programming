#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *curr;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	curr = (*head);
	while (curr && curr->next)
	{
		curr = curr->next;
	}
	if (curr == NULL)
	{
		(*head) = new;
		return (new);
	}
	curr->next = new;
	new->prev = NULL;
	return (new);
}
