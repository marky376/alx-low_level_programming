#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

// Function to initialize the values of a dog structure
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	// Check if the dog structure pointer is not NULL
	if (d != NULL)
	{
		// Assign the name, age, and owner values to the dog structure
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
