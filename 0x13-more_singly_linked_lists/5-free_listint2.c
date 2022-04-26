#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 - define function
 * @head: describe argument
 */
void free_listint2(listint_t **head)
{
	listint_t *new, *current;

	current = *head;
	while (current)
	{
		new = current;
		current = current->next;
		free(new);
	}
	*head = NULL;
}
