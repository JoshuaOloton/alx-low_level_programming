#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *_strcpy - update value.
 *@dest: value to be evaluate.
 *@src: value to be evaluate.
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int len, i;

	for (len = 0; src[len] != 0; len++)
	{
	}

	for (i = 0; i <= len; i++)
	{
		*(dest + i) = src[i];
		if (src[i] == '\0')
			break;
	}
	return (dest);
}
