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
	int n, ld;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	ld = n % 10;	/* ld stands for last digit */
	printf("The last digit of %d is %d", n, ld);

	if (ld > 5)
		printf(" and is greater than 5\n");
	else if (ld == 0)
		printf(" and is 0\n");
	else if (ld < 6)
		printf(" and is less than 6 and not 0\n");


	return (0);
}

