#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * sum_listint - sums all elements of a list
 * @head: pointer to the head of the list
 * Return: sum of all elements
 */
int sum_listint(listint_t *head)
{
	int n;
	listint_t *current;

	if (head == NULL)
		return (0);
	n = 0;
	current = head;
	while (current)
	{
		n += current->n;
		current = current->next;
	}
	return (n);
}
