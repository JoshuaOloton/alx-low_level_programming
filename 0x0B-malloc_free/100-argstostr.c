#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
 * *argstostr - concatenates all arguements to the program
 * @ac: arguement count
 * @av: pointer to arguements
 * Return: pointer to new space in memory or null
 **/
char *argstostr(int ac, char **av)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
