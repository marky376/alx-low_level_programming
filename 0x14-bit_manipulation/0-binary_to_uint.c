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
