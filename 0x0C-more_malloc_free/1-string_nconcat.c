#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: limit of s2
 * Return: pointer to new space in memory or null
 **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i, j, l1, l2;

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
	if (n >= l2)
		n = l2;
	s = malloc(sizeof(*s1) * (l1 + n) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < l1; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		s[i] = s2[j];
		i++;
	}
	s[i] = '\0';
	return (s);
}
