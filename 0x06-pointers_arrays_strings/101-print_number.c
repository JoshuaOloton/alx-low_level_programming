#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_number - prints # using _putchar function
* @n: the integer to print
*/
void print_number(int n)
{
	int ones, size, copy;

	size = 1;
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	ones = n % 10;
	copy = n / 10;
	n /= 10;
	while (copy >= 10)
	{
		copy /= 10;
		size *= 10;
	}
	if (copy > 0)
	{
		while (size >= 1)
		{
			_putchar((n / size) + '0');
			n %= size;
			size /= 10;
		}
	}
	_putchar(ones + '0');
}
