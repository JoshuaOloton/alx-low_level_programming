#include "lists.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_t **head)
{
	listp_t *current, *temp;

	if (head)
	{
		current = *head;
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

size_t free_listint_safe(listint_t **h)
{
	size_t n = 0;
	listp_t *ptr, *new, *add;
	listint_t *current;

	ptr = NULL;
	while (*h)
	{
		new = malloc(sizeof(listp_t));
		if (new == NULL)
			exit(98);
		new->p = (void *)*h;
		new->next = ptr;
		ptr = new;
		add = ptr;
		while (add->next)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&ptr);
				return (n);
			}
		}

		current = *h;
		*h = (*h)->next;
		free(current);
		n++;
	}

	*h = NULL;
	free_listp2(&ptr);
	return (n);
}
