#include<stdio.h>
/**
 * print_alphabet_x10 - main function that prints alphabets ten times
 *
 * Return:always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char b;

	for (i = 0; i < 10; i++)
	{
		for (b = 0; b < 10; b++)
			putchar(b);
		putchar('\n');
	}

}
