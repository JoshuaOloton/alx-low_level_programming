#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
* print_triangle - prints a triangle
* @size: takes in a integer for size of triangle
*/
void print_triangle(int size)
{
	int i, j;
	int hash = size;

	if (size <= 0)
		_putchar('\n');
	for (i = 1; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
		{
			if (j >= hash)
				_putchar('#');
			else
				_putchar(' ');
		}
		hash--;
		_putchar('\n');
	}
}
