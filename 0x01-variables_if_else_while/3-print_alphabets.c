#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the lowercase and uppercase alphabets
 * using a for loop and the putchar() function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	// Print lowercase alphabets
	for (c = 'a'; c <= 'z'; c++)
		putchar(c);

	// Print uppercase alphabets
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);

	putchar('\n');

	return (0);
}
