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
	int ch1, ch2;

	for (ch1 = 'a'; ch1 <= 'z'; ch1++)
	{
		putchar(ch1);
	}
	for (ch2 = 'A'; ch2 <= 'Z'; ch2++)
	{
		putchar(ch2);
	}
	putchar(10);

	return (0);
}
