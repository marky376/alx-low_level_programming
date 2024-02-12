/**
 * binary_to_uint - function to convert a binary string to an unsigned int
 * @b: pointer to the binary string
 *
 * This function takes a binary string and converts it to an unsigned int.
 * The binary string must only contain '0' and '1' characters.
 * If the input string is NULL or contains characters other than '0' and '1',
 * the function returns 0.
 * The function uses a loop to iterate through the binary string and calculates
 * the decimal value by multiplying the previous value by 2 and adding the
 * current bit value.
 *
 * Return: the converted unsigned int value
 */
#include "main.h"

/**
 * binary_to_uint - function to convert a binary to unsigned int
 * @b: element that iterates all through the binary
 *
 * Return: always the result of unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int prom = 0;
	int i;

	if (b == NULL)
	{
		return (0);
	}

	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		prom = prom * 2 + (b[i] - '0');
	}

	return (prom);
}
