#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
* times_table - that prints the 9 times table
*
* Return: no return
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		_putchar(0 + '0');
		for (j = 0; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');
			if ((i * j) < 10)
			{
				_putchar((i * j) + '0');

			}
			else
			{
				_putchar(((i * j) / 10) + '0');
				_putchar(((i * j) % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
