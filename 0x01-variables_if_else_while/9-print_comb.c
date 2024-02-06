#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	// Loop through numbers from 0 to 9
	for (i = 0; i < 10; i++)
	{
		// Check if the number is not equal to 9
		if (i != 9)
		{
			// Print the number followed by a comma and a space
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	}

	// Print a new line character
	putchar('\n');

	return (0);
}
