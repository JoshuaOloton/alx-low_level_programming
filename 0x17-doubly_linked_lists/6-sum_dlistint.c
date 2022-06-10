#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n)
 * of a doubly linked list
 *
 * @head: head of the list
 * Return: sum of the data
 */
int sum_dlistint(dlistint_t *head)
{
	const dlistint_t *curr = head;
	int result;

	result = 0;
	while (curr)
	{
		result += curr->n;
		if (curr->next)
			curr = curr->next;
		else
			break;
	}
	return (result);
}
