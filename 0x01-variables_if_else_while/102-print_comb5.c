#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible combinations of two two-digit numbers
 *              without repeating any combination.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j;

	// Loop through all possible values of i from 0 to 99
	for (i = 0; i < 100; i++)
	{
		// Loop through all possible values of j from 0 to 99
		for (j = 0; j < 100; j++)
		{
			// Check if i is less than j to avoid repeating combinations
			if (i < j)
			{
				// Print the first two digits of i
				putchar((i / 10) + 48);
				// Print the last two digits of i
				putchar((i % 10) + 48);
				putchar(' ');
				// Print the first two digits of j
				putchar((j / 10) + 48);
				// Print the last two digits of j
				putchar((j % 10) + 48);

				// Check if it is not the last combination
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
