#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - Prints the details of a dog.
 * @d: A pointer to the dog structure to be printed.
 *
 * Description: This function prints the name, age, and owner of a dog.
 * If any of the fields are NULL, it prints "(nil)" instead.
 */
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
	}
}
