#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 *rev_string - function that reverses a string..
 *@s: value to evaluate.
 */
void rev_string(char *s)
{
	int i, l, len;
	char n;

	for (len = 0; s[len] != 0; len++)
	{
	}

	l =  len - 1;
	for (i = 0; i < len / 2; i++)
	{
		n = s[i];
		s[i] = s[l];
		s[l] = n;
		l--;
	}
}
