#include "main.h"
#include <stddef.h>/*include the <stddef.h> for the NULL used in the program*/

/**
 * _strchr - locate a character in a string
 * @s: pointer to the string to search
 * @c: the character to locate
 *
 * This function searches for the first occurrence of the character 'c' in the string 's'.
 * It returns a pointer to the first occurrence of 'c' in 's', or NULL if 'c' is not found.
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
