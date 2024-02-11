/**
 * pop_listint - function that removes the head node of a list
 * @head: double pointer to the head node of the list
 *
 * This function removes the head node of a singly linked list and returns its value.
 * If the list is empty, it returns 0.
 *
 * Return: the value of the removed head node, or 0 if the list is empty
 */
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
