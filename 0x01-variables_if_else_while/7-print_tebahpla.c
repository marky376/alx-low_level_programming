#include<stdio.h>

/**
 * main - Entry point of the program
 *
 * This function prints the lowercase alphabet in reverse order.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char i;

	// Loop through the lowercase alphabet in reverse order
	for (i = 'z'; i >= 'a'; i--)
		putchar(i);

	putchar('\n');

	return (0);
}
