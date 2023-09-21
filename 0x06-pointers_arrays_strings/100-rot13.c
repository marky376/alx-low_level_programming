#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: The string to encode
 *
 * Return: A pointer to the encoded string
 */

char *rot13(char *s)
{
	char *ptr = s;
	char rot13_chars[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_map[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int i;

	while (*s)
	{
		for (i = 0; rot13_chars[i]; i++)
		{
			if (*s == rot13_chars[i])
			{
				*s = rot13_map[i];
				break;
			}
		}
		s++;
	}

	return (ptr);
}
