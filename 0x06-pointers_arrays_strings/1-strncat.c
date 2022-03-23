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
	int len, i, j;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}

	for (i = len, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
		if (j == n - 1)
		{
			dest[i + 1] = '\0';
			return (dest);
		}
	}
	dest[j + 1 + len] = '\0';
	return (dest);
}
