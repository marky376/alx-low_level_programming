#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: pointer to the string to search
 * @accept: pointer to the string containing characters to match
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;

	while (*s)
	{
		found = 0;
		while (*accept)
		{
			if (*s == *accept)
			{
				found = 1;
				break;
			}
			accept++;
		}

		if (!found)
			

			break;


		count++;
		s++;
		accept = accept - count;
	}

	return (count);
}
