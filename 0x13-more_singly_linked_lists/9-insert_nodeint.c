/**
 * insert_nodeint_at_index - function that adds a new node in the list
 * depending on the index reference
 * @head: The head pointer to the given list
 * @idx: The index to iterate the list
 * @n: The value in the new node
 *
 * This function inserts a new node with the given value at the specified index
 * in a singly linked list. If the index is 0, the new node becomes the new head
 * of the list. If the index is greater than the number of nodes in the list,
 * the function returns NULL and does not modify the list.
 *
 * Return: The new node created, or NULL if the index is out of range or if
 * memory allocation fails.
 */
