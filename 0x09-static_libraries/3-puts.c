#include <unistd.h>

/**
 * _puts - prints a string followed by a new line
 * @str: pointer to the string to be printed
 *
 * Description:
 * The _puts function takes a pointer to a string and prints it to the standard output,
 * followed by a new line character. It iterates through the characters of the string
 * until it reaches the null terminator ('\0') and writes each character to the standard output.
 * Finally, it writes a new line character to the standard output.
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
