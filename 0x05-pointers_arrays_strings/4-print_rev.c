#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: value taken from main
 */
void print_rev(char *s)
{
	int len = 0;

	for (len = 0; s[len] != 0; len++)
	{
	}
	for (len = len - 1; len >= 0; len--)
	{
		_putchar(s[len]);
	}
	 _putchar('\n');
}
