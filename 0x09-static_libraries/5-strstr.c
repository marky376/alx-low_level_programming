#include "main.h"
#include <stdlib.h>

/**
 * _strstr - locates a substring in a string
 * @haystack: pointer to the string to search in
 * @needle: pointer to the substring to locate
 *
 * Description:
 * The _strstr() function locates the first occurrence of the substring
 * needle in the string haystack. The terminating null bytes ('\0') are not
 * compared.
 *
 * Return:
 * - a pointer to the beginning of the located substring, if the substring is found.
 * - NULL, if the substring is not found.
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && (*h == *n))
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
