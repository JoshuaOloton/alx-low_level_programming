#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * factorial - returns the length of a string
 * @n: given number
 * Return: factorial
**/
int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1 || n == 0)
		return (1);
	return (n * factorial(n - 1));
}
