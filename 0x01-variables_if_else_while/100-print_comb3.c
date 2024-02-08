#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two digits
 *              without repetition.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	// Loop through all possible first digits (from 0 to 8)
	for (i = 48; i <= 56; i++)
	{
		// Loop through all possible second digits (from i+1 to 9)
		for (j = i + 1; j <= 57; j++)
		{
			// Print the two digits
			putchar(i);
			putchar(j);

			// If the first digit is less than 8, print a comma and a space
			if (i < 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	// Print a new line
	putchar('\n');

	return (0);
}
