#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

int (*op_func)(int, int);

int main(int argc, char *argv[])
{
	int num1, result, num2;
	char *operator;

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	num1 = atoi(argv[1]);
	operator = argv[2];
	num2 = atoi(argv[3]);


	op_func = get_op_func(operator);

	result = op_func(num1, num2);

	printf("%d\n", result);

	return (0);
}
