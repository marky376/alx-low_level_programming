#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - function frees a list setting the head pointer to null
 * @head: the head pointer to the given list
 */

void free_listint2(listint_t **head)
{
	listint_t *normal;

	while (head != NULL)
	{
		normal = *head;
		*head = (*head)->next;
		free(normal);
	}
}
