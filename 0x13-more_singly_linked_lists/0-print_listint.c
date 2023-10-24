#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <string.h>

/**
 * print_listint - function that prints number of nodes
 * @h: the head pointer of the list
 *
 * Return: always number of nodes in list
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
