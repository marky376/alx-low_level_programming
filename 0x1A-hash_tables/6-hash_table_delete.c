/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 *
 * This function deletes a hash table by freeing the memory allocated for each
 * node in the hash table. It also frees the memory allocated for the array
 * and the hash table structure itself.
 */
#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: is the hash table
 * Return: nothing if ht is null
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	unsigned int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node != NULL)
		{
			temp = node;
			node = node->next;

			free(temp->key);
			free(temp->value);
			free(temp);

		}
	}
	free(ht->array);
	free(ht);
}
