#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * string_toupper - change all lowercase to uppercase
 * @s: pointer
 *
 * Return: n
 */
char *string_toupper(char *s)
{
	int i, len;

	for (len = 0; s[len] != '\0'; len++)
	{
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
