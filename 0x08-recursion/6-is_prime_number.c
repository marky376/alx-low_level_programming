/**
 * is_prime_number - Checks if a number is a prime number
 * @n: The integer to check
 * 
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (is_prime_helper(n, 2));
}

/**
 * is_prime_helper - Helper function to check if a number is prime
 * @n: The integer to check
 * @divisor: The current divisor to test
 * 
 * Return: 1 if n is a prime number, 0 otherwise.
 */
int is_prime_helper(int n, int divisor)
{
	if (divisor == n)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (is_prime_helper(n, divisor + 1));
}
