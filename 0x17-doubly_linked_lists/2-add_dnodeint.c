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
	if ((*head) == NULL)
	{
		temp->prev = NULL;
		temp->next = NULL;
		temp->n = n;
		(*head) = temp;
		return (*head);
	}
	temp->next = (*head);
	temp->prev = NULL;
	temp->n = n;
	(*head) = temp;
	return (*head);
}
