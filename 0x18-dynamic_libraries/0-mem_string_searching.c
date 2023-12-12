#include "main.h"

/**
 * _strcmp - Compares two strings
 * @s1: First string
 * @s2: Second string
 * Return: 0 if equal, <0 if s1<s2, >0 if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] != '\0')
		i++;
	return (s1[i] - s2[i]);
}

/**
 * _memset - Fills memory with a constant byte
 * @s: Memory area
 * @b: Byte to fill with
 * @n: Number of bytes to fill
 * Return: Pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

/**
 * _memcpy - Copies n bytes from src to dest
 * @dest: Destination memory area
 * @src: Source memory area
 * @n: Number of bytes to copy
 * Return: Pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}

/**
 * _strchr - Locates the first occurrence of a character in a string
 * @s: The string to search
 * @c: The character to locate
 * Return: Pointer to the first occurrence of c in s, or NULL if not found
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return ((*s == c) ? s : NULL);
}
