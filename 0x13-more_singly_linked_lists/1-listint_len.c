#include "lists.h"
#include <stdio.h>
/**
 * listint_len - function returns the number of elements in a list
 * @h: pointer to the head of the list
 *
 * Return: always the number of elements in a given list
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
