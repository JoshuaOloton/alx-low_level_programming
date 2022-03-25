#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * rot13 - encodes a string in rot13
 * @s: string to be encoded
 *
 * Return: the resulting string
 */
char *rot13(char *s)
{
	int i, j;
	char *def = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; def[j] != '\0'; j++)
		{
			if (s[i] == def[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
