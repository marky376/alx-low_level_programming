#ifndef _3_CALC_H
#define _3_CALC_H


/**
 * struct op - Struct op
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op; // The operator
    int (*f)(int a, int b); // The function associated with the operator
} op_t;

/**
 * op_add - Adds two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The sum of the two integers
 */
int op_add(int a, int b);

/**
 * op_sub - Subtracts two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The difference between the two integers
 */
int op_sub(int a, int b);

/**
 * op_mul - Multiplies two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The product of the two integers
 */
int op_mul(int a, int b);

/**
 * op_div - Divides two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The quotient of the two integers
 */
int op_div(int a, int b);

/**
 * op_mod - Computes the modulus of two integers
 * @a: The first integer
 * @b: The second integer
 *
 * Return: The modulus of the two integers
 */
int op_mod(int a, int b);

/**
 * get_op_func - Selects the appropriate function to perform the operation
 * @s: The operator as a string
 *
 * Return: A pointer to the corresponding function, or NULL if the operator is invalid
 */
int (*get_op_func(char *s))(int, int);

#endif
