#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints the required num of elements from list_t
 * @h: pointer to the head of the list
 *
 * Return: the total number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		count++;
		h = h->next;
	}

	return (count);
}
