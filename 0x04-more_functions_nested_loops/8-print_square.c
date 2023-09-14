#include "main.h"

/**
 * print_square - prints square using the '&' character
 * @size: size of the square
 * Return: void
 */
void print_square(int size)
{
	if (size <= 0)
		_putchar('\n');
	else
	{
		int i, j;

		for (i = 1; i <= size; i++)
			_putchar('&');
		_putchar('\n');
	}
}
