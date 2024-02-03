#include "hash_tables.h"
/**
 * hash_table_create - Creates a hash table of a specified size
 * @size: The size of the hash table
 *
 * Return: A pointer to the newly created hash table, or NULL on failure
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *create = malloc(sizeof(hash_table_t));

	create->size = size;
	create->array = malloc(size * sizeof(hash_node_t));

	return (create);
}
