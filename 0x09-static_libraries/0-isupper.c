#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/* more headers goes there */

/**
* _isupper - checks for uppercase character
* @c: Variable text
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
