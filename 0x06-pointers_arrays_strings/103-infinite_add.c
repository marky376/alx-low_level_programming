#include "main.h"

/**
 * infinte_add - Adds two numbers requested as strings
 * @n1: The first number as a string
 * @n2: The second number as a string
 * @r: The buffer to store the result
 * @size_r: The size of the buffer
 *
 * Return: A pointer to the result
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum;
	int i, j, k;

	/*Calculate the length of the input strings*/
	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;

	if (size_r <= len1 || size_r <= len2 || size_r == 0)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = size_r -1;

	r[k] = '\0';

	while (i >= 0 || j >= 0)
	{
		sum = carry;
		if (i >= 0)
			sum += n1[i] - '0';
		if (j >= 0)
			sum += n2[j] - '0';

		carry = sum / 10;
		r[k] =(sum % 10) + '0';

		i--;
		j--;
		k--;	
	}

	if (carry > 0)
	{
		if (k == 0)
			return(0);
		r[k] = carry + '0';
		return (r+k);
	}
	else
	{
		return (r + k + 1);
	}
}
