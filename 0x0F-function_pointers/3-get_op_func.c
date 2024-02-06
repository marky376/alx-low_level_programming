/**
 * get_op_func - selects the correct function to perform the operation in question
 * @s: operator passed as an argument to the program
 *
 * This function takes an operator as input and returns a pointer to the function
 * that is linked to the operator. It searches through an array of structs, `ops`,
 * which contains operator-function pairs. If a matching operator is found, the
 * corresponding function is returned. If no matching operator is found, an error
 * message is printed and the program exits with status code 99.
 *
 * Return: a pointer to the function that is linked to the operator
 */
int (*get_op_func(char *s))(int, int)
{
	// Array of operator-function pairs
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	int i = 0;

	// Iterate through the array of operator-function pairs
	while (ops[i].op)
	{
		// Check if the current operator matches the input operator
		if (*s == *ops[i].op && s[1] == '\0')
			return (ops[i].f);
		i++;
	}

	// If no matching operator is found, print an error message and exit
	printf("Error\n");
	exit(99);
}
