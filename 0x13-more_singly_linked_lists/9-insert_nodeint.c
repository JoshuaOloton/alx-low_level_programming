#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: head of the list
 * @index: place to insert node
 * @n: value of the inserted node
 * Return: pointer to head of list
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *after, *before, *new;

	before = after = *head;
	if (head == NULL)
	{
		if (idx == 0)
		{
			(*head)->n = n;
			(*head)->next = NULL;
			return (*head);
		}
		else
		{
			return (NULL);
		}
	}
	for (i = 1; i < idx; i++)
	{
		before = before->next;
		if (before == NULL)
			return (NULL);
		after = before;
	}
	after = before->next;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	before->next = new;
	new->next = after;
	return (new);
}
