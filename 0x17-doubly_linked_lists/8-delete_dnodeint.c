#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index
 * @head: head pointer
 * @index: index of node
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *temp;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}
	current = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		if (current == NULL)
			return (-1);
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	temp = current->prev;
	temp->next = current->next;
	if (current->next != NULL)
		current->next->prev = temp;
	free(current);
	return (1);
}
