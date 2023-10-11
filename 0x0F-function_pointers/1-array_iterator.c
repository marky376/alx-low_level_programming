#include <stdio.h>
/**
 * array_iterator - looks for at every element in an array
 * @size: the size of the array
 * @action: the pointer to the function in use
 * @array: the specified array being used
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
