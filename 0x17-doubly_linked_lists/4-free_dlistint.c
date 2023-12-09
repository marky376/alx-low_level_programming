#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current, *last;

	current = head;
	while (current != NULL)
	{
		last = current->next;
		free(current);
		current = last;
	}
	head = NULL;
}
