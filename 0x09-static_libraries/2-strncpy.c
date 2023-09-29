#include "main.h"

/**
 * _strncpy - copies a string up to n bytes
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to copy
 *
 * Return: pointer to the destinition string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}

	return (dest);
}
