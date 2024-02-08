/**
 * string_toupper - function that changes lowercase letters to uppercase in a string
 * @str: the input string
 *
 * This function takes a string as input and converts all lowercase letters to uppercase.
 * It iterates through each character in the string and checks if it is a lowercase letter.
 * If it is, it converts it to uppercase by subtracting the difference between 'a' and 'A'.
 * The modified string is then returned.
 *
 * Return: A pointer to the modified string.
 */
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
