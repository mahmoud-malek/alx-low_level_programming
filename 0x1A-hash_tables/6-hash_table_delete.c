#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: The hash table
 *
 * Description: It deletes that whole hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *current = NULL, *next = NULL;
	unsigned long int i = 0;

	if (!ht)
		return;

	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			current = ht->array[i];
			while (current)
			{
				next = current->next;
				free(current->key);
				free(current->value);
				free(current);
				current = next;
			}
		}
	}

	free(ht->array);
	free(ht);
}
