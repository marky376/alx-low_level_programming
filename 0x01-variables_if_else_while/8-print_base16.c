#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the numbers from 0 to 9
 *              and the lowercase letters from a to f.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char j;

	// Print numbers from 0 to 9
	for (i = 0; i < 10; i++)
		putchar(i + '0');

	// Print lowercase letters from a to f
	for (j = 'a'; j <= 'f'; j++)
		putchar(j);

	putchar('\n');
	return (0);
}
