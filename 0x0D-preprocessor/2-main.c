#include <stdio.h>
#include <stdlib.h>

/**
 * main - print name of compilation file with new line \n
 *
 * Return: 0
 **/

int main(void)
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
