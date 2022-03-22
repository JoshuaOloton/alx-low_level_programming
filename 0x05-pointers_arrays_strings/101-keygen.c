#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates keygen.
 * Return: 0 Always.
 */
int main(void)
{
	int r, i;

	srand(time(NULL));

	for (i = 0; i < 20; i++)
	{
		r = rand() % 52;
		if (r >= 0 && r <= 25)
			r += 65;
		else
			r += 71;
		printf("%c", r);
	}
	printf("\n");
	return (0);
}
