#include "main.h"

/**
 * _puts - Prints a string to stdout
 * @s: The string to print
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

/**
 * _putchar - Writes a character to stdout
 * @c: The character to write
 * Return: On success, 1; on error, -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 * Return: The converted integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int i = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] != '\0' && (s[i] >= '0' && s[i] <= '9'))
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return (sign * result);
}
