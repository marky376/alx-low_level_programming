/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be printed in reverse
 *
 * This function takes a string as input and prints it in reverse order using recursion.
 * It starts by checking if the current character is the null character '\0', which marks the end of the string.
 * If it is, the function returns and the recursion stops.
 * If not, the function calls itself recursively with the next character in the string.
 * After the recursive call, the function prints the current character, effectively printing the string in reverse order.
 */
#include "main.h"

/**
 * _print_rev_recursion - Prints a string in reverse using recursion
 * @s: The string to be printed in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);/*Prints the current character*/
}
