#include "lists.h"
#include <stdio.h>

/**
 * listint_len - function returns the number of elements in a list
 * @h: pointer to the head of the list
 *
 * This function takes a pointer to the head of a linked list and counts the
 * number of elements in the list. It iterates through the list by following
 * the 'next' pointers until it reaches the end of the list.
 *
 * Return: the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
