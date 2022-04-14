#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - sum all arguements
 * @n: number of arguements
 * Return: 0 if n is 0 else return sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);
	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ap, int);
	}
	va_end(ap);
	return (sum);
}
