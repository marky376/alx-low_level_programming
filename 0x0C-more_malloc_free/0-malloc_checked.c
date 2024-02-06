/**
 * malloc_checked - Allocates memory using malloc and checks if allocation was successful.
 * @b: The number of bytes to allocate.
 *
 * Return: On success, returns a pointer to the allocated memory.
 *         On failure, terminates the program with exit status 98.
 */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - function to cause normal process termination with a status
 * value of 98.
 * @b: the array size of element
 * Return: always ptr
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
