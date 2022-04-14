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
	va_list numbers;
	unsigned int i;

	va_start(numbers, n);
	if (n > 0)
	{
		printf("%d", va_arg(numbers, int));
		for (i = 1; i < n; i++)
		{
			if (separator)
				printf("%s", separator);
			printf("%d", va_arg(numbers, int));
		}
	}
	va_end(numbers);
	printf("\n");
}
