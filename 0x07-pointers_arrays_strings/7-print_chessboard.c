#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - prints a chessboard
 * @a: the 2D array representing the chessboard
 *
 * This function takes a 2D array representing a chessboard and prints it to the console.
 * Each element of the array represents a square on the chessboard, and the function
 * prints the characters in the array to represent the chessboard.
 * The chessboard is printed as an 8x8 grid, with each row separated by a newline character.
 */
void print_chessboard(char(*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
			if (j != 7)
				putchar(' ');
		}
		putchar('\n');
	}
}
