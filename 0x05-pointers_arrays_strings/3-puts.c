#include <unistd.h>

/**
 * _puts - prints a string followed by a new line
 * @str: pointers to the string to be printed
 */

void _puts(char *str)
{
	while (*str != '\n')
	{
		write(1, str, 1);
		str++;
	}

	write(1, "\n", 1);

}
