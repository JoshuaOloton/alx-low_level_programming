#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * binary - computes square root recursively doing binary search
 * @start: lower bound
 * @end: upper bound
 * @n: given number
 * Return: -1 if not found sqrroot, else sqrroot
 **/
int binary(int start, int end, int n)
{
	int mid, sqr;

	while (start <= end)
	{
		mid = (start + end) / 2;
		sqr = mid * mid;
		if (sqr == n)
			return (mid);
		if (sqr > n)
			return (binary(start, mid - 1, n));
		if (sqr < n)
			return (binary(mid + 1, end, n));
	}
	return (-1);
}
/**
 * _sqrt_recursion - finds the natural square root of a number
 * @n: given number
 * Return: square root of n or -1
 **/
int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	if (n < 0)
		return (-1);
	return (binary(0, n, n));
}
