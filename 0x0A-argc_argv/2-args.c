#include "main.h"
#include <stdio.h>

/**
 * main - entry point
 * @argc: number of arguments
 * @argv: array of arguments
 * 
 * Description: This program prints all the arguments passed to it.
 * 
 * Return: Always 0 (success)
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
