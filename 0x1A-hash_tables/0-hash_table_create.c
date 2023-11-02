#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table
 * @size: Size of the array
 *
 * Return: A pointer to the newly created hash table, or NULL if something
 * went wrong
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht =  malloc(sizeof(hash_table_t));

	if (!ht)
		return (NULL);

	ht->size = size;
	return (ht);
}
