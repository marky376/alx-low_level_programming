/**
 * _strdup - Duplicates a string in memory
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string on success,
 *         or NULL if str is NULL or if memory allocation fails.
 */

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the newly created dog on success,
 *         or NULL if memory allocation fails.
 */
#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - Duplicates a string in memory
 * @str: The string to duplicate
 *
 * Return: A pointer to the duplicated string returns a success
 */

char *_strdup(char *str)
{
	char *dup_str;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	dup_str = malloc(sizeof(char) * (len + 1));

	if (dup_str == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		dup_str[i] = str[i];

	return (dup_str);
}

/**
 * new_dog - Creates a new dog
 * @name: The name of the dog
 * @age: The age of the dog
 * @owner: The owner of the dog
 *
 * Return: A pointer to the newly created dog success
 * of NULL in case of failure
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	new_dog->name = _strdup(name);
	new_dog->owner = _strdup(owner);

	if (new_dog->name == NULL || new_dog->owner == NULL)
	{
		free(new_dog->name);
		free(new_dog->owner);
		free(new_dog);

		return (NULL);
	}

	new_dog->age = age;

	return (new_dog);
}
