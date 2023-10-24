#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that prints out the sum of all the n values in the list
 * @head: the head pointer to the given list
 *
 * Return: returns the sum of all n's in the list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *mati = head;

	while (mati != NULL)
	{
		sum = sum + mati->n;
		mati = mati->next;
	}

	return (sum);
}
