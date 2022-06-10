#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 *
 * @head: head of the list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	if (head)
	{
		while (head->next != NULL)
		{
			free(head);
			head = head->next;
		}
		free(head);
	}
}
