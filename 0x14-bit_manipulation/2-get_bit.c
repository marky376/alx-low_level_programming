#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the unsigned long integer to be used
 * @index: index to iterate all through the integer
 *
 * Return: the given value of a bit at a given index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int masking = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}


	return (n & masking ? 1 : 0);
}
