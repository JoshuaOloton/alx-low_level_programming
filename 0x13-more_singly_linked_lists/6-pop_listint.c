#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * pop_listint - pops off the head of the list and returns its contents
 * @head: head of the list
 * Return: contents of head
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	n = (*head)->n;
	temp  = *head;
	*head = (*head)->next;
	free(temp);
	return (n);
}
