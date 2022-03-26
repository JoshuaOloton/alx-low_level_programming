#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */
void print_number(int n)
{
	int m, copy, size;

	size = 1;

	if (n < 0)
	{
		_putchar(45);
		m = n * -1;
	}
	else
	{
		m = n;
	}
	copy = m;

	while (copy > 9)
	{
		copy /= 10;
		size *= 10;
	}

	while (size >= 1)
	{
		_putchar(((m / size) % 10) + 48);
		size /= 10;
	}
}

