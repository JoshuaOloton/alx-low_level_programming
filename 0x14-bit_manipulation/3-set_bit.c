#include "main.h"
#include <stddef.h>

/**
 * set_bit - sets bit at index to 1
 * @n: pointer to number
 * @index: index to change
 * Return: 1 on success, -1 on failure
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index >= 32)
		return (-1);
	a = 1 << index;
	*n = *n | a;
	return (1);
}
