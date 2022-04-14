#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"

/**
 * main - prints result of operation
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	char *s;
	int a, b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (get_op_func(argv[2]) == NULL || argv[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	if ((!strcmp(argv[2], "/") || !strcmp(argv[2], "%")) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	s = argv[2];

	printf("%d\n", get_op_func(s)(a, b));
	return (0);
}
