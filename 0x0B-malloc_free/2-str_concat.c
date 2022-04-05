#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to new space in memory or null
 **/
char *str_concat(char *s1, char *s2)
{
	char *s;
	int l1, l2, i, j;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (l1 = 0; s1[l1] != '\0'; l1++)
	{
	}
	for (l2 = 0; s2[l2] != '\0'; l2++)
	{
	}
	s = malloc(sizeof(*s1) * (l1 + l2) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < l2; j++)
	{
		s[i] = s2[j];
		i++;
	}
	return (s);
}
