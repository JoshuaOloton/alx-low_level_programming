#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* print_to_98 - prints all natural numbers
* from n to 98, followed by a new line
*
* @n: input number.
*
* Return: no return.
*/
void print_to_98(int n)
{
	int i;

	printf("%d", n);
	if (n < 98)
	{
		for (i = n + 1; i <= 98; i++)
		{
			printf(", ");
			printf("%d", i);
		}
	}
	else if (n > 98)
	{
		for (i = n - 1; i >= 98; i--)
		{
			printf(", ");
			printf("%d", i);
		}
	}
	printf("\n");
}
