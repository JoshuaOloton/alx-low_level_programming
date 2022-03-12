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
	int i, j, k;
	int ch = 0;
	int l = 0;

	/* 00 00 = ij kl*/
	/* ij kl */
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			/* at start of j loop, set change variable ch to 1 */
			/* this ch=1 is used to set the l to j+1  */
			ch = 1;
			for (k = i; k < 10; k++)
			{
				l = 0;
				if (ch == 1)
				{
					/* set l to j+1  */
					l = j + 1;
					ch = 0;
				}
				/* if ch=0 ie in between j iteration, l starts iteration at 0 not j+1*/
				while (l < 10)
				{
					putchar(i + '0');
					putchar(j + '0');
					putchar(' ');
					putchar(k + '0');
					putchar(l + '0');
					if (i == 9 && j == 8 && k == 9 && l == 9)
					{
						break;
					}
					putchar(',');
					putchar(' ');
					l++;
					ch = 0;
				}
			}
		}
	}

	return (0);
}
