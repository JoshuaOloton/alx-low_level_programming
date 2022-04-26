#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint - define function
 * @head: describe argument
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
}
