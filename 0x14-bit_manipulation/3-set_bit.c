#include "main.h"

/**
 * set_bit - function that sets a bit to one at a given index
 * @n: the pointer to indicate the given integer
 * @index: an index to iterate through the long integer
 *
 * Return: -1 if a fail occurs or 1 if it it works correcty
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int masking = 1UL << index;

	if (index == sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n |= masking;

	return (1);
}
