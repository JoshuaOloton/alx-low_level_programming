#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - printsstrings followed by a new line
 * @separator: seperators
 * @n: number of arguements
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (n > 0)
	{
		if (va_arg(ap, char*))
			printf("%s", va_arg(ap, char*));
		else
			printf("(nil)");
		for (i = 1; i < n; i++)
		{
			if (separator == NULL)
				printf(" ");
			else
				printf("%s ", separator);
			if (va_arg(ap, char*))
				printf("%s", va_arg(ap, char*));
			else
				printf("(nil)");
		}
		va_end(ap);
		printf("\n");
	}
}
