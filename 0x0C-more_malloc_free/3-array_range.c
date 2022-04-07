#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max.
 * @min: minimum int in array
 * @max: maximum int in array
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
	int i, size, *p;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	p = malloc(size * sizeof(int));
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = min;
		min++;
	}
	return (p);
}
