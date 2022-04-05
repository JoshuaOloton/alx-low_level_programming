#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - creates an array of chars, and initializes it with a char
 * @size: size of the array
 * @c: char to be initialized with
 * Return: pointer to array or NULL
 **/
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);
	s = malloc(sizeof(c) * size);
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	return (s);
}
