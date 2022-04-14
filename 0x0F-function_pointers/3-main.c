#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - check the code for ALX School students.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *s;
	int a, b;
	int (*func)(int, int);

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (strcmp(s, "+") && strcmp(s, "-") && strcmp(s, "*") && strcmp(s, "/") && strcmp(s, "%"))
	{
		printf("Error\n");
		exit(99);
	}
	if ((!strcmp(s, "/") || !strcmp(s, "%")) && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	func = get_op_func(s);
	printf("%d\n", func(a, b));
	return (0);
}
