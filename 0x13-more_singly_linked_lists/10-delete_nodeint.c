#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - function that deletes a node at index of a list
 * @head: the head pointer of the given list
 * @index: the index of the node that should be deleted
 *
 * Return: always 1 if it succeeded -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current = *head;
	listint_t *bef = NULL;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (current != NULL && count < index)
	{
		bef = current;
		current = current->next;
		count++;
	}

	bef->next = current->next;
	free(current);
	return (1);
}
