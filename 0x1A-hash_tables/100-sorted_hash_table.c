/**
 * shash_table_create - Creates a sorted hash table.
 * @size: size of new sorted hash table.
 *
 * Return: error return NULL, else a pointer to the new sorted hash table.
 */
shash_table_t *shash_table_create(unsigned long int size)

/**
 * shash_table_set - Adds an element to a sorted hash table.
 * @ht: pointer to the sorted hash table.
 * @key: key to add (cannot be an empty string)
 * @value: value in hash table
 *
 * Return: failure 0, success 1
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)

/**
 * shash_table_get - Retrieve the value
 * @ht: A pointer to the sorted hash table.
 * @key: The key to get the value of.
 *
 * Return: If the key cannot be matched - NULL.
 *         Otherwise - the value associated with key in ht.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)

/**
 * shash_table_print - Prints a sorted hash table in order.
 * @ht: pointer to the sorted hash table.
 */
void shash_table_print(const shash_table_t *ht)

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: pointer to the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: pointer to the sorted hash table.
 */
void shash_table_delete(shash_table_t *ht)
