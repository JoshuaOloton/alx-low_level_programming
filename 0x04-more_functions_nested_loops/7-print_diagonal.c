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

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			_putchar(' ');
			if (i == j)
			{
				_putchar('\\');
				break;
			}
		}
		_putchar('\n');
	}
}
