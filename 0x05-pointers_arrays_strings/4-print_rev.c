#include "main.h"

/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: pointer to the string to be printed in reverse
 *
 * Description: This function takes a pointer to a string and prints the string
 *              in reverse order, followed by a new line character.
 *              It calculates the length of the string using a loop, then
 *              iterates backwards through the string and prints each character.
 *              Finally, it prints a new line character.
 */
void print_rev(char *s)
{
	int longi = 0;
	int o;

	// Calculate the length of the string
	while (*s != '\0')
	{
		longi++;
		s++;
	}

	s--;

	// Print the string in reverse order
	for (o = longi; o > 0; o--)
	{
		_putchar(*s);
		s--;
	}

	// Print a new line character
	_putchar('\n');
}
