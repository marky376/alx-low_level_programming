#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function frees a list setting the head pointer to null
 * @head: the head pointer to the given list
 */

// This function frees a linked list by iterating through each node and freeing the memory.
// It also sets the head pointer to NULL to indicate that the list is empty.
// @head: The head pointer to the given list.

void free_listint2(listint_t **head)
{
	listint_t *normal;

	while (*head != NULL)
	{
		normal = *head;
		*head = (*head)->next;
		free(normal);
	}
	*head = NULL;
}
