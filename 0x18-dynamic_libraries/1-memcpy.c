#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * *_memcpy - function that fills memory with a constant byte
 * @dest: destination
 * @src: source
 * @n: no of bytes
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	unsigned int j;

	for (i = 0, j = 0; i < n; i++, j++)
	{
		dest[i] = src[j];
	}
	return (dest);
}
