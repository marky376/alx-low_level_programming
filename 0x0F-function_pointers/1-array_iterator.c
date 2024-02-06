/**
 * array_iterator - Executes a given function on each element of an array.
 * @array: The array to iterate through.
 * @size: The size of the array.
 * @action: A pointer to the function to be executed on each element.
 *
 * Description: This function iterates through each element of the array and
 *              applies the given function to each element.
 *              If the array or the action function is NULL, the function does nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
