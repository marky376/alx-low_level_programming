#include "main.h"
#include <stddef.h>/*include the <stddef.h> for the NULL used in the program*/
/**
 * _strchr - locate a character in a string
 * @s: pointer to the string to search
 * @c: the character to locate
 *
 * Return: a pointer to the 1st occurence of char c in the string
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);

	return (NULL);
}
