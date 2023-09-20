#include "main.h"

/**
 * string_toupper - function changes lowercase to uppercase
 * @str: the input string
 *
 * Return: A ponter to  the modified string
 */

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			/* convert lowercase to uppercase*/
			str[i] = str[i] - ('a' - 'A');
		}
		i++;
	}
	return (str);
}
