#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * @d: A pointer to each data type in the structure
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
