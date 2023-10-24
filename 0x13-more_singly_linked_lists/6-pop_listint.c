#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - function that frees the head of a list
 * @head: the head pointer of a given list
 *
 * Return: frees the head  of a string
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *con;

	if (*head == NULL)
	{
		return (0);
	}

	con = *head;

	data = con->n;

	*head = (*head)->next;
	free(con);

	return (data);
}
