#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block.
 * @ptr: A pointer to the memory previously allocated with malloc
 * @old_size: The density in bytes of the allocated space for ptr
 * @new_size: The new density in bytes of the new memory block.
 *
 *
 * Return: A pointer to the newly allocated memory or NULL in case of failure.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr = NULL;
	unsigned int i;

	/* If the new density is zero and ptr is not NULL, free ptr and return NULL*/
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* If ptr is NULL, allocate new memory using malloc*/
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	/* If new_size is equal to old_size, do nothing and return ptr*/
	if (new_size == old_size)
		return (ptr);

	/* Allocates new memory of the new_size*/
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	for (i = 0; i < new_size && i < old_size; i++)
		((char *)new_ptr)[i] = ((char *)ptr)[i];

	/* Free the old memory block*/
	free(ptr);

	return (new_ptr);
}
