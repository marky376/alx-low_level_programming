#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: The string to search
 * @accept: The characters to accept in the prefix
 * Return: The number of bytes in the initial segment of s that consist
 * only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;

	while (*s != '\0' && _strchr(accept, *s++) != NULL) // Iterate through the string until a character not in accept is found
		count++;
	return (count);
}

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: The string to search
 * @accept: The set of bytes to search for
 * Return: Pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		if (_strchr(accept, *s) != NULL) // Iterate through the string until a character in accept is found
			return (s);
		s++;
	}
	return (NULL);
}

/**
 * _strstr - Locates a substring
 * @haystack: The string to search
 * @needle: The substring to locate
 * Return: Pointer to the beginning of the located substring, or NULL if
 * the substring is not found
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *start = haystack;
		char *pattern = needle;

		while (*haystack != '\0' && *pattern != '\0' && *haystack == *pattern) // Iterate through the string and the pattern until a mismatch is found
		{
			haystack++;
			pattern++;
		}

		if (*pattern == '\0') // If the pattern is fully matched, return the start pointer
			return (start);

		haystack = start + 1; // Move the haystack pointer to the next character
	}

	return (NULL); // Return NULL if the substring is not found
}
