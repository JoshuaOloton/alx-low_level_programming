#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _print_rev_recursion - prints a string, followed by a new line
 * @s: pointer to string
 * Return: nothing
**/
void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
