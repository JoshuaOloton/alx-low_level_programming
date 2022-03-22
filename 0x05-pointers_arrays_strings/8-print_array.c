#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *print_array - prints n elements of an array of integers,
 *followed by a new line.
 *@a: value to evaluate.
 *@n: value to evaluate.
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i == n - 1)
			break;
		printf(", ");
	}
	printf("\n");
}
