#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int to_integer(char *s);
/**
 * main - check the code
 * @argc: count of the arguments
 * @argv: array of pointers to the string arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = to_integer(argv[1]);
	b = to_integer(argv[2]);
	printf("%d\n", a * b);
	return (0);
}

/**
 * to_integer - convert to integer
 * @s: string
 * Return: int
 */
int to_integer(char *s)
{
	int len, i, a, size;

	for (len = 0; s[len] != 0; len++)
	{
	}
	size = pow(10, len - 1);
	a = 0;
	for (i = 0; i < len; i++)
	{
		a += ((s[i] - 48) * size);
		size /= 10;
	}
	return (a);
}

