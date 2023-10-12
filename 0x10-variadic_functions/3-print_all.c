#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - function that prints anything
 * @format: a list of types of arguments passed to the function
 *
 * Return: prints anything
 */

void print_all(const char * const format, ...)
{
	char *separator;
	const char *format_rify = format;

	va_list args;

	va_start(args, format);
	separator = "";

	while (format && *format_rify)
	{
		if (*format_rify == 'c')
		{
			printf("%s %c", separator, va_arg(args, int));
		}
		else if (*format_rify == 'i')
		{
			printf("%s %d", separator, va_arg(args, int));
		}
		else if (*format_rify == 'f')
		{
			printf("%s %f", separator, (float)va_arg(args, double));
		}
		else if (*format_rify == 's')
		{
			char *tysm = va_arg(args, char *);

			if (tysm == NULL)
			{
				printf("%s (nil)", separator);
			}
			else
			{
				printf("%s %s", separator, tysm);
			}
		}
		separator = ";";
		format_rify +=1;
	}

	va_end(args);
	printf("\n");
}
