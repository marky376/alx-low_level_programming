#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function to pe
 * rform the operation in question
 * @s: operator passed as an argument to the program
 *
 * Return: a pointer to the function that is linked to the operator
 */

int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i;

	i = 0;

	while (ops[i].op)
	{
		if (*s == *ops[i].op && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	printf("Error\n");
	exit(99);
}
