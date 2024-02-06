/**
 * int_index - Returns the index of the first element in an array that matches a condition.
 * @array: The array of integers.
 * @size: The size of the array.
 * @cmp: A pointer to the function that compares integers.
 *
 * This function searches for an integer in the given array by applying the comparison function
 * to each element. It returns the index of the first element for which the comparison function
 * returns a non-zero value.
 *
 * Return: The index of the first matching element, or -1 if no match is found or if the size is
 *         less than or equal to zero.
 */
#include <stdio.h>
/**
 * int_index - the index of integers in an integer
 * @array: The array of integers
 * @size: The size of the array
 * @cmp: the pointer to the function that compares ints
 *
 * Return: always -1 if the size is less than or equal to zero
 */


int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) == 1)
		{
			return (i);
		}
	}
	return (-1);
}
