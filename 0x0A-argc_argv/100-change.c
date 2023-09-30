#include "main.h"
#include <stdio.h>

/**
 * main - main entry
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: always 0
 */
int main(int argc, char *argv[])
{
    int num, j, result;
    int coins[] = {25, 10, 5, 2, 1};

    if (argc != 2)
    {
        printf("Error\n");
        return 1;
    }

	num = atoi(argv[1]);
	result = 0;

	if (num < 0)
	{
	printf("0\n");
	return 0;  /* Added return statement to exit early*/
	}

    for (j = 0; j < 5 && num >= 0; j++)
        {
                while (num >= coins[j])
                {
			result++;
			num -= coins[j];
		}
	}
		printf("%d\n", result);
		return (0);
}
