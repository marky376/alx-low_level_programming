#include "lists.h"

/**
 * sum_dlistint - returns the sum of all the data (n) of a list
 * @head: head pointer
 * Return: sum of linked list.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *data = head;

	if (head == NULL)
	{
		return (0);
	}
	while (data != NULL)
	{
		sum += data->n;
		data = data->next;
	}
	return (sum);
}
