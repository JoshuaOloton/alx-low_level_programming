#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at
 * a given position
 *
 * @h: head of the list
 * @idx: index of the new node
 * @n: value of the new node
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_h *new, *curr;
	int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || (*h) == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		(*h) = new;
	}
	for (i = 0; i < idx - 1; i++)
	{
		curr = curr->next;
		
	}
	new->next = curr->next;
	new->prev = curr;
	curr->next = new;
	return (new);
}
