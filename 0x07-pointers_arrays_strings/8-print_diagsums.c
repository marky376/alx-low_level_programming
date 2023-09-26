#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the matrix(number of rows or columns)
 */

void print_diagsums(int *a, int size)
{
	int i, sum_diag1 = 0, sum_diag2 = 0;

	for (i = 0; i < size; i++)
	{
		sum_diag1 += a[i * size + i];
		sum_diag2 += a[i * size + (size - 1 - i)];
	}

	printf("Sum of diagonal 1: %d\n", sum_diag1);
	printf("Sum of diagonal 2: %d\n", sum_diag2);
}
