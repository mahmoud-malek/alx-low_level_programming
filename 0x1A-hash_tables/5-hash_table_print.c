#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * @ht:  is the hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current = NULL;
	unsigned long int i = 0;
	int ok = 0;

	if (!ht)
		return;

	printf("{");
	for (; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			if (ok && i < ht->size - 1)
				printf(", ");

			current = ht->array[i];
			while (current)
			{
				printf("\'%s\': \'%s\'", current->key, current->value);

				if (current->next != NULL)
					printf(", ");
				current = current->next;
			}

			ok = 1;
		}
	}
	printf("}\n");
}
