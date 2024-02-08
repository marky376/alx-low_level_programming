/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: pointer to the square matrix
 * @size: size of the matrix (number of rows or columns)
 *
 * This function calculates the sum of the two diagonals of a square matrix
 * and prints the result. The matrix is represented by a one-dimensional array
 * using row-major order. The size parameter specifies the number of rows or
 * columns in the matrix. The sum of the main diagonal is stored in the
 * variable sum_diag1, while the sum of the secondary diagonal is stored in
 * the variable sum_diag2. The function then prints the sum of the main diagonal
 * and the sum of the secondary diagonal using the printf function.
 */
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
