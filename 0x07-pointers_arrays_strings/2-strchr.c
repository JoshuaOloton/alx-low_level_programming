#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * *_strchr - function that fills memory with a constant byte
 * @s: string to search
 * @c: character to find
 * Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
