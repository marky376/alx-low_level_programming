/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The string to find the length of
 *
 * This function takes a string as input and recursively calculates its length.
 * It checks if the current character is the null terminator '\0', which indicates
 * the end of the string. If it is, the function returns 0. Otherwise, it adds 1
 * to the length returned by recursively calling itself with the next character
 * in the string. This process continues until the null terminator is reached.
 *
 * Return: The length of the string
 */
#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string using recursion
 * @s: The string to find the length of something
 * Return: The length of the string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
