#include "main.h"
#include <string.h>

int is_palindrome_helper(char *s, int start, int end);
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: The string to check
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome(char *s)
{
	int len = strlen(s);

	if (len <= 1)
		return (1);
	return (is_palindrome_helper(s, 0, len - 1));
}

/**
 * is_palindrome_helper - Helper function to check if a string is a palindrome.
 * @s: The string to check
 * @start: The start index of the current comparison
 * @end: The end index of the current comparison
 * Return: 1 if s is a palindrome, 0 otherwise
 */

int is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
		return (1);
	if (s[start] != s[end])
		return (0);
	return (is_palindrome_helper(s, start + 1, end - 1));
}
