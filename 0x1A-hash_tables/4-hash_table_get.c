#include "hash_tables.h"


/**
 * hash_table_get - Retrieve an element to the hash table.
 * @ht: The hash table.
 * @key: The key string.
 *
 * Return: the Value if successful, NULL otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((unsigned char *)key, ht->size);
	hash_node_t *current = ht->array[index];

	while (current)
	{
		if (!strcmp(current->key, key))
			return (current->value);
		current = current->next;
	}

	return (NULL);
}
