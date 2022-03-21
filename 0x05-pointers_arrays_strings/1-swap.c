#include <stdio.h>
#include <stdlib.h>
#include "main.h"


/**
*swap_int - swaps the values of two integers.
*@a: a pointer
*@b: b pointer.
*/
void swap_int(int *a, int *b)
{
	int ptr = *a;
	*a = *b;
	*b = ptr;
}
