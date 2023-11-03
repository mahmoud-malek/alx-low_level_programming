#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: The hash table to add or update the key/value pair.
 * @key: The key (cannot be an empty string).
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *cur = NULL;
	unsigned long int idx = 0;

	if (!ht || !key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	cur = ht->array[idx];
	/*check if there is a chain of that key*/

	while (cur)
	{
		if (strcmp(cur->key, key) == 0)
		{
			return (cur->value);
		}
		cur = cur->next;
	}

	return (NULL);
}
