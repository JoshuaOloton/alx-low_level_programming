#include "lists.h"
#include <stdlib.h>

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - returns the
 * nth node of a dlistint_t linked list
 *
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *new;

	if (head == NULL)
		return (NULL);
	else if (index == 0)
		return (head);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
