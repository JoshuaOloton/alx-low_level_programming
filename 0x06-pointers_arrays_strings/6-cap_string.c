#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * cap_string - capitalizes all words of a string
 * @s: input value
 *
 * Return: string
 */
char *cap_string(char *s)
{
	int i;

	if (s[0] >= 97 && s[0] <= 122)
		s[0] -= 32;
	for (i = 0; s[i] != '\0' ; i++)
	{
		switch (s[i])
		{
		case ',':
		case ';':
		case '.':
		case '!':
		case '?':
		case '"':
		case '(':
		case ')':
		case '{':
		case '}':
		case ' ':
		case '\t':
		case '\n':
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
			break;
		}
	}
	return (s);
}
