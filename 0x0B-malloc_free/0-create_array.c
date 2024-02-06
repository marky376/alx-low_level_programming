#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 * @size: the size of array
 * @c: the character in the array
 *
 * Return: pointer to the created array, or NULL if size is 0 or if malloc fails
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	// Check if size is 0, return NULL
	if (size == 0)
	{
		return (NULL);
	}

	// Allocate memory for the array
	array = malloc(size * sizeof(char));
	// Check if malloc fails, return NULL
	if (array == NULL)
	{
		return (NULL);
	}

	// Initialize each element of the array with the given character
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}

	// Return the pointer to the created array
	return (array);
}
