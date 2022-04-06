#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * *argstostr - concatenates all arguements to the program
 * @ac: arguement count
 * @av: pointer to arguements
 * Return: pointer to new space in memory or null
 **/
char *argstostr(int ac, char **av)
{
	char *s;
	int i, j, k, len, size;

	size = 0;
	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (len = 0; av[i][len] != '\0'; len++)
		{
		}
		size += len;
	}
	s = malloc(sizeof(char) * (size + ac));
	if (s == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			s[k] = av[i][j];
			k++;
			j++;
		}
		s[k] = '\n';
		k++;
	}
	return (s);
}
