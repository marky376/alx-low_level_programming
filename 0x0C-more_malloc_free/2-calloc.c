#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array and initializes it with zeros
 * @nmemb: Number of elements in the array
 * @size: Size of each element in bytes.
 *
 * Return: A pointer to the allocated memory or NULL in case of failure.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	/* Check for nmemb or size equal to 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);

	/* Allocate memory for the array */
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	/* Initialize the allocated memory to zero */
	for (i = 0; i < nmemb * size; i++)
		*((char *)ptr + i) = 0;

	return (ptr);
}
