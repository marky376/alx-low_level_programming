/**
 * hash_table_create - function that creates a hash table
 * @size: unsigned long integer representing the size of the hash table
 *
 * This function creates a hash table of the specified size and initializes
 * all elements of the hash table to NULL.
 *
 * Return: On success, returns a pointer to the newly created hash table.
 *         On failure, returns NULL.
 */
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: unsigned long integer
 * Return: always a success creation
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(size * sizeof(hash_node_t *));

	if (ht->array == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		ht->array[i] = NULL;
	}
	return (ht);
}
