#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
int div(int a, int b);
int mod(int a, int b);

/**
 * add - adds two numbers
 * @a: number 1
 * @b: number 2
 * Return: a + b
*/
int add(int a, int b)
{
	return (a + b);
}

/**
 * sub - function subtracts two numbers
 * @a: number 1
 * @b: number 2
 * Return: a - b
*/
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - function multiples two numbers
 * @a: number 1
 * @b: number 2
 * Return: a * b
*/
int mul(int a, int b)
{
	return (a * b);
}

/**
 * div - function that divides two numbers
 * @a: number 1
 * @b: number 2
 * Return: a / b
*/
int div(int a, int b)
{
	return (a / b);
}

/**
 * mod - function that calculates modulus two numbers
 * @a: number 1
 * @b: number 2
 * Return: a % b
*/
int mod(int a, int b)
{
	return (a % b);
}
