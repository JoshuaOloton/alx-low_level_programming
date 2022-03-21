#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *puts_half - prints half of a string, followed by a new line.
 *@str: value to evaluate.
 */
void puts_half(char *str)
{
	int len, i, l;

	for (len = 0; str[len] != 0; len++)
	{
	}

	if (len % 2 == 0)
		l = len / 2;
	else
		l = len / 2 + 1;
	for (i = l; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
