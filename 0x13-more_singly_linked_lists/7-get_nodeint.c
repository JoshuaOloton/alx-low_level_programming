#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_nodeint_at_index - a function that returns the nth node of a linked list
 * @head: head of the list
 * @index: which node to stop at
 * Return: pointer to the nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	current = head;
	for (i = 1; i <= index; i++)
		if (current->next)
			current = current->next;
		else
			return (NULL);
	return (current);
}
