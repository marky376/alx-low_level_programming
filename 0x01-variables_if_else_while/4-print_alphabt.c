#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints all lowercase alphabets except 'q' and 'e'.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	// Loop through all lowercase alphabets
	for (i = 'a'; i <= 'z'; i++)
	{
		// Exclude 'q' and 'e'
		if (i != 'q' && i != 'e')
			putchar(i);
	}

	putchar('\n');

	return (0);
}
