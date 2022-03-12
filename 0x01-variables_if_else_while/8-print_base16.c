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
	int ch;

	for (ch = 0; ch < 11; ch++)
	{
		putchar(ch % 10 + '0');
	}
	for (ch = 'a'; ch < 'g'; ch++)
	{
		putchar(ch);
	}
	putchar(10);

	return (0);
}
