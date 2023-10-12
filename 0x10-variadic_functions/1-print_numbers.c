#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_numbers - prints the numbers in a function
 * separator - the string to be printed between numbers
 * @n: the number of integers passed to the function
 * @separator: separates numbers in a function
 *
 * Return: prints numbers followed by a new line
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int num;
	unsigned int i;

	va_list args;

	va_start(args, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (i < n - 1)
		{
			printf("%s", separator);
		}
	}


	printf("\n");
	va_end(args);

}
