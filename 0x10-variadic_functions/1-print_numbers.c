#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 *  print_numbers - prints out numbers given
 * @separator: string to be seperated between numbers
 * @n: number of arguements
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);
	if (n > 0)
	{
		printf("%d", va_arg(ap, int));
		for (i = 1; i < n; i++)
		{
			if (separator == NULL)
				printf(" ");
			else
				printf("%s ", separator);
			printf("%d", va_arg(ap, int));
		}
		va_end(ap);
		printf("\n");
	}
}
