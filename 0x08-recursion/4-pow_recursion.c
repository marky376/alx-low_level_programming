/**
 * _pow_recursion - Returns x raised to the power of y using recursion
 * @x: The base
 * @y: The exponent
 *
 * Description:
 * The _pow_recursion function calculates the value of x raised to the power of y
 * using recursion. It returns the result of x^y. If y is negative, the function
 * returns -1.
 *
 * Return: The result of x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
