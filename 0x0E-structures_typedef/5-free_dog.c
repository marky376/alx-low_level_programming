#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - Frees a particular memory allocated for the dog struct
 * @d: Pointer to the dog struct to free
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		/* Free the dynamically allocated name and owner strings */
		if (d->name != NULL)
			free(d->name);
		if (d->owner != NULL)
			free(d->owner);

		/* Free the dog structure itself */
		free(d);
	}
}
