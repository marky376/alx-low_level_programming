/**
 * free_dog - Frees a particular memory allocated for the dog struct
 * @d: Pointer to the dog struct to free
 *
 * This function frees the memory allocated for a dog struct, including the dynamically allocated
 * name and owner strings. It takes a pointer to the dog struct as a parameter and checks if it
 * is not NULL before freeing the memory. If the name and owner strings are not NULL, they are
 * also freed. Finally, the memory for the dog struct itself is freed.
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
