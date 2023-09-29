#include "main.h"

/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string to be concatenated to dest
 *
 * Return: A pointer to the resulting concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}

	for (int i = 0; i < src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}

	dest[dest_len + src_len] = '\0';

	return (dest);
}
