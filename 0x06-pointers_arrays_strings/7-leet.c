#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input string to encode
 *
 * Return: a pointer to the resulting encoded string
 */

char *leet(char *str)
{
	int i, j;
	char leet[] = "AaEeOoTtLl";
	char leet_replace[] = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (str[i] == leet[j])
			{
				str[i] = leet_replace[j];
				break;
			}
		}
	}

	return (str);
}
