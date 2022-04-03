#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * _strspn - function that fills memory with a constant byte
 * @s: string
 * @accept: contains bytes that may or may not compose parts of the string
 * Return: the number of bytes that compose the length
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	unsigned int n;

	n = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
			if (accept[j + 1] == '\0')
			{
				return (n);
			}
		}
	}
	return (n);
}
