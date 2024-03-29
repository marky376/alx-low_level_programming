/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to a hash table
 * @key: constant string
 * @value: constant string
 * Return: 1 if successful, 0 otherwise
 */
#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: pointer to a hash table
 * @key: constant string
 * @value: constant string
 * Return: always a success
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *current_node;

	if (!ht || !key || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	current_node = ht->array[index];

	while (current_node)
	{
		if (!strcmp(current_node->key, key))
		{
			free(current_node->value);
			current_node->value = strdup(value);
			return (1);
		}
		current_node = current_node->next;
	}

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
