#include <unistd.h>

/**
 * _puts - prints a string followed by a new line
 * @str: pointers to the string to be printed
 */

void _puts(char *str)
{
	for (; *str; str++)
		_putchar(*str);
	_putchar('\n');
}
