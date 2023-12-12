#include "main.h"

/**
 * _strlen - Computes the length of a string
 * @s: The string
 * Return: The length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;
	return (length);
}

/**
 * _strcpy - Copies a string
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while ((dest[i] = src[i]) != '\0')
		i++;
	return (dest);
}

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 * Return: Pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = _strlen(dest);

	while (src[i] != '\0')
	{
		dest[j++] = src[i++];
		dest[j] = '\0';
	}
	return (dest);
}

/**
 * _strncat - Concatenates n characters from src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to concatenate
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = _strlen(dest);

	while (src[i] != '\0' && i < n)
	{
		dest[j++] = src[i++];
		dest[j] = '\0';
	}
	return (dest);
}

/**
 * _strncpy - Copies n characters from src to dest
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to copy
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
