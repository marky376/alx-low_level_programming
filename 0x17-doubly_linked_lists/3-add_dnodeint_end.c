#include "lists.h"

/**
 *add_dnodeint_end - function that adds a new node at the end
 *@head: head pointer
 *@n: data
 *Return: a new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *last = (*head);

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		(*head) = new_node;
	}
	else
	{
		while (last->next != NULL)
			last = last->next;

		new_node->prev = last;
		last->next = new_node;
	}

	return (new_node);
}
