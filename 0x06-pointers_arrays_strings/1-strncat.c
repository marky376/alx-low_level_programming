/**
 * _strncat - concatenates two strings with a specified length
 * @dest: the destination string
 * @src: the source string to append
 * @n: the maximum number of characters to append from src
 *
 * This function takes two strings, `dest` and `src`, and appends the characters
 * from `src` to the end of `dest`. The maximum number of characters to append
 * is specified by the parameter `n`. If `n` is greater than the length of `src`,
 * the entire `src` string is appended. The resulting string is then null-terminated
 * and a pointer to the resulting string `dest` is returned.
 *
 * Return: a pointer to the resulting string `dest`
 */
#include "main.h"

/**
 * _strncat - concatenates two strings with a specified login
 * @dest: the destination string
 * @src: the source string to append
 * @n: the maximum number of characters to append from src
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int  n)
{
	int dest_len = 0;
	int src_len = 0;
	int i;

	/*Find the length of dest and src*/
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[src_len] != '\0')
		src_len++;
	/*Append src to dest up to n characters*/
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}

	/*Null-terminate the resulting string*/
	dest[dest_len + i] = '\0';

	return (dest);
}
