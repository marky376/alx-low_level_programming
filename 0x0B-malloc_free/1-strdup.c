#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a certain string
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string, or the NULL if str is NULL
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	duplicate = (char *)malloc((len + 1) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	for (i = 0; i <= len; i++)
	{
		duplicate[i] = str[i];
	}

	return (duplicate);
}
