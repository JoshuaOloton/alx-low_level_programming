#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - printsstrings followed by a new line
 * @separator: seperators
 * @n: number of arguements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	unsigned int i;
	char *s;

	va_start(strings, n);
	if (n > 0)
	{
		s = va_arg(strings, char *);
		if (s != NULL)
			printf("%s", s);
		else
			printf("(nil)");
		for (i = 1; i < n; i++)
		{
			if (separator != NULL)
				printf("%s", separator);
			s = va_arg(strings, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nil)");
		}
	}
	va_end(strings);
	printf("\n");
}
