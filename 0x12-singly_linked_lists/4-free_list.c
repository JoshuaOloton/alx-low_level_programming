#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * free_list - frees a linked list
 * @head: the beginning of the list
 */

void free_list(list_t *head)
{
	list_t *new;

	while (head)
	{
		new = head->next;
		free(head->str);
		free(head);
		head = new;
	}
}
