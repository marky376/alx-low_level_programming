/**
 * _sqrt_recursion - Returns the natural square root of a number using
 * recursion
 * @n: The number to find the square root of
 *
 * Return: The natural square root of n, or -1 if it does not have a natural
 * square root
 */
int _sqrt_recursion(int n);

/**
 * _sqrt_helper - Helper function to find the square root using recursion
 * @n: The number to find the square root of
 * @guess: The current guess for the square root
 *
 * Return: The natural square root of n, or -1 if it doesn't have a natural
 * square root
 */
int _sqrt_helper(int n, int guess);
