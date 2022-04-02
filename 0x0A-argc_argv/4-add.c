#include <stdio.h>
#include <stdlib.h>

int num_check(char *s);
/**
 * main - check the code
 * @argc: count of the arguments
 * @argv: array of pointers to the string arguments
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, a;

	if (argc < 2)
	{
		printf("%d", 0);
		putchar('\n');
		return (0);
	}
	a = 0;
	for (i = 1; i < argc; i++)
	{
		if (num_check(argv[i]) == 0)
		{
			printf("Error\n");
			return (1);
		}
		a += atoi(argv[i]);
	}
	printf("%d\n", a);
	return (0);
}

/**
 * num_check - check for digits
 * @s: string
 * Return: 1 or 0
 */
int num_check(char *s)
{
	int len, i;

	for (len = 0; s[len] != 0; len++)
	{
	}
	for (i = 0; i < len; i++)
	{
		if (s[i] < 48 || s[i] > 57)
		{
			return (0);
		}
	}
	return (1);
}
