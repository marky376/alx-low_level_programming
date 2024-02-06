#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the numbers from 0 to 9 using the putchar function.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	// Loop through the numbers from 0 to 9
	for (i = 0; i < 10; i++)
		putchar(i);

	// Print a new line character
	putchar('\n');

	return (0);
}
