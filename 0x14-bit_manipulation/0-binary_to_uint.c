#include "main.h"
#include <stddef.h>

/**
 * _pow - performs the power operation
 * @base: base number
 * @power: power
 * Return: base number raised to a power
 */
unsigned int _pow(int base, unsigned int power)
{
	unsigned int i, result;

	result = 1;
	for (i = 0; i < power; i++)
		result *= base;
	return (result);
}

/**
 * binary_to_uint - converts a string of 1's and 0's to a decimal number
 * @b: string to convert
 * Return: unsigned decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum;
	char digit;
	int len;

	if (b == NULL)
		return (0);
	sum = 0;
	for (len = 0; b[len]; len++)
		;
	len -= 1;
	for (i = 0; b[i]; i++)
	{
		digit = b[i];
		if (digit != '1' && digit != '0')
			return (0);
		if (digit == '1')
			sum += (_pow(2, len));
		len--;
	}
	return (sum);
}
