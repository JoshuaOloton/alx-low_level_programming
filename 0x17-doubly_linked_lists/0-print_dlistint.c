#include "lists.h"
#include <stddef.h>
#include <stdio.h>

/**
 * print_dlistint - prints all the elements of a
 * dlistint_t list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	int nodes;

	nodes = 0;
	while (curr)
	{
		printf("%d\n", curr->n);
		nodes++;
		if (curr->next)
			curr = curr->next;
		else
			break;
	}
	return (nodes);
}
