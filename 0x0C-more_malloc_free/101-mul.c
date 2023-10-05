#include <stdio.h>
#include <stdlib.h>

/**
 * @multiply: Takes two strings as input, converts them to integers and returns
 * their product.
 * @is_numeric: Checks if a string is composed of digits
 * @print_error_and_exit: Prints 'Error' and exits with a status code of 98.
 *
 * Return: always 0.
 */

int multiply(char *num1, char *num2);
int is_numeric(char *str);
void print_error_and_exit(void);


int main(int argc, char *argv[])
{
	char *num1, *num2;
	int result;

	if (argc != 3 || !is_numeric(argv[1]) || is_numeric(argv[2]))
	{
		print_error_and_exit();
	}

	num1 = argv[1];
	num2 = argv[2];

	result = multiply(num1, num2);

	printf("%d\n", result);

	return (0);
}

int multiply(char *num1, char *num2)
{
	int n1 = atoi(num1);
	int n2 = atoi(num2);

	return (n1 * n2);
}

int is_numeric(char *str)
{
	int i;


	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

void print_error_and_exit(void)
{
	printf("Error\n");
	exit(98);
}
