#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - function that adds a new node in the list
 * depending on the index reference
 * @head: The head pointer to the given list
 * @idx: The index to iterate the list
 * @n: The value in the new node
 *
 * Return: The new node created
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{

	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *current = *head;
	unsigned int counter = 0;

	if (!new_node)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (current != NULL && counter < idx - 1)
	{
		current = current->next;
		counter++;
	}

	if (counter < idx - 1)
	{
		free(new_node);
		return (NULL);
	}

	
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
