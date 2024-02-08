#include "hash_tables.h"

/**
 * key_index - function that gives you then index of a key
 * @key: the key to be hashed
 * @size: the size of the hash table
 *
 * Return: the index at which the key/value pair should be stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
