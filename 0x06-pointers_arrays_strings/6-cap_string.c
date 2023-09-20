#include "main.h"

/**
 * cap_string - Capitalize all words in a string
 * @str: The Input string
 *
 * Return: A pointer to the modified string
 */

char *cap_string(char *)
{
	int i = 0;
	int capitalize = 1; 

	while (str[i] != '\0')
	{
		/* Checks if the current character is a separator*/
		if (str[i] == '' || str[i] == '\t' || str[i] == '\n' || str[i] == ',' ||
			       	str[i] == ';' || str[i] == '.' || str[i] == '!' || str[i] == '?' ||
			       	str[i] == '"' || str[i] == '(' || str[i] == ')' || str[i] == '{' ||
			       	str[i] == '}')
			{
				capitalize = 1; /* Set the flag to capitalizethe next character*/
			}
		else if (capitalize)
		{
			/* Checks if the current character is a lowercase letter*/
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				/* Convert lowercase letter to uppercase*/
				str[i] = str[i] - ('a' - 'A');
			}
			capitalize = 0; /* Reset the flag*/
		}
		i++;
	}

	return (str);
}
