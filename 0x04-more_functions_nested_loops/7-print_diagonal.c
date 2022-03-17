#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
* print_diagonal - draws a diagonal line
* @n: takes in an integer
*/
void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
		_putchar('\n');
	for (i = 0; i < n; i++)
	{
		for (j = 0; j < n; j++)
		{
			if (i == j)
			{
				_putchar('\\');
				_putchar('\n');
				break;
			}
			else
			{
				_putchar(' ');
                        }
		}
	}
}
