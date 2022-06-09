#include "lists.h"

/**
 * dlistint_len - returns the number of elements in
 * a double linked list
 *
 * @h: head of the list
 * Return: the number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *curr = h;
	int nodes;

	nodes = 0;
	while (curr)
	{
		nodes++;
		if (curr->next)
			curr = curr->next;
		else
			break;
	}
	return (nodes);
}
