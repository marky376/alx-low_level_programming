/**
 * _abs - gets the integer's absolute value
 * @n: number
 *
 * Description:
 * The _abs function takes an integer as a parameter and returns its absolute value.
 * If the number is negative, it returns the negation of the number.
 * If the number is positive or zero, it returns the number itself.
 *
 * Return: The absolute value of the given integer.
 */
int _abs(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}
