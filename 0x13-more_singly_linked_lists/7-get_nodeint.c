/**
 * get_nodeint_at_index - function that returns the nth node in a linked list
 * @head: pointer to the head of the linked list
 * @index: index of the node to be returned
 *
 * This function traverses the linked list starting from the head node and returns
 * the node at the specified index. If the index is out of range, it returns NULL.
 *
 * Return: pointer to the nth node, or NULL if the index is out of range
 */
#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - function that produces the nth node in a given list
 * @head: the head pointer to the list
 * @index: the iterating factor in the list
 *
 * Return: always NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *con = head;

	while (con != NULL)
	{
		if (counter == index)
		{
			return (con);
		}

		con = con->next;
		counter++;
	}

	return (NULL);
}
