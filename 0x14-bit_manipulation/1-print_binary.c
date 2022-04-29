#include "main.h"
#include <stddef.h>

/**
 * print_binary - print binary number
 * @n: int number
 * Return: none
 */
void print_binary(unsigned long int n)
{
	
	if (n >> 1)
	{
		print_binary(n >> 1);
		_putchar((n & 1) + '0');
	}
	}
	else
	{
		_putchar(0 + '0');
	}
}
