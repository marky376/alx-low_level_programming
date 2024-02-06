/**
 * str_concat - Concatenates two given strings
 * @s1: The first string
 * @s2: The second string
 *
 * This function takes two strings, s1 and s2, and concatenates them into a new string.
 * It allocates memory for the new string and returns a pointer to it.
 * If memory allocation fails, it returns NULL.
 *
 * Return: A pointer to a newly allocated string containing s1 followed by s2,
 *         or NULL if memory allocation fails.
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - Concatenates two given strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: A pointer to a newly allocated string containing s1 followed by s2
 *         if memory allocation fails, return NULL.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		concatenated[i] = s1[i];
	}
	for (j = 0; j < len2; j++)
	{
		concatenated[i + j] = s2[j];
	}
	concatenated[i + j] = '\0';

	return (concatenated);
}
