#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - returns a pointer to a newly allocated space with copy of arg
 * @str: string to copy
 * Return: pointer to array or null
 **/
char *_strdup(char *str)
{
	char *s;
	int len, i;

	for (len = 0; str[len] != '\0'; len++)
	{
	}
	s = malloc(sizeof(*str) * len);
	if (s == NULL || str == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
