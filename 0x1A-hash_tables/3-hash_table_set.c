#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table to add or update the key/value pair.
 * @key: The key (cannot be an empty string).
 * @value: The value associated with the key (must be duplicated).
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *newNode, *current;

	if (!ht || !key || strcmp(key, "") == 0 || !value)
		return (0);
	idx = key_index((const unsigned char *)key, ht->size);
	/* Check if the key already exists in the linked list at idx */
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value); /* Free the old value */
			current->value = strdup(value);
			if (!current->value)
				return (0);
			return (1);
		}
		current = current->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (!newNode)
		return (0);
	newNode->key = strdup(key);
	if (!newNode->key)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (!newNode->value)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	/* Add the new node at the beginning of the list */
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}
