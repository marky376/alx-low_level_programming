#include "main.h"

/**
 * flip_bits - function that determines how many numbers
 * are required to be flipped to form another binary number
 * @n: the long integer to be used as case 1
 * @m: the long integer to be used as case 2
 *
 * Return: the number of bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_prom = n ^ m;
	unsigned int treck = 0;

	while (xor_prom > 0)
	{
		treck += xor_prom & 1;
		xor_prom >>= 1;
	}

	return (treck);
}
