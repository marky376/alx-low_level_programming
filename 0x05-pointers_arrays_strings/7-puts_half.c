#include "main.h"

/**
 * puts_half - a function that prints half of a string
 * @str: input string
 *
 * Description: This function takes a string as input and prints the second half of the string.
 * If the length of the string is odd, it prints the second half starting from the middle character.
 * If the length of the string is even, it prints the second half starting from the character after the middle.
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;

	// Calculate the length of the string
	for (a = 0; str[a] != '\0'; a++)
		longi++;

	// Calculate the starting index for the second half of the string
	n = (longi / 2);

	// If the length of the string is odd, adjust the starting index
	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	// Print the second half of the string
	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);

	// Print a new line character
	_putchar('\n');
}
