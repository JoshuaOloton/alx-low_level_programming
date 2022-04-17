#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "3-functions.h"
#include "variadic_functions.h"

/**
 * print_c - print char
 * @lists: argument of list
 * @sep: separator
 * Return: none
 */
void print_c(va_list lists, char *sep)
{
	printf("%s%c", sep, va_arg(lists, int));
}

/**
 * print_i - print int
 * @lists: argument of list
 * @sep: separator
 * Return: none
 */
void print_i(va_list lists, char *sep)
{
	printf("%s%d", sep, va_arg(lists, int));
}

/**
 * print_f - print floats
 * @lists: argument of list
 * @sep: separator
 * Return: none
 */
void print_f(va_list lists, char *sep)
{
	printf("%s%f", sep, va_arg(lists, double));
}

/**
 * print_s - print string
 * @lists: argument of list
 * @sep: separator
 * Return: none
 */
void print_s(va_list lists, char *sep)
{
	char *s;

	s = va_arg(lists, char*);
	if (s == NULL)
		s = "(nil)";
	printf("%s%s", sep, s);
}

/**
 * print_all - prints out all stuff
 * @format: format is list of types of arguements
 */
void print_all(const char * const format, ...)
{
	va_list lists;
	int i, j;
	char *sep;

	op_t ops[] = {
		{'c', print_c},
		{'i', print_i},
		{'f', print_f},
		{'s', print_s}
	};
	va_start(lists, format);
	sep = "";
	i = 0;
	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == ops[j].op)
			{
				ops[j].f(lists, sep);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	va_end(lists);
	printf("\n");
}
