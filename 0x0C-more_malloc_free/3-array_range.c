/**
 * array_range - Creates an array of integers from minimum to maximum.
 * @min: The minimum value.
 * @max: The maximum value.
 *
 * This function takes in a minimum value and a maximum value and creates
 * an array of integers that includes all values from the minimum to the
 * maximum, inclusive. The function dynamically allocates memory for the
 * array and returns a pointer to the newly created array.
 *
 * If the minimum value is greater than the maximum value, the function
 * returns NULL to indicate a failure.
 *
 * Return: A pointer to the newly created array or NULL in case of failure.
 */
#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * array_range - Creates an array of integres from minimum to maximum
 * @min:  The minimum value
 * @max: The maximum value
 *
 *
 * Return: A pointer to the newly created array or NULL in case of
 * a failure.
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;
	return (array);
}
