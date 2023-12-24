#include "hash_tables.h"

/**
 * key_index - function that gives you then index of a key
 * @key: where key is the key index
 * @size: size is the size of the array of the hash table
 * Return: index at which the key/value pair
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;

	return (index);
}
