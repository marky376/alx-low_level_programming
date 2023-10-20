#include <stddef.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in the given list (list_t)
 * @h: a pointer to the head of the list
 *
 * Return: returns the number of elements on the linked list
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
