#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * free_listint - function that frees a given list
 * @head: the head pointer to the list
 *
 * This function frees the memory allocated for each node in a linked list.
 * It takes the head pointer of the list as a parameter and iterates through
 * the list, freeing each node one by one. The head pointer is updated to
 * point to the next node before freeing the current node. The process
 * continues until the head pointer becomes NULL, indicating the end of the list.
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
