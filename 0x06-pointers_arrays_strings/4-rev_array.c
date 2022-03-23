#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 */
void reverse_array(int *a, int n)
{
	int x, i, l;

	l = n - 1;
	for (i = 0; i < n / 2; i++)
	{
		x = a[i];
		a[i] = a[l - i];
		a[l - i] = x;
	}
}
