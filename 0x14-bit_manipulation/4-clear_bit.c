#include "main.h"

/**
 * clear_bit - sets a given bit to 0 at a given index
 * @n: the pointer to the long integer
 * @index: the index to iterate through the long integer
 *
 * Return: -1 if it fails or 1 if it works well
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int masking = 1UL << index;

	if (index == sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	*n &= ~masking;

	return (1);
}
