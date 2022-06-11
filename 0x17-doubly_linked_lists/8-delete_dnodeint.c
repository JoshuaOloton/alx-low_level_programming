#include "lists.h"
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - deletes the node at index of a
 * dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *bf, *curr, *af;

	if ((*head) == NULL)
		return (-1);
	bf = (*head);
	if (index == 0 && (*head)->next)
	{
		(*head) = (*head)->next;
		(*head)->prev = NULL;
		return (1);
	}
	if (index == 0 && (*head)->next == NULL)
	{
		(*head) = NULL;
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		bf = bf->next;
		if (bf == NULL || bf->next == NULL)
			return (-1);
	}
	curr = bf->next;
	af = curr->next;
	bf->next = af;
	af->prev = bf;
	return (1);
}
