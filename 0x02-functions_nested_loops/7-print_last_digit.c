#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_last_digit - Prints the last digit
* of a number.
*
* @n: input number as an integer.
*
* Return: last digit.
*/
int print_last_digit(int n)
{
	if (n > 0)
	{
		putchar(n%10+'0');
		return (n%10);
	}
	else
	{
		putchar((n*-1)%10+'0');
		return ((n*-1)%10);
	}
}
