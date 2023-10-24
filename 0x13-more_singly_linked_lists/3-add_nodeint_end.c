#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: the head pointer of the list
 * @n: the element to be inserted in the newly created node
 *
 * Return: the newly created node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *normal;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
	}

	else
	{
		normal = *head;

		while (normal->next != NULL)
		{
			normal = normal->next;
		}

		normal->next = new_node;
	}

	return (new_node);
}
