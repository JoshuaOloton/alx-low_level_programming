#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
* _isdigit - function that check if it's a digit
* @c: takes in a character/digit
* Return: 1 if digit and 0 if anything else
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
