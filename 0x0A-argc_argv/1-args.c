#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 * @argc: integer
 * @argv: string
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	if (argv != NULL && argv[0] != NULL)
		printf("%d\n", argc - 1);

	return (0);
}
