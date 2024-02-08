/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 *
 * Description:
 * This function takes an integer as input and prints it to the standard output.
 * If the integer is negative, it is printed with a negative sign.
 * The function uses recursion to print each digit of the number.
 * The digits are printed in reverse order.
 * The function assumes that the input integer is within the range of an unsigned int.
 */
#include "main.h"

/**
 * print_number - Prints an integer
 * @n: The integer to be printed
 */

void print_number(int n)
{
	unsigned int num;

	if (n < 0)
	{
		_putchar('-');
		num = -n;
	}
	else
	{
		num = n;
	}
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}

	_putchar((num % 10) + '0');
}
