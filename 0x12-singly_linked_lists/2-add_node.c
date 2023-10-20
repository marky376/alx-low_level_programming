#include <stddef.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>
#include <stdlib.h>

/**
 * add_node - function adds a new node at the beginning of a list (list_t)
 * @head: a pointer to the head of the list_t
 * @str: a string to be duplicated and added to the new node
 *
 * Return: returns the address of the new element or a NULL if it fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *str_copy;
	size_t str_len = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	if (str)
	{
		str_len = strlen(str);
		str_copy = strdup(str);

		if (str_copy == NULL)
		{
			free(new_node);
			return (NULL);
		}
	}

	else
	{
		str_copy = NULL;
	}

	new_node->str = str_copy;
	new_node->len = str_len;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

