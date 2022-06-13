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
	int len;
	int i = 0;

	for (len = 0; src[len] != '\0'; len++)
	{
	}
	while (src[i] != '0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
