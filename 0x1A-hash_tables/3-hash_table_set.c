#include "hash_tables.h"


/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key string.
 * @value: The value string.
 *
 * Return: 1 if successful, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ht_size = ht->size;
	unsigned long int index = key_index((const unsigned char *) key, ht_size);
	hash_node_t *new_hash_node, *current;

	current = ht->array[index];
	while (current)
	{
		if (!strcmp(current->key, key))
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	new_hash_node = malloc(sizeof(hash_node_t));
	if (!new_hash_node)
		return (0);

	new_hash_node->key = strdup(key);
	new_hash_node->value = strdup(value);
	new_hash_node->next = NULL;
	if (!new_hash_node->key)
	{
		free(new_hash_node);
		return (0);
	}
	if (!new_hash_node->value)
	{
		free(new_hash_node->key);
		free(new_hash_node);
		return (0);
	}
	new_hash_node->next = ht->array[index];
	ht->array[index] = new_hash_node;
	return (1);
}
