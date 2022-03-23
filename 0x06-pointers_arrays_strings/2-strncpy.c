#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strncpy - copy two strings
 * @dest: destination
 * @src: source
 * @n: input value
 * Return: char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int len, i;

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	if (n >= len)
	{
		dest = src;
		return (dest);
	}

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
