#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strcat - concatenates two strings
 * @dest: destination
 * @src: source
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int len, i, j;

	for (len = 0; dest[len] != '\0'; len++)
	{
	}

	for (i = len, j = 0; src[j] != '\0'; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
