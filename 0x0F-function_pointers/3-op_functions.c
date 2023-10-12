#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - the addition of two given numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: the sum of two given numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - gets the difference of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: the difference of two given numbers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_div - returns the result of the division of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: the result of the division of two given numbers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}

	return (a / b);
}

/**
 * op_mod - returns the remainder of the division of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: the remainder of the division of two given numbers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(99);
	}
	return (a % b);
}

/**
 * op_mul - return the multiplication of two numbers
 * @a: first integer
 * @b: second integer
 *
 * Return: the multiplication of two given numbers
 */

int op_mul(int a, int b)
{
	return (a * b);
}
