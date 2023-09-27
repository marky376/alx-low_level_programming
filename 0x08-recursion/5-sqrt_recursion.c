#include "main.h"

/**
 * _sqrt_recursion - Returns the natural square root of a number using
 * recursion
 * @n: The number to find the square root of a number
 * Return: The natuarl square root of n, or -1 if it does not have a natural
 * square root
 */

int _sqrt_helper(int n, int guess);


int _sqrt_recursion(int n)
{
	return (_sqrt_helper(n, 1));
}

/**
 * _sqrt_helper - Helper function to find the square root using recursion
 * @n: The number to find the square root of a number
 * @guess: The current guess for the square root
 * Return: The natural square root of n, or -1 if it doesn't
 * have a natural square
 */

int _sqrt_helper(int n, int guess)
{
	if (n < 0)
		return (-1);
	if (guess * guess == n)
		return (guess);
	if (guess * guess > n)
		return (-1);

	return (_sqrt_helper(n, guess + 1));
}
