#include<stdio.h>

/**
 * _isalpha - checks if a character is an alphabet
 * @c: the character to be checked
 *
 * Description:
 * This function takes a character as input and checks if it is an alphabet.
 * It returns 1 if the character is an alphabet, and 0 otherwise.
 *
 * Return: 1 if the character is an alphabet, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
