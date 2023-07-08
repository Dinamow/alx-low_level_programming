#include "hash_tables.h"

/**
 * hash_table_create - create hash tables
 * @size: input
 *
 * Return: node
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;

	ht = malloc(sizeof(hash_table_t));
	ht->size = size;
	ht->array = calloc(ht->size, sizeof(hash_node_t));
	return ht;
}
