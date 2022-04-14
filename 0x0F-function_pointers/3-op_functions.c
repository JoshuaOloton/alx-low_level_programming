#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds numbers
 * @a: first number
 * @b: second number
 *
 * Return: add
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts numbers
 * @a: first number
 * @b: second number
 *
 * Return: sub
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies numbers
 * @a: first number
 * @b: second number
 *
 * Return: mul
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides numbers
 * @a: first number
 * @b: second number
 *
 * Return: div
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulus of two numbers
 * @a: first number
 * @b: second number
 *
 * Return: mod
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
