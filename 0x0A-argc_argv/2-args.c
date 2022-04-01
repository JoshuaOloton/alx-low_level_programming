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
	int count;

	for (count = 0; count < argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}

