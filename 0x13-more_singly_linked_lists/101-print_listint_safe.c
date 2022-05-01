#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listp - frees a linked list
 * @head: head of a list.
 *
 * Return: void
 */
void free_listp(listp_t **head)
{
	listp_t *temp, *current;

	if (head)
	{
		current = *head;
		while (current)
		{
			temp = current;
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - prints a linked list.
 * @head: head of a list.
 *
 * Return: number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;
	listp_t *ptr, *new, *add;

	ptr = NULL;
	while (head)
	{
		new = malloc(sizeof(listp_t));

		if (!new)
			exit(98);

		new->p = (void *)head;
		new->next = ptr;
		ptr = new;

		add = ptr;

		while (add->next)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&ptr);
				return (n);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		n++;
	}

	free_listp(&ptr);
	return (n);
}
