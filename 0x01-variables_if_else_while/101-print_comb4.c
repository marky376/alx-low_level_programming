#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * This program prints all possible combinations of three digits,
 * without repetition, separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, k;

	// Loop through all possible values for the first digit (i)
	for (i = 48; i <= 55; i++)
	{
		// Loop through all possible values for the second digit (j)
		for (j = i + 1; j <= 56; j++)
		{
			// Loop through all possible values for the third digit (k)
			for (k = j + 1; k <= 57; k++)
			{
				// Print the three digits
				putchar(i);
				putchar(j);
				putchar(k);

				// Add comma and space if i is less than 55
				if (i < 55)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}

	// Print a new line
	putchar('\n');

	return (0);
}
