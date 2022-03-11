#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int ch1;

	for (ch1 = 'a'; ch1 <= 'z'; ch1++)
	{
		if (ch1 == 'e' || ch1 == 'q')
			continue;
		else
			putchar(ch1);
	}
	putchar(10);

	return (0);
}
