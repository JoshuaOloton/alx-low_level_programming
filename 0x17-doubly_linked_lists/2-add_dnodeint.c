#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning
 * of a dlistint_t list
 *
 * @head: head of the list
 * @n: value of the element
 * Return: the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp;

	temp = malloc(sizeof(dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->n = n;
	temp->prev = NULL;
	if ((*head) != NULL)
	{
		while ((*head)->prev)
			(*head) = (*head)->prev;
	}
	else
	{
		temp->next = NULL;
		(*head) = temp;
		return (temp);
	}
	temp->next = (*head);
	(*head) = temp;
	return (temp);
}
