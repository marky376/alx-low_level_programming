#include "main.h"
#include <stdio.h>

/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments
 * @argv: An array of strings containing the command-line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num, k, result;
	int coins[] = {25, 10, 5, 2, 1};

	// Check if the number of command-line arguments is correct
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	// Convert the second command-line argument to an integer
	num = atoi(argv[1]);
	result = 0;

	// Check if the number is negative
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	// Calculate the minimum number of coins needed to make change
	for (k = 0; k < 5 && num >= 0; k++)
	{
		while (num >= coins[k])
		{
			result++;
			num -= coins[k];
		}
	}

	// Print the result
	printf("%d\n", result);
	return (0);
}
