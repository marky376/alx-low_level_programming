#include <stdio.h>
#include <string.h>
#include "lists.h"
#include <stdlib.h>

/**
 * add_node_end - function adds a new node at the end of the given list
 * @head: a pointer to a pointer to the head of the list
 * @str: a string to be duplicated and added to the new node
 *
 * Return: returns the address of the new element or NULL if it fails
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->str = strdup(str);

	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->len = strlen(str);
	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}

	temp = *head;
	while (temp->next)
	{
		temp = temp->next;
	}

	temp->next = new_node;

	return (new_node);
}
