/**
 * print_binary - Prints the binary representation of a number.
 * @n: The number to be converted to binary.
 *
 * Description: This function takes an unsigned long integer and prints its
 *              binary representation. It recursively divides the number by 2
 *              and prints the remainder until the number becomes 0.
 *              The binary representation is printed in reverse order.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
