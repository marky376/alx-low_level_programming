#include <unistd.h>

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to be printed
 *
 * Description:
 * The _puts function takes a pointer to a string and prints the string
 * character by character until it reaches the null terminator '\0'.
 * After printing the string, it prints a new line character '\n'.
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		write(1, str, 1);
		str++;
	}

	write(1, "\n", 1);
}
