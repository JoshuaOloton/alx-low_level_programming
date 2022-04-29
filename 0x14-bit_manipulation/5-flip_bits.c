#include "main.h"
#include <stddef.h>

/**
 * flip_bits - returns the number of bits you would need to flip
 * to get from one number to another
 * @n: base number
 * @m: number to transform to
 * Return: the number of bit transformations needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int p;
	int i = 0;

	p = n ^ m;
	while (p)
	{
		if (p & 1)
			i++;
		p >>= 1;
	}
	return (i);
}
