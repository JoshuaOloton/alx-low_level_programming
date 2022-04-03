#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 * @argc: count of the arguments
 * @argv: array of pointers to the string arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int cent, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);
	if (cent < 0)
	{
		printf("%d\n", 0);
		return (0);
	}
	while (cent >= 25)
	{
		cent -= 25;
		coin++;
	}
	while (cent >= 10 && cent < 25)
	{
		cent -= 10;
		coin++;
	}
	while (cent >= 5 && cent < 10)
	{
		cent -= 5;
		coin++;
	}
	while (cent >= 2 && cent < 5)
	{
		cent -= 2;
		coin++;
	}
	if (cent == 1)
	{
		cent -= 1;
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}

