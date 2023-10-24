#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_listint - function that frees a given list
 * @head:the head pointer to the list
 */


void free_listint(listint_t *head)
{
	listint_t *normal;

	while (head != NULL)
	{
		normal = head;
		head = head->next;
		free(normal);
	}
}

