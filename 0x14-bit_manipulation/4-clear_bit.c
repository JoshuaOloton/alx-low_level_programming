#include "main.h"
#include <stddef.h>

/**
 * _pow - returns the power to a base
 * @base: base
 * @power: power
 * Return: result
 */
unsigned long int _pow(int base, int power)
{
        int i;
	unsigned long int result;

	result = 1;	
        for (i = 0; i < power; i++)
                result *= base;
        return (result);
}

/**
 * clear_bit - sets bit at index to 0
 * @n: pointer to number
 * @index: index to change
 * Return: 1 on success, -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index >= 32)
		return (-1);
	a = _pow(2, 32) -1 - (1 << index);
	*n = *n & a;
	return (1);
}
