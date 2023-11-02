#include "hash_tables.h"

/**
 * hash_table_create - a function that creates a hash table.
 * @size: is the size of the array
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	unsigned long i = 0;

	if (!size)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (!table)
		return (table);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t) * size);
	if (!table->array)
	{
		free(table);
		return (NULL);
	}

	for (; i < size; i++)
		table->array[i] = NULL;

	return (table);
}
