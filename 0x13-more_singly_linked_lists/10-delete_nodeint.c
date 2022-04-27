#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: head of the list
 * @index: emplacement of the node to delet
 * Return: pointr to head of list
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *before, *after;

	if ((*head) == NULL)
		return (-1);
	before = *head;
	after = before->next;
	if (index == 0)
	{
		free(before);
		*head = after;
		return (1);
	}
	for (i = 1; i < index; i++)
	{
		before = before->next;
		if (before == NULL)
			return (-1);
	}
	after = before->next;
	before->next = after->next;
	return (1);
}
