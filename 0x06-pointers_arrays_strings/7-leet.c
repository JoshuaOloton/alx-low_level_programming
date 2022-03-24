#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * leet - encode into 1337
 * @s: input value
 *
 * Return: n value
 */
char *leet(char *s)
{
	int i, j;
	char *lower = "aeotl";
	char *upper = "AEOTL";
	char *num = "43071";

	i = 0;
	while (s[i] != '\0')
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == upper[j] || s[i] == lower[j])
			{
				s[i] = num[j];
			}
		}
		i++;
	}
	return (s);
}
