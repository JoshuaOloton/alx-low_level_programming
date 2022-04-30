#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * reverse_listint - define function
 * @head: describe argument
 * Return: what does it return?
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	temp = temp2 = NULL;
	while (*head)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}
	*head = temp;
	return (*head);
}
