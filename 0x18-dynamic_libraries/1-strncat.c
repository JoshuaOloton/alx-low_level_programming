#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strncat - concatenates two strings
 * @dest: destination
 * @src: source
 * @n: input value
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
