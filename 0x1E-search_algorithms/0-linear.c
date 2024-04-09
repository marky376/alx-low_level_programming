#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using
 *                 the Linear search algorithm.
 * @array: Pointer to the first element of the array to search in.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located,
 *         or -1 if value is not present in array or if array is NULL.
 */
int linear_search(int *array, size_t size, int value)
{
	int found = 0;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			found = 1;
			return (i);
		}
	}
	if (found == 0)
		return (-1);

	return (-1);
}
